package com.leads.test

import kotlin.Double
import kotlin.String

public data class AccountBalanceData(
  public val accountCode: String,
  public val accruedCharge: Double?,
  public val assetValue: Double?,
  public val buyingPower: Double?,
  public val cashBalance: Double?,
  public val costValue: Double?,
  public val currentBalance: Double?,
  public val deptEquityRatio: Double?,
  public val equity: Double?,
  public val equityDebtRatio: Double?,
  public val immatureBalance: Double?,
  public val loanRatio: Double?,
  public val marginEquity: Double?,
  public val marketValue: Double?,
  public val totalDeposit: Double?,
  public val totalWithdrawal: Double?,
  public val unclearCheque: Double?,
)
