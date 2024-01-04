package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.Double
import kotlin.String

public class AccountInstrumentQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getAccountInstrumentData(mapper: (
    instrumentIndex: Double,
    long_name: String?,
    short_name: String?,
    value_: Double?,
    closed_price: Double?,
    change: Double?,
    change_icon: Double?,
    total_quantity: Double?,
    salable_quantity: Double?,
    average_cost: Double?,
    total_cost: Double?,
    close_price: Double?,
    unrealized_gain: Double?,
    gain_percent: Double?,
    cost_value: Double?,
  ) -> T): Query<T> = Query(1_859_987_494, arrayOf("AccountInstrumentData"), driver,
      "AccountInstrument.sq", "getAccountInstrumentData", """
  |SELECT *
  |FROM AccountInstrumentData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getDouble(0)!!,
      cursor.getString(1),
      cursor.getString(2),
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
      cursor.getDouble(14)
    )
  }

  public fun getAccountInstrumentData(): Query<AccountInstrumentData> = getAccountInstrumentData {
      instrumentIndex, long_name, short_name, value_, closed_price, change, change_icon,
      total_quantity, salable_quantity, average_cost, total_cost, close_price, unrealized_gain,
      gain_percent, cost_value ->
    AccountInstrumentData(
      instrumentIndex,
      long_name,
      short_name,
      value_,
      closed_price,
      change,
      change_icon,
      total_quantity,
      salable_quantity,
      average_cost,
      total_cost,
      close_price,
      unrealized_gain,
      gain_percent,
      cost_value
    )
  }

  public fun <T : Any> getAccountInstrumentByUniqueId(uniqueName: String?, mapper: (
    instrumentIndex: Double,
    long_name: String?,
    short_name: String?,
    value_: Double?,
    closed_price: Double?,
    change: Double?,
    change_icon: Double?,
    total_quantity: Double?,
    salable_quantity: Double?,
    average_cost: Double?,
    total_cost: Double?,
    close_price: Double?,
    unrealized_gain: Double?,
    gain_percent: Double?,
    cost_value: Double?,
  ) -> T): Query<T> = GetAccountInstrumentByUniqueIdQuery(uniqueName) { cursor ->
    mapper(
      cursor.getDouble(0)!!,
      cursor.getString(1),
      cursor.getString(2),
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
      cursor.getDouble(14)
    )
  }

  public fun getAccountInstrumentByUniqueId(uniqueName: String?): Query<AccountInstrumentData> =
      getAccountInstrumentByUniqueId(uniqueName) { instrumentIndex, long_name, short_name, value_,
      closed_price, change, change_icon, total_quantity, salable_quantity, average_cost, total_cost,
      close_price, unrealized_gain, gain_percent, cost_value ->
    AccountInstrumentData(
      instrumentIndex,
      long_name,
      short_name,
      value_,
      closed_price,
      change,
      change_icon,
      total_quantity,
      salable_quantity,
      average_cost,
      total_cost,
      close_price,
      unrealized_gain,
      gain_percent,
      cost_value
    )
  }

  public fun insertAccountInstrumentData(
    instrumentIndex: Double,
    long_name: String?,
    short_name: String?,
    value_: Double?,
    closed_price: Double?,
    change: Double?,
    change_icon: Double?,
    total_quantity: Double?,
    salable_quantity: Double?,
    average_cost: Double?,
    total_cost: Double?,
    close_price: Double?,
    unrealized_gain: Double?,
    gain_percent: Double?,
    cost_value: Double?,
  ) {
    driver.execute(-315_476_057, """
        |INSERT INTO AccountInstrumentData(instrumentIndex, long_name, short_name,value,closed_price, change,change_icon,total_quantity,
        |salable_quantity,average_cost,total_cost,close_price,unrealized_gain,gain_percent,cost_value)
        |VALUES( ?, ?, ?, ?, ?,?,?,?,
        |?,?,?,?,?,?,?)
        """.trimMargin(), 15) {
          bindDouble(0, instrumentIndex)
          bindString(1, long_name)
          bindString(2, short_name)
          bindDouble(3, value_)
          bindDouble(4, closed_price)
          bindDouble(5, change)
          bindDouble(6, change_icon)
          bindDouble(7, total_quantity)
          bindDouble(8, salable_quantity)
          bindDouble(9, average_cost)
          bindDouble(10, total_cost)
          bindDouble(11, close_price)
          bindDouble(12, unrealized_gain)
          bindDouble(13, gain_percent)
          bindDouble(14, cost_value)
        }
    notifyQueries(-315_476_057) { emit ->
      emit("AccountInstrumentData")
    }
  }

  public fun deleteAccountInstrumentData() {
    driver.execute(-751_558_667, """DELETE FROM AccountInstrumentData""", 0)
    notifyQueries(-751_558_667) { emit ->
      emit("AccountInstrumentData")
    }
  }

  private inner class GetAccountInstrumentByUniqueIdQuery<out T : Any>(
    public val uniqueName: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("AccountInstrumentData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("AccountInstrumentData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM AccountInstrumentData WHERE short_name ${ if (uniqueName == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueName)
    }

    override fun toString(): String = "AccountInstrument.sq:getAccountInstrumentByUniqueId"
  }
}
