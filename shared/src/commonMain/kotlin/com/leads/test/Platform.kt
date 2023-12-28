package com.leads.test

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform