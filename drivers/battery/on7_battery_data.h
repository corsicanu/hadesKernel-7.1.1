#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     70
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {27084, 700},
  {27490, 650},
  {28010, 600},
  {28574, 550},
  {29217, 500},
  {29960, 450},
  {30761, 400},
  {31676, 350},
  {32646, 300},
  {33708, 250},
  {34797, 200},
  {35896, 150},
  {36961, 100},
  {37972, 50},
  {38164, 40},
  {38353, 30},
  {38538, 20},
  {38719, 10},
  {38935, 0},
  {39113, -10},
  {39451, -30},
  {39564, -40},
  {39730, -50},
  {40447, -100},
  {41045, -150},
  {41528, -200},  
};


#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#define TEMP_HIGH_THRESHOLD_EVENT  550
#define TEMP_HIGH_RECOVERY_EVENT   500
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 550
#define TEMP_HIGH_RECOVERY_NORMAL  500
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    550
#define TEMP_HIGH_RECOVERY_LPM     500
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		50
#define BATT_SWELLING_LOW_TEMP_RECOV		100
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
