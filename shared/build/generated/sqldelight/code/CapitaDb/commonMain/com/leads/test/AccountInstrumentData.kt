package com.leads.test

import kotlin.Double
import kotlin.String

public data class AccountInstrumentData(
  public val instrumentIndex: Double,
  public val long_name: String?,
  public val short_name: String?,
  public val value_: Double?,
  public val closed_price: Double?,
  public val change: Double?,
  public val change_icon: Double?,
  public val total_quantity: Double?,
  public val salable_quantity: Double?,
  public val average_cost: Double?,
  public val total_cost: Double?,
  public val close_price: Double?,
  public val unrealized_gain: Double?,
  public val gain_percent: Double?,
  public val cost_value: Double?,
)
