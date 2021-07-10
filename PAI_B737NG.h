
#define REAL float
#define DREAL double
#define INT_S __int8
#define INT_H __int16
#define INT_W __int32

typedef struct PAI_AC_DYN
{
    // Latitude
    DREAL LAT;
    // Longitude
    DREAL LON;
    // Body-axis Lateral accel excluding gravity
    REAL ACC_LAT_BODY;
    // Body-axis Longitudinal accel excluding gravity
    REAL ACC_LON_BODY;
    // Body-axis Vertical accel excluding gravity
    REAL ACC_VERT_BODY;
    // Geometric Altitude
    REAL ALT_MSL;
    // Free Stream Angle of Attack
    REAL AOA;
    // Field Elevation HPa Setting LH
    REAL BARO_SETTING_L_HPA;
    // Field Elevation inHg Setting LH
    REAL BARO_SETTING_L_INHG;
    // Field Elevation HPa Setting RH
    REAL BARO_SETTING_R_HPA;
    // Field Elevation inHg Setting RH
    REAL BARO_SETTING_R_INHG;
    // Calibrated Airspeed
    REAL CAS;
    // Lateral CG
    REAL CG_LAT;
    // Longitudinal CG MAC
    REAL CG_MAC;
    // Ground Speed
    REAL GND_SPEED;
    // True Ground Track
    REAL GND_TRACK;
    // Euler Yaw Attitude = True Hdg
    REAL HDG_TRUE;
    // Indicated Airspeed - LH
    REAL IAS_L;
    // Indicated Airspeed - RH
    REAL IAS_R;
    // Indicated AOA - LH
    REAL IND_AOA;
    // Slip-Skid Indication LH
    REAL IND_SLIPSKID_L;
    // Mach Number
    REAL MACH;
    // Magnetic Variation = True Hdg - Magnetic Hdg
    REAL MAGVAR;
    // All-up Mass
    REAL MASS_AC;
    // Euler Pitch Attitude
    REAL PITCH;
    // Body-axis pitch rate
    REAL PITCH_RATE;
    // Vertical Speed
    REAL ROC;
    // Euler Roll Attitude
    REAL ROLL;
    // Vertical Speed
    REAL ROLL_RATE;
    // Euler Roll Attitude
    REAL SIDESLIP;
    //  Weight on Wheels - Any,,,True on contact,~,boolean,1
    INT_S WOW_ANY;
    // Weight on Wheels - Left Main,,,True on contact,~,boolean,1
    INT_S WOW_L;
    // Weight on Wheels - Nose,,,True on contact,~,boolean,1
    INT_S WOW_N;
    // Weight on Wheels - Right Main,,,True on contact,~,boolean,1
    INT_S WOW_R;
    // Body-axis yaw rate,,,Nose right,deg/s,float,4
    REAL YAW_RATE;

} PAI_AC_DYN;

typedef struct PAI_AUTOPILOT
{
    // Autopilot Active,,,True = engaged,~,boolean,1
    INT_S AP_ENG;
    // AP DISC,,,True on contact,~,boolean,1
    INT_S AP_DISC;
    // Autopilot Engaged,,,True = engaged,~,boolean,1
    INT_S AP_ENGAGED;
    // AP FAIL,,,True = failed,~,boolean,1
    INT_S AP_FAIL;
    // AP STAB TRIM Switch,"0=CUTOUT, 1=NORMAL",,~,~,boolean,1
    INT_S AP_STAB_TRIM_SW;
    // Approach push button,,,True on contact,~,boolean,1
    INT_S APPROACH_BTN;
    // Autothrottle Active,,,True = engaged,~,boolean,1
    INT_S AUTO_THROTTLE_ENG;
    // Pad out to 32 bit boundary
    INT_S i1_pad;
    // Flight Director Coupled Status,,,True = coupled,~,int,4
    INT_W FD_COUPLED;
    // FMA A/THR Armed,,,True = armed,~,boolean,1
    INT_S FMA_ATHR_ARMED;
    // FMA A/THR FMC SPD Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_FMC_SPD_ENG;
    // FMA A/THR GA Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_GA_ENG;
    // FMA A/THR MCP SPD Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_MCP_SPD_ENG;
    // FMA A/THR N1 Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_N1_ENG;
    // FMA A/THR RETARD Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_RETARD_ENG;
    // FMA A/THR THR HLD Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_ATHR_THR_HLD_ENG;
    // FMA CWS-P and CWS-R Active,,,True = engaged,~,boolean,1
    INT_S FMA_CWS_P_R_ENG;
    // FMA Back Course Armed,,,True = armed,~,boolean,1
    INT_S FMA_LAT_BC_ARM;
    // FMA Back Course Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_LAT_BC_ENG;
    // FMA Heading Select Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_LAT_HSEL_ENG;
    // FMA LNAV Armed,,,True = armed,~,boolean,1
    INT_S FMA_LAT_LNAV_ARM;
    // FMA LNAV Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_LAT_LNAV_ENG;
    // FMA Roll Attitude Hold Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_LAT_ROLL_HOLD_ENG;
    // FMA Lateral Rollout Mode Armed,,,True = armed,~,boolean,1
    INT_S FMA_LAT_ROLLOUT_ARM;
    // FMA Lateral Rollout Mode Engaged,,,True = engaged,~,boolean,1
    INT_S FMA_LAT_ROLLOUT_ENGAGED;
    // FMA VOR-LOC Armed,,,True = armed,~,boolean,1
    INT_S FMA_LAT_VOR_LOC_ARM;
    // FMA VOR-LOC Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_LAT_VOR_LOC_ENG;
    // FMA ALT/ACQ Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_ALT_ACQ_ENG;
    // FMA Altitude Hold Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_ALT_ENG;
    // FMA FLARE Mode Armed,,,True = armed,~,boolean,1
    INT_S FMA_VERT_FLARE_ARMED;
    // FMA FL Change with IAS Hold Active,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_FLC_IAS_ENG;
    // FMA FL Change with Mach Hold Active,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_FLC_MACH_ENG;
    // FMA TO/Go Around Mode Engaged,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_GA_ENG;
    // FMA Glide Slope Armed,,,True = armed,~,boolean,1
    INT_S FMA_VERT_GS_ARM;
    // FMA Glide Slope Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_GS_ENG;
    // FMA Vertical MCP SPD Mode Active,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_MCP_SPD_ENG;
    // FMA VNAV ALT Active,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_VNAV_ALT_ENG;
    // FMA VNAV FMS Mode Armed,,,True = armed,~,boolean,1
    INT_S FMA_VERT_VNAV_FMS_ARM;
    // FMA VNAV FMS Mode Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_VNAV_FMS_ENG;
    // FMA VNAV PATH Active,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_VNAV_PATH_ENG;
    // FMA VNAV SPD Active,,,True = engaged,~,boolean,1
    INT_S FMA_VERT_VNAV_SPD_ENG;
    // FMA Vertical Speed Armed,,,True = armed,~,boolean,1
    INT_S FMA_VERT_VS_ARMED;
    // FMA Vertical Speed Engaged,,,True = Engaged,~,boolean,1
    INT_S FMA_VERT_VS_ENG;
    // Any GO-AROUND button active,,,True = engaged,~,boolean,1
    INT_S GA_BTN_ANY_ENG;
    // GO-AROUND button LH,,,True on contact,~,boolean,1
    INT_S GA_BTN_L;
    // GO-AROUND button RH,,,True on contact,~,boolean,1
    INT_S GA_BTN_R;
    // STAB TRIM MANUAL Switch,,,"0=CUTOUT, 1=NORMAL",~,boolean,1
    INT_S STAB_TRIM_MAN_SW;
    // AP TRIM DISC LH,,,True on contact,~,boolean,1
    INT_S TRIM_DISC_L;
    // AP TRIM DISC RH,,,True on contact,~,boolean,1
    INT_S TRIM_DISC_R;
    // Active FCC Channel,,,"1=capt, 2=f/o",~,int,4
    INT_W FCC_ENG_CHANNEL;

} PAI_AUTOPILOT;

typedef struct PAI_BRAKE
{
    // Pilot LH brake pedal position,,,Forward,deg,float,4
    REAL BRAKE_PED_POSITION_PILOT_L;
    // Pilot RH brake pedal position,,,Forward,deg,float,4
    REAL BRAKE_PED_POSITION_PILOT_R;
    // Antiskid Switch,,,True = On,~,int,1
    INT_S BRAKE_ANTISKID_SW;
    // PARKING BRAKE Engaged,,,0=off 1=level 1 2=level 2 3=level 3 4=max 5=RTO,~,boolean,1
    INT_S PARKING_BRAKE_ENGAGED;
    // Pad out to 32 bit boundary
	INT_H i2_pad;

} PAI_BRAKE;


typedef struct PAI_ELEC
{
    // BATT Switch,"0=OFF, 1=ON",,~,~,boolean,1
    INT_S BATT_SW;
    // Elec Bus Transfer Switch,,,True = open,,boolean,1
    INT_S BUS_XFER_SW;
    // Cabin Util / Galley Power Switch,,,True = On,~,boolean,1
    INT_S CABIN_UTIL_PWR_SW;
    // Elec Gen1 Off Annunciation,,737: GEN 1 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_1_SRC_OFF,True = bright,~,int,1
    INT_S CWA_ELEC_GEN_1_OFF;
    // Elec Gen2 Off Annunciation,,737: GEN 2 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_2_SRC_OFF,True = bright,~,int,1
    INT_S CWA_ELEC_GEN_2_OFF;
    // BAT DISCHARGE Annunciation,,,True = On,~,boolean,1
    INT_S CWA_BATT_DISCHARGE;
    // GEN BUS 1 OFF Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_ELEC_GEN_BUS_1_OFF;
    // GEN BUS 2 OFF Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_ELEC_GEN_BUS_2_OFF;
    // GND POWER AVAILABLE Light,,,True = bright,~,boolean,1
    INT_S CWA_ELEC_GND_PWR_AVAIL;
    // Elec Gen1 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_ELEC_XFER_GEN_1_OFF;
    // Elec Gen2 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_ELEC_XFER_GEN_2_OFF;
    // Generator Drive 1 Disconnect Swtich,,,True = bright,~,boolean,1
    INT_S GEN_1_DRIVE_DISC_SW;
    // Elec Apu2 Control Switch,,,0=open, 1=on -1=off,~,boolean,1
    INT_S GEN_2_APU_SW;
    // APU GEN Switch 1,"0=open, 1=on -1=off",,~,~,int,1
    INT_S GEN_1_APU_SW;
    // Elec Eng Gen1 Control Switch,"0=open, 1=on -1=off",,~,~,int,1
    INT_S GEN_1_SW;
    // APU GEN Switch 2,"0=open, 1=on -1=off",,~,~,int,1
    INT_S GEN_2_SW;
    // STBY PWR Switch,"0 = OFF, 1=AUTO, 2=BAT",,~,~,int,1
    INT_S STBY_PWR_SW;
    // Elec Ground Power Control Switch,,,0=open, 1=on -1=off,~,boolean,1
    INT_S GND_PWR_SW;
    // Generator Drive 2 Disconnect Swtich,,,True = On,~,boolean,1
    INT_S GEN_2_DRIVE_DISC_SW;
    // IFE / PASS SEAT Power Switch,,,True = On,~,boolean,1
    INT_S PASS_SEAT_PWR_SW;
    // TR UNIT Annunciation,,,True = On,~,boolean,1
    INT_S CWA_ELEC_TR_UNIT;
    // ELEC amber lamp on AC/DC Metering Panel,,,True = illuminated,~,boolean,1
    INT_S CWA_ELEC_ELEC;
    // Pad out to 32 bit boundary
    INT_H i4_pad;
    // AC Load Indication,,,~,A,int,4
    INT_W  LOAD_AC_IND;
    // DC Load Indication,,,,A,int,4
    INT_W  LOAD_DC_IND; 
    // DC Display Selector,"737: 128=TEST, 1=STBY PWR, 2=BAT BUS, 4=BAT, 8=AUX BAT, 16=TR1, 32=TR2, 64=TR3",,~,~,int,4
    INT_W ELEC_AC_DISP_SEL;
    // AC Display Selector,"737: 64=TEST, 1=STBY PWR, 2=GRD PWR, 4=GEN 1, 8=APU GEN, 16=GEN 2, 32=INV",,~,~,int,4
    INT_W ELEC_DC_DISP_SEL;
    // CPS Frequency Indication,,,~,Hz,int,4
    INT_W CPS_FREQ_IND;
    // AC Voltage Indication,,,~,V,int,4
    INT_W  VOLTAGE_AC_IND;
    // DC Voltage Indication,,,~,V,int,4
    INT_W  VOLTAGE_DC_IND;

} PAI_ELEC;


typedef struct PAI_ENG
{
    // Engine #1 Fuel Flow,,,~,kg/hr,float,4
    REAL ENG_1_FF;
    // Engine #1 Oil Pressure Indication,,,~,indicated,float,4
    REAL ENG_1_IND_OIL_PRESS;
    // Engine #1 Oil Temperature Indication,,,~,deg C,float,4
    REAL ENG_1_IND_OIL_TEMP;
    // Engine #1 N1,,,~,%,float,4
    REAL ENG_1_N1;
    // Engine #1 N2,,,~,%,float,4
    REAL ENG_1_N2;
    // Engine #1 Oil Pressure,,,~,psi,float,4
    REAL ENG_1_OIL_PRESS;
    // Engine #1 Oil Temperature,,,~,deg C,float,4
    REAL ENG_1_OIL_TEMP;
    // Engine #1 Start Switch,"0=GND, 1=AUTO, 2=OFF, 3=CONT, 4=FLT",,~,Integer,int,4
    INT_W ENG_1_START_SW;
    // Engine #1 EGT,,,~,deg C,float,4
    REAL ENG_1_TGT;
    // Engine #1 Thrust Rev Lever,,,100% = max reverse,%,float,4
    REAL ENG_1_THRUST_REV_LEVER_POS;
    // Engine #1 TLA,,,Fwd,deg,float,4
    REAL ENG_1_TLA;
    // Engine #1 Vibration Level Display,,,,~,float,4
    REAL ENG_1_VIB_IND;
    // Engine #2 Fuel Flow,,,~,kg/hr,float,4
    REAL ENG_2_FF;
    // Engine #2 Oil Pressure Indication,,,~,psi,float,4
    REAL ENG_2_IND_OIL_PRESS;
    // Engine #2 Oil Temperature Indication,,,~,deg C,float,4
    REAL ENG_2_IND_OIL_TEMP;
    // Engine #2 N1,,,~,%,float,4
    REAL ENG_2_N1;
    // Engine #2 N2,,,~,%,float,4
    REAL ENG_2_N2;
    // Engine #2 Oil Pressure,,,~,psi,float,4
    REAL ENG_2_OIL_PRESS;
    // Engine #2 Oil Temperature,,,~,deg C,float,4
    REAL ENG_2_OIL_TEMP;
    // Engine #2 Start Switch,"0=GND, 1=AUTO, 2=OFF, 3=CONT, 4=FLT",,~,Integer,int,4
    INT_W ENG_2_START_SW;
    // Engine #2 EGT,,,~,deg C,float,4
    REAL ENG_2_TGT;
    // Engine #2 Thrust Rev Lever,,,100% = max reverse,%,float,4
    REAL ENG_2_THRUST_REV_LEVER_POS;
    // Engine #2 TLA,,,Fwd,deg,float,4
    REAL ENG_2_TLA;
    // Engine #2 Vibration Level Display,,,~,~,float,4
    REAL ENG_2_VIB_IND;
    // Ignition System Selector Switch,"0=A, 1=BOTH, 2=B",,,~,int,4
    INT_W ENG_IGN_SYS_SEL_SW;
    // Engine #1 Start In Progress,,,~,~,boolean,1
    INT_S ENG_1_START_IN_PROGRESS;
    // Engine #1 Thrust Rev Locked Off,,Transitions from False to True during REV Lever movement. Note reverse logic with /Engines/#1/RevLocked.,True = locked off,~,boolean,1
    INT_S ENG_1_THRUST_REV_ARMED;
    // Engine #1 Thrust Rev Selector,,,True = deploy,~,boolean,1
    INT_S ENG_1_THRUST_REV_SEL;
    // Engine #2 Start In Progress,,,~,~,boolean,1
    INT_S ENG_2_START_IN_PROGRESS;
    // Engine #2 Thrust Rev Locked Off,,,True = locked off,~,boolean,1
    INT_S ENG_2_THRUST_REV_ARMED;
    // Engine #2 Thrust Rev Selector,,,True = deploy,~,boolean,1
    INT_S ENG_2_THRUST_REV_SEL;
    // Padding
    INT_H i5_pad;

} PAI_ENG;

typedef struct PAI_ENV
{
    // Aircraft in storm cloud,,,True = in storm cloud,~,boolean,1
    INT_S AC_IN_STORM_CLOUD;
    // Pad out to 32 bit boundary
    INT_S i7_pad;
    // Pad out to 32 bit boundary
    INT_H i8_pad;
    // Outside Air Temperature,,,~,deg C,float,4
    REAL OAT;
    // Static Pressure as Altitude,,,~,ft,float,4
    REAL PRESS_ALT;
    // Runway contamination level,,,~,%,float,4
    REAL RWY_CONTAMINANT_LEVEL;
    // Runway contaminant type,,,"0= dry, 1 = damp, 2=wet, 3=flooded, 4=wet on residue - no water depth, 5=wet on residue - flooded depth, 6=melting slush, 7=freezing slush, 8=wet snow, 9=dry snow, 10=wet ice, 11=cold ice, 12=icy, 13=patchy wet, 14=patchy ice",~,int,4
    INT_W RWY_CONTAMINANT_TYPE;
    // Turbulence Intensity,,,~,%,float,4
    REAL TURB_INTENSITY;
    // Visibility,,,~,nm,float,4
    REAL VISIBILITY;
    // Wind Downward Component,,,Down,m/s,float,4
    REAL WIND_VEL_DN;
    // Wind Eastward,,,Towards East,m/s,float,4
    REAL WIND_VEL_E;
    // Wind Northward,,,Towards North,m/s,float,4
    REAL WIND_VEL_N;

} PAI_ENV;

typedef struct PAI_FC
{
    // Aileron trim,,,Right wing down,deg,float,4
    REAL AIL_TRIM_WHL_POS;
    // Alternate Flaps UP-DN Switch,"-1=DN, 0=OFF, 1=UP",,,~,int,4
    INT_W ATL_FLAP_EXT_RET_SW;
    // Column force,,,Aft,N,float,4
    REAL COL_FORCE_PILOT;
    // Column deflection,,,Aft,deg,float,4
    REAL COL_POS_PILOT;
    // FLAP Lever,,,Flap angle command,~,int,4
    INT_W FLAP_LEVER_POS;
    // FLAP LH Surface Position,,,,deg,float,4
    REAL FLAP_SURF_POS_L;
    // FLAP RH Surface Position,,,,deg,float,4
    REAL FLAP_SURF_POS_R;
    // Nose wheel angle,,,Right,deg,float,4
    REAL NOSEWHEEL_ANGLE;
    // Pitch trim,,,Increasing Fwd,deg,float,4
    REAL PITCH_TRIM_WHL_POS;
    // Rudder pedal force,,,Nose left,N,float,4
    REAL RUD_PED_FORCE_PILOT;
    // Rudder Pedal position,,,Nose left,deg,float,4
    REAL RUD_PED_POS_PILOT;
    // Yaw trim,,,Nose left,deg,float,4
    REAL RUD_TRIM_WHL_POS;
    // SPEED BRAKE control position,,,1.0 = full extend,~,float,4
    REAL SPEED_BRK_CTRL_POS;
    // Nose wheel tiller position,,,Positive Left,~,float,4
    REAL TILLER_POS;
    // Wheel angle,,,Right wing down,deg,float,4
    REAL WHL_POS_PILOT;
    // Alternate Flaps ARM Switch,,,"0=OFF, 1=ARM",,boolean,1
    INT_S ALT_FLAP_ARM_SW;
    // FC PANEL Auto Slat Fail Light,,,True = bright,~,boolean,1
    INT_S CWA_AUTO_SLAT_FAIL;
    // Elev Feel Differential Pressure Light,,,True = bright,~,boolean,1
    INT_S CWA_ELEV_FEEL_DIFF_PRESS;
    // Mach Trim Fail Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_MACH_TRIM_FAIL;
    // Speed Trim Fail Annunciation,,,True = bright,~,boolean,1
    INT_S CWA_SPEED_TRIM_FAIL;
    // Yaw Damper Fail Annunciation,,,True = illuminated,~,boolean,1
    INT_S CWA_YAW_DAMPER;
    // FLT CONTROL HYD SYS A Transfer Swtich,"0=OFF, 1=ON, 2=STBY RUD",,,~,boolean,1
    INT_S FLT_CTRL_HYD_SYS_A_XFER_SW;
    // FLT CONTROL HYD SYS B Transfer Swtich,"0=OFF, 1=ON, 2=STBY RUD",,,~,boolean,1
    INT_S FLT_CTRL_HYD_SYS_B_XFER_SW;
    // LE DEVICES Display TEST Button,,,True = Pressed,~,boolean,1
    INT_S LE_DEVICES_DISP_TEST_BTN;
    // SPOILER HYD SYS A Transfer Switch,,,"0=OFF, 1=ON",~,boolean,1
    INT_S SPOILER_HYD_SYS_A_XFER_SW;
    // SPOILER HYD SYS B Transfer Switch,,,"0=OFF, 1=ON",~,boolean,1
    INT_S SPOILER_HYD_SYS_B_XFER_SW;
    // LH Stick Shaker Active,,L & R systems are independent,True = engaged,~,boolean,1
    INT_S STICKSHAKER_ENG_L;
    // RH Stick Shaker Active,,L & R systems are independent,True = engaged,~,boolean,1
    INT_S STICKSHAKER_ENG_R;
    // Yaw Damper Active,,,True = engaged,~,boolean,1
    INT_S YD_ENG;
    // Yaw Damper Switch,,,True = ON,~,boolean,1
    INT_S YD_SWITCH;
    // padding
    INT_S i9_pad;

} PAI_FC;

typedef struct PAI_FUEL
{
    // Fuel Filter Bypass Annunciator - Left,"0=off, 1=on",,,~,int,4
    INT_W CWA_FUEL_FLTR_BP_L;
    // Fuel Filter Bypass Annunciator - Right,"0=off, 1=on",,,~,int,4
    INT_W CWA_FUEL_FLTR_BP_R;
    // Left Tank Pump 1 Low Pressure,,LEFT AFT,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_L_1;
    // Left Tank Pump 2 Low Pressure,,CTR LEFT,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_L_2;
    // Left Tank Pump 3 Low Pressure,,LEFT FWD,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_L_3;
    // Right Tank Aft Low Pressure,,RIGHT AFT,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_R_1;
    // Center Tank Right Low Pressure,,CTR RIGHT,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_R_2;
    // Right Tank Fwd Low Pressure,,RIGHT FWD,True = bright,~,boolean,1
    INT_S CWA_FUEL_LO_PRESS_R_3;
    // padding
    INT_H i10_pad;
    // Fuel Cutoff Switch 1,"0=CUTOFF, 1=IDLE",,,~,int,4
    INT_W FUEL_CUTOFF_1_SW;
    // Fuel Cutoff Switch 2,"0=CUTOFF, 1=IDLE",,,~,int,4
    INT_W FUEL_CUTOFF_2_SW;
    // Left Tank Aft Pump Switch,"0=OFF, 1=ON",LEFT AFT,~,~,int,4
    INT_W FUEL_PUMP_L_1_SW;
    // Center Tank Left Pump Switch,"0=OFF, 1=ON",CTR LEFT,True = open,~,int,4
    INT_W FUEL_PUMP_L_2_SW;
    // Left Tank Fwd Pump Switch,"0=OFF, 1=ON",LEFT FWD,True = open,~,int,4
    INT_W FUEL_PUMP_L_3_SW;
    // Right Tank Aft Pump Switch,"0=OFF, 1=ON",RIGHT AFT,True = open,~,int,4
    INT_W FUEL_PUMP_R_1_SW;
    // Center Tank Right Pump Switch,"0=OFF, 1=ON",CTR RIGHT,True = open,~,int,4
    INT_W FUEL_PUMP_R_2_SW;
    // Right Tank Fwd Pump Switch,"0=OFF, 1=ON",RIGHT FWD,True = open,~,int,4
    INT_W FUEL_PUMP_R_3_SW;
    // Fuel Level CTR,,,~,kg,float,4
    REAL FUEL_QTY_CTR;
    // Fuel Level LH,,,~,kg,float,4
    REAL FUEL_QTY_L;
    // Fuel Level RH,,,~,kg,float,4
    REAL FUEL_QTY_R;
    // Fuel Temperature Indication,,,~,deg C,float,4
    REAL FUEL_TEMP_IND;
    // Fuel CROSSFEED Knob,"0=CLOSED, 1=OPEN",,,~,int,4
    INT_W FUEL_XFEED_SW;

} PAI_FUEL;

typedef struct PAI_LNDG
{
    // GEAR LEVER,"-1=OFF, 0=UP, 1=DN",,,~,int,4
    INT_W GEAR_LVR_POS;
    // Landing Gear Manual Extension Left,,,1.0 = full up,normalized,float,4
    REAL GEAR_MANUAL_EXT_L;
    // Landing Gear Manual Extension Nose,,,1.0 = full up,normalized,float,4
    REAL GEAR_MANUAL_EXT_N;
    // Landing Gear Manual Extension Right,,,1.0 = full up,normalized,float,4
    REAL GEAR_MANUAL_EXT_R;
    // LH Main Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    REAL GEAR_POS_L;
    // Nose Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    REAL GEAR_POS_N;
    // RH Main Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    REAL GEAR_POS_R;

} PAI_LNDG;

typedef struct PAI_LIGHT
{
    // GND REC / ANTI-COL Switch,"0 = OFF, 1 = ON",,,~,int,4
    INT_W ANTICOL_LIGHTS_SW;
    // EMER LTS Switch,,,"0 = OFF, 1 = ON, 2 = ARM",~,int,4
    INT_W EMER_INTERN_LIGHTS_SW;
    // FIXED LANDING LIGHTS LH Switch,"0 = OFF, 1 = ON",,,~,int,4
    INT_W LDG_LIGHTS_FIXED_SW_L;
    // FIXED LANDING LIGHTS RH Switch,"0 = OFF, 1 = ON",,,~,int,4
    INT_W LDG_LIGHTS_FIXED_SW_R;
    // RETRACTABLE LANDING LIGHTS LH Switch,"0=RET/OFF, 1=EXT/ON",,,~,int,4
    INT_W LDG_LIGHTS_RET_SW_L;
    // RETRACTABLE LANDING LIGHTS RH Switch,"0=RET/OFF, 1=EXT/ON",,,~,int,4
    INT_W LDG_LIGHTS_RET_SW_R;
    // LOGO Light Switch,"0=OFF, 1=ON",,,~,int,4
    INT_W LOGO_LIGHT_SW;
    // NAV / POSITION Lights Switch,"0=OFF, 1=STEADY, 2=STROBE & STEADY",,,~,int,4
    INT_W NAV_LIGHTS_SW;
    // Taxi Light Switch,,,"0=OFF, 1=AUTO",~,int,4
    INT_W TAXI_LIGHT_SW;
    // Runway Turnoff Light Switch L,"0=OFF, 1=ON",,,~,boolean,1
    INT_S RWY_TURNOFF_LIGHT_SW_L;
    // Runway Turnoff Light Switch R,"0=OFF, 1=ON",,,~,boolean,1
    INT_S RWY_TURNOFF_LIGHT_SW_R;
    // WHEEL WELL Lights Switch,,,"0=OFF, 1=ON",~,boolean,1
    INT_S WHEEL_WELL_LIGHTS_SW;
    // WING Lights Switch,,,"0=OFF, 1=ON",~,boolean,1
    INT_S WING_LIGHTS_SW;

} PAI_LIGHT;

typedef struct PAI_OXY
{
    // CREW OXGEN Indication,,,~,psi,float,4
    REAL CREW_OXY_IND;
    // PASS OXY ON Annunciation,,,True = Illuminated,~,boolean,1
    INT_S CWA_PASS_OXY_ON;
    // Pad out to 32 bit boundary
    INT_S i11_pad;
    // Pad out to 32 bit boundary
    INT_H i12_pad;
    // PASS OXY Switch,"1 = NORMAL, 2 = ON",,~,~,int,4
    INT_W PASS_OXY_SEL;

} PAI_OXY;

typedef struct PAI_PERF
{
    // V1,,,~,Kn,float,4
    REAL V1;
    // V2,,,~,Kn,float,4
    REAL V2;
    // V2 Valid,,,"0 = invalid, 1 = valid",~,boolean,1
    INT_S V2_VALID;
    // Pad out to 32 bit boundary
    INT_S i13_pad;
    // Pad out to 32 bit boundary
    INT_H i14_pad;
    // VR,,,~,Kn,float,4
    REAL VR;
    // VREF,,,~,Kn,float,4
    REAL VREF;

} PAI_PERF;

typedef struct PAI_PSI
{
    // Cabin Differential Pressure,,,~,psi,float,4
    REAL CABIN_ALT_DELTA_P_IND;
    // Cabin Altitude Indication,,,~,ft,float,4
    REAL CABIN_ALT_IND;
    // True Cabin Altitude,,,~,ft,float,4
    REAL CABIN_ALT_TRUE;
    // Cabin Altitude Horn Cutout Button,,,True = Pressed,~,boolean,1
    INT_S CABIN_ALT_HORN_CUTOUT_BTN;
    // Automatic pressurization fail annunciator,,,True = on,~,boolean,1
    INT_S PRESS_CWA_AUTO_FAIL;
    // Pressurization off-schedule annunciator,,,True = on,~,boolean,1
    INT_S PRESS_CWA_OFF_SCHED_DESCENT;
    // Pressurization Manual Valve / Emer Dump Switch,,,"False=Closed/Normal, True=Open/Dump",~,boolean,1
    INT_S PRESS_SYS_EMER_DUMP_SW;
    // Cabin FLT ALT Setting,,,~,ft,float,4
    REAL PRESS_SYS_FLT_ALT_VALUE;
    // High Altitude Landing Mode,,,"-1=INOP, 0=OFF, 1=ON",~,int,4
    INT_W PRESS_SYS_HIGH_ALT_LDG_MODE_SEL;
    // Cabin LAND ALT Setting,,,~,ft,float,4
    REAL PRESS_SYS_LAND_ALT_VALUE;
    // Pressuriation System Mode Switch,"0=AUTO, 1=ALTN, 2=MAN",,,~,int,4
    INT_W PRESS_SYS_MANUAL_MODE_SEL;
    // Outflow valve position,,,1.0 = Full Open,~,float,4
    REAL PRESS_SYS_OUTFLOW_VALVE_POS;

} PAI_PSI;

typedef struct PAI_SIM_ST
{
    // Simulator state,,,"0 = STATE_UNKNOWN, 1 = STATE_STARTUP,2 = STATE_RUNNING,3 = STATE_SHUTDOWN,4 = STATE_CRASHED",~,int,4
    INT_W SIM_STATE;
    // Altitude Freeze,,,~,~,boolean,1
    INT_S SIM_ALTITUDE_FREEZE;
    // Flight Freeze,,,~,~,boolean,1
    INT_S SIM_FLIGHT_FREEZE;
    // Position Freeze,,,~,~,boolean,1
    INT_S SIM_POSITION_FREEZE;
    // QTG testing in progress,,,~,~,boolean,1
    INT_S SIM_QTG_ENG;
    // Reposition in progress,,,~,~,boolean,1
    INT_S SIM_REPOS_ENG;
    // Total Freeze,,,~,~,boolean,1
    INT_S SIM_TOTAL_FREEZE;
    // padding
    INT_H i15_pad;

} PAI_SIM_ST;

typedef struct PAI_OUTPUT
{
	// FRAME_COUNTER,Frame Counter,,,~,~,int,4
	INT_W Simulator_Counter;
	// padding
	REAL Simulator_time;
	// Sub section
	PAI_AC_DYN AcDyn;
	PAI_AUTOPILOT Autopilot;
	PAI_BRAKE Brake;
	PAI_ELEC Elec;
	PAI_ENG Eng;
	PAI_ENV Env;
	PAI_FC Fltcont;
	PAI_FUEL Fuel;
	PAI_LNDG Gear;
	PAI_LIGHT Light;
	PAI_OXY Oxy;
	PAI_PERF Perf;
	PAI_PSI Press;
	// Radar altitude indication,,,,ft,float,4
	REAL RADALT;
	PAI_SIM_ST Simstate;
	// Wind Shear Active,,,True = engaged,~,boolean,1
	INT_S WINDSHEAR_ENG;
        // FRAME_COUNTER,Frame Counter,,,~,~,int,4
	INT_W Simulator_Counter_end;

} PAI_OUTPUT;

