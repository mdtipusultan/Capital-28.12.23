package com.leads.test

import app.cash.sqldelight.Transacter
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.db.SqlSchema
import com.leads.test.shared.newInstance
import com.leads.test.shared.schema
import kotlin.Unit

public interface CapitaDb : Transacter {
  public val accountBalanceQueries: AccountBalanceQueries

  public val accountInstrumentQueries: AccountInstrumentQueries

  public val accountReceivableQueries: AccountReceivableQueries

  public val accountTransactionQueries: AccountTransactionQueries

  public val indexQueries: IndexQueries

  public val instrumentQueries: InstrumentQueries

  public val newsQueries: NewsQueries

  public val participationDataQueries: ParticipationDataQueries

  public val statusDataQueries: StatusDataQueries

  public val volumnDataQueries: VolumnDataQueries

  public companion object {
    public val Schema: SqlSchema<QueryResult.Value<Unit>>
      get() = CapitaDb::class.schema

    public operator fun invoke(driver: SqlDriver): CapitaDb = CapitaDb::class.newInstance(driver)
  }
}
