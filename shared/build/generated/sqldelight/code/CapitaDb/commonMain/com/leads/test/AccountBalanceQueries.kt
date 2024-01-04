package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Double
import kotlin.String

public class AccountBalanceQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getAccountBalance(mapper: (
    accountCode: String,
    accruedCharge: Double?,
    assetValue: Double?,
    buyingPower: Double?,
    cashBalance: Double?,
    costValue: Double?,
    currentBalance: Double?,
    deptEquityRatio: Double?,
    equity: Double?,
    equityDebtRatio: Double?,
    immatureBalance: Double?,
    loanRatio: Double?,
    marginEquity: Double?,
    marketValue: Double?,
    totalDeposit: Double?,
    totalWithdrawal: Double?,
    unclearCheque: Double?,
  ) -> T): Query<T> = Query(1_584_330_724, arrayOf("AccountBalanceData"), driver,
      "AccountBalance.sq", "getAccountBalance", """
  |SELECT *
  |FROM AccountBalanceData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0)!!,
      cursor.getDouble(1),
      cursor.getDouble(2),
      cursor.getDouble(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getDouble(6),
      cursor.getDouble(7),
      cursor.getDouble(8),
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16)
    )
  }

  public fun getAccountBalance(): Query<AccountBalanceData> = getAccountBalance { accountCode,
      accruedCharge, assetValue, buyingPower, cashBalance, costValue, currentBalance,
      deptEquityRatio, equity, equityDebtRatio, immatureBalance, loanRatio, marginEquity,
      marketValue, totalDeposit, totalWithdrawal, unclearCheque ->
    AccountBalanceData(
      accountCode,
      accruedCharge,
      assetValue,
      buyingPower,
      cashBalance,
      costValue,
      currentBalance,
      deptEquityRatio,
      equity,
      equityDebtRatio,
      immatureBalance,
      loanRatio,
      marginEquity,
      marketValue,
      totalDeposit,
      totalWithdrawal,
      unclearCheque
    )
  }

  public fun <T : Any> getAccountBalanceByUniqueId(uniqueCode: String, mapper: (
    accountCode: String,
    accruedCharge: Double?,
    assetValue: Double?,
    buyingPower: Double?,
    cashBalance: Double?,
    costValue: Double?,
    currentBalance: Double?,
    deptEquityRatio: Double?,
    equity: Double?,
    equityDebtRatio: Double?,
    immatureBalance: Double?,
    loanRatio: Double?,
    marginEquity: Double?,
    marketValue: Double?,
    totalDeposit: Double?,
    totalWithdrawal: Double?,
    unclearCheque: Double?,
  ) -> T): Query<T> = GetAccountBalanceByUniqueIdQuery(uniqueCode) { cursor ->
    mapper(
      cursor.getString(0)!!,
      cursor.getDouble(1),
      cursor.getDouble(2),
      cursor.getDouble(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getDouble(6),
      cursor.getDouble(7),
      cursor.getDouble(8),
      cursor.getDouble(9),
      cursor.getDouble(10),
      cursor.getDouble(11),
      cursor.getDouble(12),
      cursor.getDouble(13),
      cursor.getDouble(14),
      cursor.getDouble(15),
      cursor.getDouble(16)
    )
  }

  public fun getAccountBalanceByUniqueId(uniqueCode: String): Query<AccountBalanceData> =
      getAccountBalanceByUniqueId(uniqueCode) { accountCode, accruedCharge, assetValue, buyingPower,
      cashBalance, costValue, currentBalance, deptEquityRatio, equity, equityDebtRatio,
      immatureBalance, loanRatio, marginEquity, marketValue, totalDeposit, totalWithdrawal,
      unclearCheque ->
    AccountBalanceData(
      accountCode,
      accruedCharge,
      assetValue,
      buyingPower,
      cashBalance,
      costValue,
      currentBalance,
      deptEquityRatio,
      equity,
      equityDebtRatio,
      immatureBalance,
      loanRatio,
      marginEquity,
      marketValue,
      totalDeposit,
      totalWithdrawal,
      unclearCheque
    )
  }

  public fun insertAccountBalanceData(
    accountCode: String,
    accruedCharge: Double?,
    assetValue: Double?,
    buyingPower: Double?,
    cashBalance: Double?,
    costValue: Double?,
    currentBalance: Double?,
    deptEquityRatio: Double?,
    equity: Double?,
    equityDebtRatio: Double?,
    immatureBalance: Double?,
    loanRatio: Double?,
    marginEquity: Double?,
    marketValue: Double?,
    totalDeposit: Double?,
    totalWithdrawal: Double?,
    unclearCheque: Double?,
  ) {
    driver.execute(2_011_496_179, """
        |INSERT INTO AccountBalanceData(accountCode,accruedCharge,assetValue,buyingPower,cashBalance,costValue,
        |currentBalance,deptEquityRatio,equity,equityDebtRatio,immatureBalance,loanRatio,marginEquity,marketValue,totalDeposit,totalWithdrawal,unclearCheque)
        |VALUES(?,?,?,?,?,?,?,?,?,?,?,
        |?,?,?,?,?,?)
        """.trimMargin(), 17) {
          bindString(0, accountCode)
          bindDouble(1, accruedCharge)
          bindDouble(2, assetValue)
          bindDouble(3, buyingPower)
          bindDouble(4, cashBalance)
          bindDouble(5, costValue)
          bindDouble(6, currentBalance)
          bindDouble(7, deptEquityRatio)
          bindDouble(8, equity)
          bindDouble(9, equityDebtRatio)
          bindDouble(10, immatureBalance)
          bindDouble(11, loanRatio)
          bindDouble(12, marginEquity)
          bindDouble(13, marketValue)
          bindDouble(14, totalDeposit)
          bindDouble(15, totalWithdrawal)
          bindDouble(16, unclearCheque)
        }
    notifyQueries(2_011_496_179) { emit ->
      emit("AccountBalanceData")
    }
  }

  public fun deleteAccountBalance() {
    driver.execute(-641_774_821, """DELETE FROM AccountBalanceData""", 0)
    notifyQueries(-641_774_821) { emit ->
      emit("AccountBalanceData")
    }
  }

  private inner class GetAccountBalanceByUniqueIdQuery<out T : Any>(
    public val uniqueCode: String,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("AccountBalanceData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("AccountBalanceData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(-223_718_073,
        """SELECT * FROM AccountBalanceData WHERE accountCode = ?""", mapper, 1) {
      bindString(0, uniqueCode)
    }

    override fun toString(): String = "AccountBalance.sq:getAccountBalanceByUniqueId"
  }
}
