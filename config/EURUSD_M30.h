/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Alligator_Params_M30 : Indi_Alligator_Params {
  Indi_Alligator_Params_M30() : Indi_Alligator_Params(indi_alli_defaults, PERIOD_M30) {
    applied_price = (ENUM_APPLIED_PRICE)6;
    jaw_period = 30;
    jaw_shift = 0;
    teeth_period = 10;
    teeth_shift = 11;
    lips_period = 34;
    lips_shift = 0;
    ma_method = 2;
    shift = 0;
  }
} indi_alli_m30;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Alligator_Params_M30 : StgParams {
  // Struct constructor.
  Stg_Alligator_Params_M30() : StgParams(stg_alli_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = 0;
    price_stop_method = 0;
    price_stop_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_alli_m30;
