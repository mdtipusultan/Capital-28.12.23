package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.String

public class VolumnDataQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getTradeVolumnData(mapper: (
    type: String?,
    market: String?,
    symbol: String?,
    name: String?,
    open_: String?,
    high: String?,
    low: String?,
    close: String?,
    volume: String?,
    value_: String?,
    trade: String?,
    change: String?,
    changePercent: String?,
    changeDirection: String?,
  ) -> T): Query<T> = Query(-1_139_983_974, arrayOf("VolumnData"), driver, "VolumnData.sq",
      "getTradeVolumnData", """
  |SELECT *
  |FROM VolumnData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5),
      cursor.getString(6),
      cursor.getString(7),
      cursor.getString(8),
      cursor.getString(9),
      cursor.getString(10),
      cursor.getString(11),
      cursor.getString(12),
      cursor.getString(13)
    )
  }

  public fun getTradeVolumnData(): Query<VolumnData> = getTradeVolumnData { type, market, symbol,
      name, open_, high, low, close, volume, value_, trade, change, changePercent,
      changeDirection ->
    VolumnData(
      type,
      market,
      symbol,
      name,
      open_,
      high,
      low,
      close,
      volume,
      value_,
      trade,
      change,
      changePercent,
      changeDirection
    )
  }

  public fun <T : Any> getVolumnDataByUnique(uniqueMarket: String?, mapper: (
    type: String?,
    market: String?,
    symbol: String?,
    name: String?,
    open_: String?,
    high: String?,
    low: String?,
    close: String?,
    volume: String?,
    value_: String?,
    trade: String?,
    change: String?,
    changePercent: String?,
    changeDirection: String?,
  ) -> T): Query<T> = GetVolumnDataByUniqueQuery(uniqueMarket) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4),
      cursor.getString(5),
      cursor.getString(6),
      cursor.getString(7),
      cursor.getString(8),
      cursor.getString(9),
      cursor.getString(10),
      cursor.getString(11),
      cursor.getString(12),
      cursor.getString(13)
    )
  }

  public fun getVolumnDataByUnique(uniqueMarket: String?): Query<VolumnData> =
      getVolumnDataByUnique(uniqueMarket) { type, market, symbol, name, open_, high, low, close,
      volume, value_, trade, change, changePercent, changeDirection ->
    VolumnData(
      type,
      market,
      symbol,
      name,
      open_,
      high,
      low,
      close,
      volume,
      value_,
      trade,
      change,
      changePercent,
      changeDirection
    )
  }

  public fun insertTradeVolumnData(
    type: String?,
    market: String?,
    symbol: String?,
    name: String?,
    open_: String?,
    high: String?,
    low: String?,
    close: String?,
    volume: String?,
    value_: String?,
    trade: String?,
    change: String?,
    changePercent: String?,
    changeDirection: String?,
  ) {
    driver.execute(-1_374_312_519, """
        |INSERT INTO VolumnData(type, market, symbol, name, open, high,low,close,volume,value,trade,change,changePercent,changeDirection)
        |VALUES( ?, ?, ?, ?, ?,?,?,?,?,?,?,?,?,?)
        """.trimMargin(), 14) {
          bindString(0, type)
          bindString(1, market)
          bindString(2, symbol)
          bindString(3, name)
          bindString(4, open_)
          bindString(5, high)
          bindString(6, low)
          bindString(7, close)
          bindString(8, volume)
          bindString(9, value_)
          bindString(10, trade)
          bindString(11, change)
          bindString(12, changePercent)
          bindString(13, changeDirection)
        }
    notifyQueries(-1_374_312_519) { emit ->
      emit("VolumnData")
    }
  }

  public fun deleteTradeVolumnData() {
    driver.execute(344_416_903, """DELETE FROM VolumnData""", 0)
    notifyQueries(344_416_903) { emit ->
      emit("VolumnData")
    }
  }

  private inner class GetVolumnDataByUniqueQuery<out T : Any>(
    public val uniqueMarket: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("VolumnData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("VolumnData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM VolumnData WHERE market ${ if (uniqueMarket == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueMarket)
    }

    override fun toString(): String = "VolumnData.sq:getVolumnDataByUnique"
  }
}
