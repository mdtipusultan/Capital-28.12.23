package com.leads.test.shared

import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.AfterVersion
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import com.leads.test.AccountBalanceQueries
import com.leads.test.AccountInstrumentQueries
import com.leads.test.AccountReceivableQueries
import com.leads.test.AccountTransactionQueries
import com.leads.test.CapitaDb
import com.leads.test.IndexQueries
import com.leads.test.InstrumentQueries
import com.leads.test.NewsQueries
import com.leads.test.ParticipationDataQueries
import com.leads.test.StatusDataQueries
import com.leads.test.VolumnDataQueries
import kotlin.Long
import kotlin.Unit
import kotlin.reflect.KClass

internal val KClass<CapitaDb>.schema: SqlSchema<QueryResult.Value<Unit>>
  get() = CapitaDbImpl.Schema

internal fun KClass<CapitaDb>.newInstance(driver: SqlDriver): CapitaDb = CapitaDbImpl(driver)

private class CapitaDbImpl(
  driver: SqlDriver,
) : TransacterImpl(driver), CapitaDb {
  override val accountBalanceQueries: AccountBalanceQueries = AccountBalanceQueries(driver)

  override val accountInstrumentQueries: AccountInstrumentQueries = AccountInstrumentQueries(driver)

  override val accountReceivableQueries: AccountReceivableQueries = AccountReceivableQueries(driver)

  override val accountTransactionQueries: AccountTransactionQueries =
      AccountTransactionQueries(driver)

  override val indexQueries: IndexQueries = IndexQueries(driver)

  override val instrumentQueries: InstrumentQueries = InstrumentQueries(driver)

  override val newsQueries: NewsQueries = NewsQueries(driver)

  override val participationDataQueries: ParticipationDataQueries = ParticipationDataQueries(driver)

  override val statusDataQueries: StatusDataQueries = StatusDataQueries(driver)

  override val volumnDataQueries: VolumnDataQueries = VolumnDataQueries(driver)

  public object Schema : SqlSchema<QueryResult.Value<Unit>> {
    override val version: Long
      get() = 1

    override fun create(driver: SqlDriver): QueryResult.Value<Unit> {
      driver.execute(null, """
          |CREATE TABLE AccountBalanceData (
          |    accountCode TEXT NOT NULL,
          |    accruedCharge REAL,
          |    assetValue REAL,
          |    buyingPower REAL,
          |    cashBalance REAL,
          |    costValue REAL,
          |    currentBalance REAL,
          |    deptEquityRatio REAL,
          |    equity REAL,
          |    equityDebtRatio REAL,
          |    immatureBalance REAL,
          |    loanRatio REAL,
          |    marginEquity REAL,
          |    marketValue REAL,
          |    totalDeposit REAL,
          |    totalWithdrawal REAL,
          |    unclearCheque REAL
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE AccountInstrumentData (
          |instrumentIndex REAL NOT NULL,
          |    long_name TEXT,
          |    short_name TEXT,
          |    value REAL,
          |    closed_price REAL,
          |    change REAL,
          |    change_icon REAL,
          |    total_quantity REAL,
          |    salable_quantity REAL,
          |    average_cost REAL,
          |    total_cost REAL,
          |    close_price REAL,
          |    unrealized_gain REAL,
          |    gain_percent REAL,
          |    cost_value REAL
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE AccountReceivableData(
          |    name TEXT,
          |    company1 TEXT,
          |    company2 TEXT,
          |    shareQuantity1 REAL,
          |    shareQuantity2 REAL,
          |    amount1 REAL,
          |    amount2 REAL
          |
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE AccountTransactionData (
          |    transferType TEXT,
          |    totalAmount REAL,
          |    description TEXT,
          |    quantity TEXT,
          |    date TEXT,
          |    identity TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE IndexData (
          |    type TEXT,
          |    market TEXT,
          |    symbol TEXT,
          |    name TEXT,
          |    open TEXT,
          |    high TEXT,
          |    low TEXT,
          |    close TEXT,
          |    volume TEXT,
          |    value TEXT,
          |    trade TEXT,
          |    change TEXT,
          |    changePercent TEXT,
          |    changeDirection TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE InstrumentData (
          |       type TEXT,
          |       market TEXT,
          |       symbol TEXT,
          |       name TEXT,
          |       open TEXT,
          |       high TEXT,
          |       low TEXT,
          |       close TEXT,
          |       volume TEXT,
          |       value TEXT,
          |       trade TEXT,
          |       change TEXT,
          |       changePercent TEXT,
          |       changeDirection TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE NewsData(
          |        title TEXT,
          |        description TEXT,
          |        date TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE ParticipationData (
          |    type TEXT,
          |    issuesAdvanced TEXT,
          |    issuesDeclined TEXT,
          |    issuesUnchanged TEXT,
          |    market TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE StatusData (
          |     type TEXT,
          |     market TEXT,
          |     status TEXT,
          |     updatedata TEXT
          |)
          """.trimMargin(), 0)
      driver.execute(null, """
          |CREATE TABLE VolumnData(
          |    type TEXT,
          |    market TEXT,
          |    symbol TEXT,
          |    name TEXT,
          |    open TEXT,
          |    high TEXT,
          |    low TEXT,
          |    close TEXT,
          |    volume TEXT,
          |    value TEXT,
          |    trade TEXT,
          |    change TEXT,
          |    changePercent TEXT,
          |    changeDirection TEXT
          |)
          """.trimMargin(), 0)
      return QueryResult.Unit
    }

    override fun migrate(
      driver: SqlDriver,
      oldVersion: Long,
      newVersion: Long,
      vararg callbacks: AfterVersion,
    ): QueryResult.Value<Unit> = QueryResult.Unit
  }
}
