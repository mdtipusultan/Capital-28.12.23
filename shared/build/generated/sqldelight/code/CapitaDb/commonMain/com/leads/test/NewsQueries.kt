package com.leads.test

import app.cash.sqldelight.Query
import app.cash.sqldelight.TransacterImpl
import app.cash.sqldelight.db.QueryResult
import app.cash.sqldelight.db.SqlCursor
import app.cash.sqldelight.db.SqlDriver
import kotlin.Any
import kotlin.String

public class NewsQueries(
  driver: SqlDriver,
) : TransacterImpl(driver) {
  public fun <T : Any> getNewsData(mapper: (
    title: String?,
    description: String?,
    date: String?,
  ) -> T): Query<T> = Query(1_344_199_790, arrayOf("NewsData"), driver, "News.sq", "getNewsData",
      """
  |SELECT *
  |FROM NewsData
  """.trimMargin()) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2)
    )
  }

  public fun getNewsData(): Query<NewsData> = getNewsData { title, description, date ->
    NewsData(
      title,
      description,
      date
    )
  }

  public fun <T : Any> getUniqueNews(uniqueTitle: String?, mapper: (
    title: String?,
    description: String?,
    date: String?,
  ) -> T): Query<T> = GetUniqueNewsQuery(uniqueTitle) { cursor ->
    mapper(
      cursor.getString(0),
      cursor.getString(1),
      cursor.getString(2)
    )
  }

  public fun getUniqueNews(uniqueTitle: String?): Query<NewsData> = getUniqueNews(uniqueTitle) {
      title, description, date ->
    NewsData(
      title,
      description,
      date
    )
  }

  public fun insertNewsData(
    title: String?,
    description: String?,
    date: String?,
  ) {
    driver.execute(-720_943_301, """
        |INSERT INTO NewsData(title,description,date)
        |VALUES( ?, ?, ?)
        """.trimMargin(), 3) {
          bindString(0, title)
          bindString(1, description)
          bindString(2, date)
        }
    notifyQueries(-720_943_301) { emit ->
      emit("NewsData")
    }
  }

  public fun deleteNewsData() {
    driver.execute(197_916_717, """DELETE FROM NewsData""", 0)
    notifyQueries(197_916_717) { emit ->
      emit("NewsData")
    }
  }

  private inner class GetUniqueNewsQuery<out T : Any>(
    public val uniqueTitle: String?,
    mapper: (SqlCursor) -> T,
  ) : Query<T>(mapper) {
    override fun addListener(listener: Query.Listener) {
      driver.addListener("NewsData", listener = listener)
    }

    override fun removeListener(listener: Query.Listener) {
      driver.removeListener("NewsData", listener = listener)
    }

    override fun <R> execute(mapper: (SqlCursor) -> QueryResult<R>): QueryResult<R> =
        driver.executeQuery(null,
        """SELECT * FROM NewsData WHERE title ${ if (uniqueTitle == null) "IS" else "=" } ?""",
        mapper, 1) {
      bindString(0, uniqueTitle)
    }

    override fun toString(): String = "News.sq:getUniqueNews"
  }
}
