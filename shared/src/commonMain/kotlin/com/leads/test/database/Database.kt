package com.leads.test.database

import com.leads.test.CapitaDb


internal class Database(databaseDriverFactory: DatabaseDriverFactory) {
    private val database = CapitaDb(databaseDriverFactory.createDriver())
}