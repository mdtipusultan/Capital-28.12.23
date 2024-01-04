package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Double
import kotlin.String

public class AccountReceivableQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getAccountReceivableData(mapper: (
    name: String?,
    company1: String?,
    company2: String?,
    shareQuantity1: Double?,
    shareQuantity2: Double?,
    amount1: Double?,
    amount2: Double?,
  ) -> T): Query<T> = Query(-20_062_064, arrayOf("AccountReceivableData"), driver,
      "AccountReceivable.sq", "getAccountReceivableData", """
  |SELECT *
  |FROM AccountReceivableData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getDouble(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getDouble(6)
    )
  }

  public fun getAccountReceivableData(): Query<AccountReceivableData> = getAccountReceivableData {
      name, company1, company2, shareQuantity1, shareQuantity2, amount1, amount2 ->
    AccountReceivableData(
      name,
      company1,
      company2,
      shareQuantity1,
      shareQuantity2,
      amount1,
      amount2
    )
  }

  public fun <T : Any> getAccountReceivableByUniqueName(uniqueName: String?, mapper: (
    name: String?,
    company1: String?,
    company2: String?,
    shareQuantity1: Double?,
    shareQuantity2: Double?,
    amount1: Double?,
    amount2: Double?,
  ) -> T): Query<T> = GetAccountReceivableByUniqueNameQuery(uniqueName) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getDouble(3),
      cursor.getDouble(4),
      cursor.getDouble(5),
      cursor.getDouble(6)
    )
  }

  public fun getAccountReceivableByUniqueName(uniqueName: String?): Query<AccountReceivableData> =
      getAccountReceivableByUniqueName(uniqueName) { name, company1, company2, shareQuantity1,
      shareQuantity2, amount1, amount2 ->
    AccountReceivableData(
      name,
      company1,
      company2,
      shareQuantity1,
      shareQuantity2,
      amount1,
      amount2
    )
  }

  public fun insertAccountReceivableData(
    name: String?,
    company1: String?,
    company2: String?,
    shareQuantity1: Double?,
    shareQuantity2: Double?,
    amount1: Double?,
    amount2: Double?,
  ) {
    driver.execute(-1_542_549_881, """
        |INSERT INTO AccountReceivableData(name, company1, company2, shareQuantity1, shareQuantity2, amount1 ,amount2)
        |VALUES( ?, ?, ?, ?, ?,?,?)
        """.trimMargin(), 7) {
          bindString(0, name)
          bindString(1, company1)
          bindString(2, company2)
          bindDouble(3, shareQuantity1)
          bindDouble(4, shareQuantity2)
          bindDouble(5, amount1)
          bindDouble(6, amount2)
        }
    notifyQueries(-1_542_549_881) { emit ->
      emit("AccountReceivableData")
    }
  }

  public fun deleteAccountReceivableData() {
    driver.execute(-1_978_632_491, """DELETE FROM AccountReceivableData""", 0)
    notifyQueries(-1_978_632_491) { emit ->
      emit("AccountReceivableData")
    }
  }

  private inner class GetAccountReceivableByUniqueNameQuery<out T : Any>(
    public val uniqueName: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("AccountReceivableData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("AccountReceivableData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM AccountReceivableData WHERE name ${ if (uniqueName == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueName)
    }

    override fun toString(): String = "AccountReceivable.sq:getAccountReceivableByUniqueName"
  }
}
