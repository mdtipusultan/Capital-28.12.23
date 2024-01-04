package com.leads.test.database

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import com.leads.test.CapitaDb

actual class DatabaseDriverFactory{
    actual fun createDriver(): SqlDriver {
        return NativeSqliteDriver(CapitaDb.Schema, "test.db")
    }
}