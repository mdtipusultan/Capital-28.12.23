package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Double
import kotlin.String

public class AccountTransactionQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getAccountTransactionData(mapper: (
    transferType: String?,
    totalAmount: Double?,
    description: String?,
    quantity: String?,
    date: String?,
    identity: String?,
  ) -> T): Query<T> = Query(-1_211_646_098, arrayOf("AccountTransactionData"), driver,
      "AccountTransaction.sq", "getAccountTransactionData", """
  |SELECT *
  |FROM AccountTransactionData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getDouble(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5)
    )
  }

  public fun getAccountTransactionData(): Query<AccountTransactionData> =
      getAccountTransactionData { transferType, totalAmount, description, quantity, date,
      identity ->
    AccountTransactionData(
      transferType,
      totalAmount,
      description,
      quantity,
      date,
      identity
    )
  }

  public fun <T : Any> getAccountTransactionByUniqueId(uniqueId: String?, mapper: (
    transferType: String?,
    totalAmount: Double?,
    description: String?,
    quantity: String?,
    date: String?,
    identity: String?,
  ) -> T): Query<T> = GetAccountTransactionByUniqueIdQuery(uniqueId) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getDouble(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5)
    )
  }

  public fun getAccountTransactionByUniqueId(uniqueId: String?): Query<AccountTransactionData> =
      getAccountTransactionByUniqueId(uniqueId) { transferType, totalAmount, description, quantity,
      date, identity ->
    AccountTransactionData(
      transferType,
      totalAmount,
      description,
      quantity,
      date,
      identity
    )
  }

  public fun insertAccountTransactionData(
    transferType: String?,
    totalAmount: Double?,
    description: String?,
    quantity: String?,
    date: String?,
    identity: String?,
  ) {
    driver.execute(12_458_999, """
        |INSERT INTO AccountTransactionData(transferType, totalAmount, description, quantity, date, identity)
        |VALUES( ?, ?, ?, ?, ?,?)
        """.trimMargin(), 6) {
          bindString(0, transferType)
          bindDouble(1, totalAmount)
          bindString(2, description)
          bindString(3, quantity)
          bindString(4, date)
          bindString(5, identity)
        }
    notifyQueries(12_458_999) { emit ->
      emit("AccountTransactionData")
    }
  }

  public fun deleteAccountTransactionData() {
    driver.execute(-621_200_023, """DELETE FROM AccountTransactionData""", 0)
    notifyQueries(-621_200_023) { emit ->
      emit("AccountTransactionData")
    }
  }

  private inner class GetAccountTransactionByUniqueIdQuery<out T : Any>(
    public val uniqueId: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("AccountTransactionData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("AccountTransactionData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM AccountTransactionData WHERE transferType ${ if (uniqueId == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueId)
    }

    override fun toString(): String = "AccountTransaction.sq:getAccountTransactionByUniqueId"
  }
}
