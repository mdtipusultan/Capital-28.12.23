package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.String

public class ParticipationDataQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getParticipationData(mapper: (
    type: String?,
    issuesAdvanced: String?,
    issuesDeclined: String?,
    issuesUnchanged: String?,
    market: String?,
  ) -> T): Query<T> = Query(1_589_125_770, arrayOf("ParticipationData"), driver,
      "ParticipationData.sq", "getParticipationData", """
  |SELECT *
  |FROM ParticipationData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4)
    )
  }

  public fun getParticipationData(): Query<ParticipationData> = getParticipationData { type,
      issuesAdvanced, issuesDeclined, issuesUnchanged, market ->
    ParticipationData(
      type,
      issuesAdvanced,
      issuesDeclined,
      issuesUnchanged,
      market
    )
  }

  public fun <T : Any> getParticipationByUnique(uniqueMarket: String?, mapper: (
    type: String?,
    issuesAdvanced: String?,
    issuesDeclined: String?,
    issuesUnchanged: String?,
    market: String?,
  ) -> T): Query<T> = GetParticipationByUniqueQuery(uniqueMarket) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2),
      cursor.getString(3),
      cursor.getString(4)
    )
  }

  public fun getParticipationByUnique(uniqueMarket: String?): Query<ParticipationData> =
      getParticipationByUnique(uniqueMarket) { type, issuesAdvanced, issuesDeclined,
      issuesUnchanged, market ->
    ParticipationData(
      type,
      issuesAdvanced,
      issuesDeclined,
      issuesUnchanged,
      market
    )
  }

  public fun insertParticipationData(
    type: String?,
    issuesAdvanced: String?,
    issuesDeclined: String?,
    issuesUnchanged: String?,
    market: String?,
  ) {
    driver.execute(-2_139_855_875, """
        |INSERT INTO ParticipationData(type, issuesAdvanced, issuesDeclined, issuesUnchanged, market)
        |VALUES (?, ?, ?, ?, ?)
        """.trimMargin(), 5) {
          bindString(0, type)
          bindString(1, issuesAdvanced)
          bindString(2, issuesDeclined)
          bindString(3, issuesUnchanged)
          bindString(4, market)
        }
    notifyQueries(-2_139_855_875) { emit ->
      emit("ParticipationData")
    }
  }

  public fun deleteParticipationData() {
    driver.execute(291_677_003, """DELETE FROM ParticipationData""", 0)
    notifyQueries(291_677_003) { emit ->
      emit("ParticipationData")
    }
  }

  private inner class GetParticipationByUniqueQuery<out T : Any>(
    public val uniqueMarket: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("ParticipationData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("ParticipationData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM ParticipationData WHERE market ${ if (uniqueMarket == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueMarket)
    }

    override fun toString(): String = "ParticipationData.sq:getParticipationByUnique"
  }
}
