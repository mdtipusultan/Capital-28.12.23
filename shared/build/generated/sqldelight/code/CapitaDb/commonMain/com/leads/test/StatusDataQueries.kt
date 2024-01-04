package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.String

public class StatusDataQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getStatusData(mapper: (
    type: String?,
    market: String?,
    status: String?,
    updatedata: String?,
  ) -> T): Query<T> = Query(707_210_244, arrayOf("StatusData"), driver, "StatusData.sq",
      "getStatusData", """
  |SELECT *
  |FROM StatusData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3)
    )
  }

  public fun getStatusData(): Query<StatusData> = getStatusData { type, market, status,
      updatedata ->
    StatusData(
      type,
      market,
      status,
      updatedata
    )
  }

  public fun <T : Any> getStatusByUnique(uniqueMarket: String?, mapper: (
    type: String?,
    market: String?,
    status: String?,
    updatedata: String?,
  ) -> T): Query<T> = GetStatusByUniqueQuery(uniqueMarket) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3)
    )
  }

  public fun getStatusByUnique(uniqueMarket: String?): Query<StatusData> =
      getStatusByUnique(uniqueMarket) { type, market, status, updatedata ->
    StatusData(
      type,
      market,
      status,
      updatedata
    )
  }

  public fun insertStatusData(
    type: String?,
    market: String?,
    status: String?,
    updatedata: String?,
  ) {
    driver.execute(-555_396_157, """
        |INSERT INTO StatusData(type, market, status, updatedata)
        |VALUES(?,?,?,?)
        """.trimMargin(), 4) {
          bindString(0, type)
          bindString(1, market)
          bindString(2, status)
          bindString(3, updatedata)
        }
    notifyQueries(-555_396_157) { emit ->
      emit("StatusData")
    }
  }

  public fun deleteStatusData() {
    driver.execute(2_000_785_461, """DELETE FROM StatusData""", 0)
    notifyQueries(2_000_785_461) { emit ->
      emit("StatusData")
    }
  }

  private inner class GetStatusByUniqueQuery<out T : Any>(
    public val uniqueMarket: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("StatusData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("StatusData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM StatusData WHERE  market${ if (uniqueMarket == null) " IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueMarket)
    }

    override fun toString(): String = "StatusData.sq:getStatusByUnique"
  }
}
