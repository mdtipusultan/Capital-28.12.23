package com.leads.test

import kotlin.Double
import kotlin.String

public data class AccountTransactionData(
  public val transferType: String?,
  public val totalAmount: Double?,
  public val description: String?,
  public val quantity: String?,
  public val date: String?,
  public val identity: String?,
)
