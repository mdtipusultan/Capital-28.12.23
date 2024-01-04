package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.String

public class InstrumentQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getInstrumentData(mapper: (
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
  ) -> T): Query<T> = Query(-911_255_250, arrayOf("InstrumentData"), driver, "Instrument.sq",
      "getInstrumentData", """
  |SELECT *
  |FROM InstrumentData
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

  public fun getInstrumentData(): Query<InstrumentData> = getInstrumentData { type, market, symbol,
      name, open_, high, low, close, volume, value_, trade, change, changePercent,
      changeDirection ->
    InstrumentData(
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

  public fun <T : Any> getInstrumentByUnique(uniqueName: String?, mapper: (
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
  ) -> T): Query<T> = GetInstrumentByUniqueQuery(uniqueName) { cursor ->
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

  public fun getInstrumentByUnique(uniqueName: String?): Query<IndexData> =
      getInstrumentByUnique(uniqueName) { type, market, symbol, name, open_, high, low, close,
      volume, value_, trade, change, changePercent, changeDirection ->
    IndexData(
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

  public fun insertInstrumentData(
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
    driver.execute(599_028_195, """
        |INSERT INTO InstrumentData (
        |    type,
        |    market,
        |    symbol,
        |    name,
        |    open,
        |    high,
        |    low,
        |    close,
        |    volume,
        |    value,
        |    trade,
        |    change,
        |    changePercent,
        |    changeDirection
        |) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
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
    notifyQueries(599_028_195) { emit ->
      emit("InstrumentData")
    }
  }

  public fun deleteInstrumentData() {
    driver.execute(-2_116_475_563, """DELETE FROM InstrumentData""", 0)
    notifyQueries(-2_116_475_563) { emit ->
      emit("InstrumentData")
    }
  }

  private inner class GetInstrumentByUniqueQuery<out T : Any>(
    public val uniqueName: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("IndexData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("IndexData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM IndexData WHERE name${ if (uniqueName == null) " IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueName)
    }

    override fun toString(): String = "Instrument.sq:getInstrumentByUnique"
  }
}
