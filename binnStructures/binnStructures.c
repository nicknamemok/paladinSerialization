










    //*************Engines SECTION *****************

    // Engine #1 Fuel Flow,,,~,kg/hr,float,4
    PAOutput.Eng.ENG_1_FF = (float)eewfmsel[0];
    // Engine #1 Oil Pressure Indication,,,~,indicated,float,4
    PAOutput.Eng.ENG_1_IND_OIL_PRESS = (float)eepoilsel[0];
    // Engine #1 Oil Temperature Indication,,,~,deg C,float,4
    PAOutput.Eng.ENG_1_IND_OIL_TEMP = (float)eetoilsel[0];
    // Engine #1 N1,,,~,%,float,4
    PAOutput.Eng.ENG_1_N1 = (float)een1indsel[0];
    // Engine #1 N2,,,~,%,float,4
    PAOutput.Eng.ENG_1_N2 = (float)een2actsel[0];
    // Engine #1 Oil Pressure,,,~,psi,float,4
    PAOutput.Eng.ENG_1_OIL_PRESS = (float)0.0;
    // Engine #1 Oil Temperature,,,~,deg C,float,4
    PAOutput.Eng.ENG_1_OIL_TEMP = (float)0.0;

    // Engine #1 Start Switch,"0=OFF, 1=GND, 2=CONT, 3=FLT",,~,Integer,int,4
    if(i71_start_gnd1_l1)PAOutput.Eng.ENG_1_START_SW = (__int32)1;
    else if(i71_start_cont1_l1)PAOutput.Eng.ENG_1_START_SW = (__int32)2;
    else if(i71_start_flt1_l1 )PAOutput.Eng.ENG_1_START_SW = (__int32)3;
    else PAOutput.Eng.ENG_1_START_SW = (__int32) 0;

    // Engine #1 EGT,,,~,deg C,float,4
    PAOutput.Eng.ENG_1_TGT = (float)eegtsel[0];
    // Engine #1 Thrust Rev Lever,,,100% = max reverse,%,float,4
    PAOutput.Eng.ENG_1_THRUST_REV_LEVER_POS = (float)(eerevp[0] * 100.0f);
    // Engine #1 TLA,,,Fwd,deg,float,4
    PAOutput.Eng.ENG_1_TLA = (float)etla[0];
    // Engine #1 Vibration Level Display,,,,~,float,4
    PAOutput.Eng.ENG_1_VIB_IND = (float)evibind[0];
    // Engine #2 Fuel Flow,,,~,kg/hr,float,4
    PAOutput.Eng.ENG_2_FF = eewfmsel[1];
    // Engine #2 Oil Pressure Indication,,,~,psi,float,4
    PAOutput.Eng.ENG_2_IND_OIL_PRESS = (float)eepoilsel[1];
    // Engine #2 Oil Temperature Indication,,,~,deg C,float,4
    PAOutput.Eng.ENG_2_IND_OIL_TEMP = (float)eetoilsel[1];
    // Engine #2 N1,,,~,%,float,4
    PAOutput.Eng.ENG_2_N1 = (float)een1indsel[1];
    // Engine #2 N2,,,~,%,float,4
    PAOutput.Eng.ENG_2_N2 = (float)een2actsel[1];
    // Engine #2 Oil Pressure,,,~,psi,float,4
    PAOutput.Eng.ENG_2_OIL_PRESS = (float)0.0;
    // Engine #2 Oil Temperature,,,~,deg C,float,4
    PAOutput.Eng.ENG_2_OIL_TEMP = (float)0.0;

    // Engine #2 Start Switch,"0=OFF, 1=GND, 2=CONT, 3=FLT",,~,Integer,int,4
    if(i71_start_gnd2_l1)PAOutput.Eng.ENG_2_START_SW = (__int32)1;
    else if(i71_start_cont2_l1)PAOutput.Eng.ENG_2_START_SW = (__int32)2;
    else if(i71_start_flt2_l1 )PAOutput.Eng.ENG_2_START_SW = (__int32)3;
    else PAOutput.Eng.ENG_2_START_SW = (__int32)0;

    // Engine #2 EGT,,,~,deg C,float,4
    PAOutput.Eng.ENG_2_TGT = (float)eegtsel[1];
    // Engine #2 Thrust Rev Lever,,,100% = max reverse,%,float,4
    PAOutput.Eng.ENG_2_THRUST_REV_LEVER_POS = (float)(eerevp[1] * 100.0f);
    // Engine #2 TLA,,,Fwd,deg,float,4
    PAOutput.Eng.ENG_2_TLA  = (float)etla[1];
    // Engine #2 Vibration Level Display,,,~,~,float,4
    PAOutput.Eng.ENG_2_VIB_IND = (float)evibind[1];

    // Ignition System Selector Switch,"0=L, 1=BOTH, 2=R",,,~,int,4
    if(ideslign) PAOutput.Eng.ENG_IGN_SYS_SEL_SW = (__int32)0;
    else if(idesrign) PAOutput.Eng.ENG_IGN_SYS_SEL_SW = (__int32)2;
    else  PAOutput.Eng.ENG_IGN_SYS_SEL_SW = (__int32)1;

 // Engine #1 Start In Progress,,,~,~,boolean,1
    PAOutput.Eng.ENG_1_START_IN_PROGRESS = (__int8)estartup[0];
    // Engine #1 Thrust Rev Locked Off,,Transitions from False to True during REV Lever movement. Note reverse logic with /Engines/#1/RevLocked.,True = locked off,~,boolean,1
    PAOutput.Eng.ENG_1_THRUST_REV_ARMED = (__int8)efrevint[0];
    // Engine #1 Thrust Rev Selector,,,True = deploy,~,boolean,1
    PAOutput.Eng.ENG_1_THRUST_REV_SEL = (__int8)idslgas3;
    // Engine #2 Start In Progress,,,~,~,boolean,1
    PAOutput.Eng.ENG_2_START_IN_PROGRESS = (__int8)estartup[1];
    // Engine #2 Thrust Rev Locked Off,,,True = locked off,~,boolean,1
    PAOutput.Eng.ENG_2_THRUST_REV_ARMED = (__int8)efrevint[1];
    // Engine #2 Thrust Rev Selector,,,True = deploy,~,boolean,1
    PAOutput.Eng.ENG_2_THRUST_REV_SEL  = (__int8)idslgas4;
    // Padding
    PAOutput.Eng.i5_pad = 65535;

    //*************Enviroment SECTION *****************

    // Aircraft in storm cloud,,,True = in storm cloud,~,boolean,1
    PAOutput.Env.AC_IN_STORM_CLOUD = (__int8)(0);
    // Pad out to 32 bit boundary
    PAOutput.Env.i7_pad = 255;
    // Pad out to 32 bit boundary
    PAOutput.Env.i8_pad = 255;
    // Outside Air Temperature,,,~,deg C,float,4
    PAOutput.Env.OAT = (float)l04_amb_temp_c_f8;
    // Static Pressure as Altitude,,,~,ft,float,4
    PAOutput.Env.PRESS_ALT = (float)g04_eom_alt_press_f8;
    // Runway contamination level,,,~,%,float,4
    PAOutput.Env.RWY_CONTAMINANT_LEVEL = (float)l04_rcon_dc_f8[0];

    // Runway contaminant type,,,"0= dry, 1 = damp, 2=wet, 3=flooded, 4=wet on residue - no water depth, 5=wet on residue - flooded depth, 6=melting slush, 7=freezing slush, 8=wet snow, 9=dry snow, 10=wet ice, 11=cold ice, 12=icy, 13=patchy wet, 14=patchy ice",~,int,4
    if(l04_sysi_env_rwywet_l1 && (l04_sysi_env_rwypatchy_f4 > 0.00001))PAOutput.Env.RWY_CONTAMINANT_TYPE = 13;
    else if(l04_sysi_env_rwywet_l1)PAOutput.Env.RWY_CONTAMINANT_TYPE = 2;
    else if(l04_sysi_env_rwyice_l1 && (l04_sysi_env_rwypatchy_f4 > 0.00001))PAOutput.Env.RWY_CONTAMINANT_TYPE = 14;
    else if(l04_sysi_env_rwyice_l1)PAOutput.Env.RWY_CONTAMINANT_TYPE = 12;
    else if(l04_sysi_env_rwyslush_l1 && (l04_amb_temp_c_f8 > 0.0))PAOutput.Env.RWY_CONTAMINANT_TYPE = 6;
    else if(l04_sysi_env_rwyslush_l1)PAOutput.Env.RWY_CONTAMINANT_TYPE = 7;
    else if(l04_sysi_env_rwysnow_l1 && (l04_amb_temp_c_f8 > 0.0))PAOutput.Env.RWY_CONTAMINANT_TYPE = 8;
    else if(l04_sysi_env_rwysnow_l1)PAOutput.Env.RWY_CONTAMINANT_TYPE = 9;
    else if(l04_sysi_env_rwysand_l1)PAOutput.Env.RWY_CONTAMINANT_TYPE = 15;
    else PAOutput.Env.RWY_CONTAMINANT_TYPE = 0;

    // Turbulence Intensity,,,~,%,float,4
    PAOutput.Env.TURB_INTENSITY = (float)g04_turbv_intensity_f8;
    // Visibility,,,~,nm,float,4
    PAOutput.Env.VISIBILITY = (float)ci99_vis_visib_f4[0];
    // Wind Downward Component,,,Down,ft/s,float,4
    PAOutput.Env.WIND_VEL_DN = (float)g04_amb_wind_vv_f8;
    // Wind Eastward,,,Towards East,ft/s,float,4
    PAOutput.Env.WIND_VEL_E = (float)l04_amb_wind_ew_f8;
    // Wind Northward,,,Towards North,ft/s,float,4
    PAOutput.Env.WIND_VEL_N = (float)l04_amb_wind_ns_f8;

    //*************Flight Controls SECTION *****************

    // Aileron trim,,,Right wing down,deg,float,4
    PAOutput.Fltcont.AIL_TRIM_WHL_POS = (float)catrim;

    // Alternate Flaps UP-DN Switch,"-1=DN, 0=OFF, 1=UP",,,~,int,4
    if(i27f_alt_sel_sw_up_l1)PAOutput.Fltcont.ATL_FLAP_EXT_RET_SW = (__int32)1;
    else if(i27f_alt_sel_sw_down_l1)PAOutput.Fltcont.ATL_FLAP_EXT_RET_SW = (__int32)-1;
    else PAOutput.Fltcont.ATL_FLAP_EXT_RET_SW = (__int32)0;

    // Column force,,,Aft,N,float,4
    PAOutput.Fltcont.COL_FORCE_PILOT = (float)cecpfor;
    // Column deflection,,,Aft,deg,float,4
    PAOutput.Fltcont.COL_POS_PILOT = (float)cecppos;
    // FLAP Lever,,,Flap angle command,~,int,4
    PAOutput.Fltcont.FLAP_LEVER_POS = (__int32)g27f_lever_i4;
    // FLAP LH Surface Position,,,,deg,float,4
    PAOutput.Fltcont.FLAP_SURF_POS_L = (float)awv_fseu_vtelq;
    // FLAP RH Surface Position,,,,deg,float,4
    PAOutput.Fltcont.FLAP_SURF_POS_R = (float)awv_fseu_vterq;
    // Nose wheel angle,,,Right,deg,float,4
    PAOutput.Fltcont.NOSEWHEEL_ANGLE = (float)l04_sysi_gsteer_f8[0];
    // Pitch trim,,,Increasing Fwd,deg,float,4
    PAOutput.Fltcont.PITCH_TRIM_WHL_POS = (float)chstab;
    // Rudder pedal force,,,Nose left,N,float,4
    PAOutput.Fltcont.RUD_PED_FORCE_PILOT = (float)crpfor;
    // Rudder Pedal position,,,Nose left,deg,float,4
    PAOutput.Fltcont.RUD_PED_POS_PILOT = (float)crppos;
    // Yaw trim,,,Nose left,deg,float,4
    PAOutput.Fltcont.RUD_TRIM_WHL_POS = (float)crtrim;
    // SPEED BRAKE control position,,,1.0 = full extend,~,float,4
    PAOutput.Fltcont.SPEED_BRK_CTRL_POS = (float)(csppos/36.0);
    // Nose wheel tiller position,,,Positive Left,~,float,4
    PAOutput.Fltcont.TILLER_POS = (float)cncppos;
    // Wheel angle,,,Right wing down,deg,float,4
    PAOutput.Fltcont.WHL_POS_PILOT = (float)cacppos;
    // Alternate Flaps ARM Switch,,,"0=OFF, 1=ARM",,boolean,1
    PAOutput.Fltcont.ALT_FLAP_ARM_SW = (__int8)i27f_flap_alt_sw_arm_l1;
    // FC PANEL Auto Slat Fail Light,,,True = bright,~,boolean,1
    PAOutput.Fltcont.CWA_AUTO_SLAT_FAIL = (__int8)(o33_s27f_auto_slt_fail_l1 && o33_s27f_auto_slt_fail_pwr_l1);
    // Elev Feel Differential Pressure Light,,,True = bright,~,boolean,1
    PAOutput.Fltcont.CWA_ELEV_FEEL_DIFF_PRESS = (__int8)(o33_s27_elv_dfd_l1 && o33_s27_elv_dfd_pwr_l1);
    // Mach Trim Fail Annunciation,,,True = bright,~,boolean,1
    PAOutput.Fltcont.CWA_MACH_TRIM_FAIL = (__int8)(o33_s22_mtsfl_l1 && o33_s22_mtsfl_pwr_l1);
    // Speed Trim Fail Annunciation,,,True = bright,~,boolean,1
    PAOutput.Fltcont.CWA_SPEED_TRIM_FAIL = (__int8)(o33_s22_stsfl_l1 && o33_s22_stsfl_pwr_l1);
    // Yaw Damper Fail Annunciation,,,True = illuminated,~,boolean,1
    PAOutput.Fltcont.CWA_YAW_DAMPER = (__int8)(o33_s27_yawd_ydwlt_pwr_l1 && o33_s27_yawd_ydwlt_l1);

    // FLT CONTROL HYD SYS A Transfer Swtich,"0=OFF, 1=ON, 2=STBY RUD",,,~,boolean,1
    if(i27_cf_saon_l1)PAOutput.Fltcont.FLT_CTRL_HYD_SYS_A_XFER_SW = (__int8)1;
    else if(i27_cf_sastb_l1)PAOutput.Fltcont.FLT_CTRL_HYD_SYS_A_XFER_SW = (__int8)2;
    else PAOutput.Fltcont.FLT_CTRL_HYD_SYS_A_XFER_SW = (__int8)0;

    // FLT CONTROL HYD SYS B Transfer Swtich,"0=OFF, 1=ON, 2=STBY RUD",,,~,boolean,1
    if(i27_cf_sbon_l1)PAOutput.Fltcont.FLT_CTRL_HYD_SYS_B_XFER_SW = (__int8)1;
    else if(i27_cf_sbstb_l1)PAOutput.Fltcont.FLT_CTRL_HYD_SYS_B_XFER_SW = (__int8)2;
    else PAOutput.Fltcont.FLT_CTRL_HYD_SYS_B_XFER_SW = (__int8)0;

    // LE DEVICES Display TEST Button,,,True = Pressed,~,boolean,1
    PAOutput.Fltcont.LE_DEVICES_DISP_TEST_BTN = (__int8)0;
    // SPOILER HYD SYS A Transfer Switch,,,"0=OFF, 1=ON",~,boolean,1
    PAOutput.Fltcont.SPOILER_HYD_SYS_A_XFER_SW = (__int8)i27_splr_saon_l1;
    // SPOILER HYD SYS B Transfer Switch,,,"0=OFF, 1=ON",~,boolean,1
    PAOutput.Fltcont.SPOILER_HYD_SYS_B_XFER_SW = (__int8)i27_splr_sbon_l1;
    // LH Stick Shaker Active,,L & R systems are independent,True = engaged,~,boolean,1
    PAOutput.Fltcont.STICKSHAKER_ENG_L = (__int8)o27_stall_shkr1_l1;
    // RH Stick Shaker Active,,L & R systems are independent,True = engaged,~,boolean,1
    PAOutput.Fltcont.STICKSHAKER_ENG_R = (__int8)o27_stall_shkr2_l1;
    // Yaw Damper Active,,,True = engaged,~,boolean,1
    PAOutput.Fltcont.YD_ENG = (__int8)sydeng;
    // Yaw Damper Switch,,,True = ON,~,boolean,1
    PAOutput.Fltcont.YD_SWITCH = (__int8)i27_yawd_sw_l1;
    // padding
    PAOutput.Fltcont.i9_pad = 255;

    //*************Fuel Controls SECTION *****************

    // Fuel Filter Bypass Annunciator - Left,"0=off, 1=on",,,~,int,4
    PAOutput.Fuel.CWA_FUEL_FLTR_BP_L = (__int8)(o33_s71_ffiblt1_l1 && o33_s71_ffiblt1_pwr_l1);
    // Fuel Filter Bypass Annunciator - Right,"0=off, 1=on",,,~,int,4
    PAOutput.Fuel.CWA_FUEL_FLTR_BP_R = (__int8)(o33_s71_ffiblt2_l1 && o33_s71_ffiblt2_pwr_l1);
    // Left Tank Pump 1 Low Pressure,,LEFT AFT,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_L_1 = (__int8)(o33_s28_boost1_low_l1 && o33_s28_boost1_low_pwr_l1);
    // Left Tank Pump 2 Low Pressure,,CTR LEFT,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_L_2 = (__int8)(o33_s28_boost5_low_l1 && o33_s28_boost5_low_pwr_l1);
    // Left Tank Pump 3 Low Pressure,,LEFT FWD,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_L_3 = (__int8)(o33_s28_boost2_low_l1 && o33_s28_boost2_low_pwr_l1);
    // Right Tank Aft Low Pressure,,RIGHT AFT,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_R_1 = (__int8)(o33_s28_boost3_low_l1 && o33_s28_boost3_low_pwr_l1);
    // Center Tank Right Low Pressure,,CTR RIGHT,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_R_2 = (__int8)(o33_s28_boost6_low_l1 && o33_s28_boost6_low_pwr_l1);
    // Right Tank Fwd Low Pressure,,RIGHT FWD,True = bright,~,boolean,1
    PAOutput.Fuel.CWA_FUEL_LO_PRESS_R_3 = (__int8)(o33_s28_boost4_low_l1 && o33_s28_boost4_low_pwr_l1);
    // padding
    PAOutput.Fuel.i10_pad = 65535;
    // Fuel Cutoff Switch 1,"0=CUTOFF, 1=IDLE",,,~,int,4
    PAOutput.Fuel.FUEL_CUTOFF_1_SW = (__int32)i71_run1_l1;
    // Fuel Cutoff Switch 2,"0=CUTOFF, 1=IDLE",,,~,int,4
    PAOutput.Fuel.FUEL_CUTOFF_2_SW = (__int32)i71_run2_l1;
    // Left Tank Aft Pump Switch,"0=OFF, 1=ON",LEFT AFT,~,~,int,4
    PAOutput.Fuel.FUEL_PUMP_L_1_SW = (__int32)i28_boost1_l1;
    // Center Tank Left Pump Switch,"0=OFF, 1=ON",CTR LEFT,True = open,~,int,4
    PAOutput.Fuel.FUEL_PUMP_L_2_SW = (__int32)i28_boost5_l1;
    // Left Tank Fwd Pump Switch,"0=OFF, 1=ON",LEFT FWD,True = open,~,int,4
    PAOutput.Fuel.FUEL_PUMP_L_3_SW = (__int32)i28_boost2_l1;
    // Right Tank Aft Pump Switch,"0=OFF, 1=ON",RIGHT AFT,True = open,~,int,4
    PAOutput.Fuel.FUEL_PUMP_R_1_SW = (__int32)i28_boost3_l1;
    // Center Tank Right Pump Switch,"0=OFF, 1=ON",CTR RIGHT,True = open,~,int,4
    PAOutput.Fuel.FUEL_PUMP_R_2_SW = (__int32)i28_boost6_l1;
    // Right Tank Fwd Pump Switch,"0=OFF, 1=ON",RIGHT FWD,True = open,~,int,4
    PAOutput.Fuel.FUEL_PUMP_R_3_SW = (__int32)i28_boost4_l1;
    // Fuel Level CTR,,,~,lbs,float,4
    PAOutput.Fuel.FUEL_QTY_CTR = (float)l04_sysi_acset_tankfuel_f4[3];
    // Fuel Level LH,,,~,lbs,float,4
    PAOutput.Fuel.FUEL_QTY_L = (float)l04_sysi_acset_tankfuel_f4[0];
    // Fuel Level RH,,,~,lbs,float,4
    PAOutput.Fuel.FUEL_QTY_R = (float)l04_sysi_acset_tankfuel_f4[1];
    // Fuel Temperature Indication,,,~,deg C,float,4
    PAOutput.Fuel.FUEL_TEMP_IND = (float)o28_tank_temp_f4;
    // Fuel CROSSFEED Knob,"0=CLOSED, 1=OPEN",,,~,int,4
    PAOutput.Fuel.FUEL_XFEED_SW = (__int32)i28_xfeed_l1;

    //*************Landing Gear SECTION *****************

    // GEAR LEVER,"-1=OFF, 0=UP, 1=DN",,,~,int,4
    if(i32g_gear_hdl_dn_l1)PAOutput.Gear.GEAR_LVR_POS = (__int32)1;
    else if(i32g_gear_hdl_up_l1)PAOutput.Gear.GEAR_LVR_POS = (__int32)0;
    else PAOutput.Gear.GEAR_LVR_POS = (__int32)-1;

    // Landing Gear Manual Extension Left,,,1.0 = full up,normalized,float,4
    PAOutput.Gear.GEAR_MANUAL_EXT_L = (float)i32g_emer_hdl_pos_left_f4;
    // Landing Gear Manual Extension Nose,,,1.0 = full up,normalized,float,4
    PAOutput.Gear.GEAR_MANUAL_EXT_N = (float)i32g_emer_hdl_pos_nose_f4;
    // Landing Gear Manual Extension Right,,,1.0 = full up,normalized,float,4
    PAOutput.Gear.GEAR_MANUAL_EXT_R = (float)i32g_emer_hdl_pos_right_f4;
    // LH Main Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    PAOutput.Gear.GEAR_POS_L = (float)l04_sysi_gear_f8[1];
    // Nose Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    PAOutput.Gear.GEAR_POS_N = (float)l04_sysi_gear_f8[0];
    // RH Main Gear Extension,,,"0.0 = ret, 1.0 = ext",normalized,float,4
    PAOutput.Gear.GEAR_POS_R = (float)l04_sysi_gear_f8[2];

    //*************Light Gear SECTION *****************

    // GND REC / ANTI-COL Switch,"0 = OFF, 1 = ON",,,~,int,4
    PAOutput.Light.ANTICOL_LIGHTS_SW = (__int32)i33_anti_col_red_l1;

    // EMER LTS Switch,,,"0 = OFF, 1 = ON, 2 = ARM",~,int,4
    if(i33_emer_lt_off_l1)PAOutput.Light.EMER_INTERN_LIGHTS_SW = (__int32)0;
    else if(i33_emer_lt_on_l1)PAOutput.Light.EMER_INTERN_LIGHTS_SW = (__int32)1;
    else PAOutput.Light.EMER_INTERN_LIGHTS_SW = (__int32)2;

    // FIXED LANDING LIGHTS LH Switch,"0 = OFF, 1 = pulsing, 2 = ON",,,~,int,4
    if(i33_land_fixed_left_off_l1)PAOutput.Light.LDG_LIGHTS_FIXED_SW_L = (__int32)0;
    else if(i33_land_fixed_left_on_l1)PAOutput.Light.LDG_LIGHTS_FIXED_SW_L = (__int32)2;
    else PAOutput.Light.LDG_LIGHTS_FIXED_SW_L = (__int32)1;

    // FIXED LANDING LIGHTS RH Switch,"0 = OFF, 1 = pulsing, 2 = ON",,,~,int,4
    if(i33_land_fixed_right_off_l1)PAOutput.Light.LDG_LIGHTS_FIXED_SW_R = (__int32)0;
    else if(i33_land_fixed_right_on_l1)PAOutput.Light.LDG_LIGHTS_FIXED_SW_R = (__int32)2;
    else PAOutput.Light.LDG_LIGHTS_FIXED_SW_R = (__int32)1;

    // RETRACTABLE LANDING LIGHTS LH Switch,"0=RET/OFF, 1 = EXT/pulsing, 2=EXT/ON",,,~,int,4
    if(i33_land_retractable_l_retr_l1)PAOutput.Light.LDG_LIGHTS_RET_SW_L = (__int32)0;
    else if(i33_land_retractable_l_on_l1)PAOutput.Light.LDG_LIGHTS_RET_SW_L = (__int32)2;
    else PAOutput.Light.LDG_LIGHTS_RET_SW_L = (__int32)1;

    // RETRACTABLE LANDING LIGHTS RH Switch,"0=RET/OFF, 1 = EXT/pulsing, 2=EXT/ON",,,~,int,4
    if(i33_land_retractable_r_retr_l1)PAOutput.Light.LDG_LIGHTS_RET_SW_R = (__int32)0;
    else if(i33_land_retractable_r_on_l1)PAOutput.Light.LDG_LIGHTS_RET_SW_R = (__int32)2;
    else PAOutput.Light.LDG_LIGHTS_RET_SW_R = (__int32)1;

    // LOGO Light Switch,"0=OFF, 1=ON",,,~,int,4
    PAOutput.Light.LOGO_LIGHT_SW = (__int32)i33_logo_l1;
    // NAV / POSITION Lights Switch,"0=OFF, 1=STEADY",,,~,int,4
    PAOutput.Light.NAV_LIGHTS_SW = (__int32)i33_strobe_sw_steady_l1;
    // Taxi Light Switch,,,"0=OFF, 1=AUTO",~,int,4
    PAOutput.Light.TAXI_LIGHT_SW = (__int32)i33_taxi_l1;
    // Runway Turnoff Light Switch L,"0=OFF, 1=ON",,,~,boolean,1
    PAOutput.Light.RWY_TURNOFF_LIGHT_SW_L = (__int8)i33_turn_left_l1;
    // Runway Turnoff Light Switch R,"0=OFF, 1=ON",,,~,boolean,1
    PAOutput.Light.RWY_TURNOFF_LIGHT_SW_R = (__int8)i33_turn_right_l1;
    // WHEEL WELL Lights Switch,,,"0=OFF, 1=ON",~,boolean,1
    PAOutput.Light.WHEEL_WELL_LIGHTS_SW = (__int8)i33_wheel_well_l1;
    // WING Lights Switch,,,"0=OFF, 1=ON",~,boolean,1
    PAOutput.Light.WING_LIGHTS_SW = (__int8)i33_wing_insp_l1;

    //*************Oxygen SECTION *****************

    // CREW OXGEN Indication,,,~,psi,float,4
    PAOutput.Oxy.CREW_OXY_IND = (float)o35_poxy_f4;
    // PASS OXY ON Annunciation,,,True = Illuminated,~,boolean,1
    PAOutput.Oxy.CWA_PASS_OXY_ON = (__int8)(o33_s35_oxyp_l1 && o33_s35_oxyp_pwr_l1);
    // Pad out to 32 bit boundary
    PAOutput.Oxy.i11_pad = 255;
    // Pad out to 32 bit boundary
    PAOutput.Oxy.i12_pad = 65535;
    // PASS OXY Switch,"1 = NORMAL, 2 = ON",,~,~,int,4
    PAOutput.Oxy.PASS_OXY_SEL = (__int32)i35_pass_osy_l1;

    //*************Performance SECTION *****************

    // V1,,,~,Kn,float,4
    PAOutput.Perf.V1 = (float)g34f_fms_v1_f8;
    // V2,,,~,Kn,float,4
    PAOutput.Perf.V2 = (float)g34f_fms_v2_f8;
    // V2 Valid,,,"0 = invalid, 1 = valid",~,boolean,1
    PAOutput.Perf.V2_VALID = (__int8)g34f_fms_v2_valid_l1;
    // Pad out to 32 bit boundary
    PAOutput.Perf.i13_pad = 255;
    // Pad out to 32 bit boundary
    PAOutput.Perf.i14_pad = 65535;
    // VR,,,~,Kn,float,4
    PAOutput.Perf.VR = (float)g34f_fms_vr_f8;
    // VREF,,,~,Kn,float,4
    PAOutput.Perf.VREF = (float)g34f_fms_vref_f8;

    //*************Pressurization SECTION *****************

    // Cabin Differential Pressure,,,~,psi,float,4
    PAOutput.Press.CABIN_ALT_DELTA_P_IND = (float)o21p_pdd_f4;
    // Cabin Altitude Indication,,,~,ft,float,4
    PAOutput.Press.CABIN_ALT_IND = (float)o21p_hcd_f4;
    // True Cabin Altitude,,,~,ft,float,4
    PAOutput.Press.CABIN_ALT_TRUE = (float)0.0;
    // Cabin Altitude Horn Cutout Button,,,True = Pressed,~,boolean,1
    PAOutput.Press.CABIN_ALT_HORN_CUTOUT_BTN = (__int8)i21p_alt_horn_cutout_l1;
    // Automatic pressurization fail annunciator,,,True = on,~,boolean,1
    PAOutput.Press.PRESS_CWA_AUTO_FAIL = (__int8)o33_s21p_auto_fail_lt_l1;
    // Pressurization off-schedule annunciator,,,True = on,~,boolean,1
    PAOutput.Press.PRESS_CWA_OFF_SCHED_DESCENT = (__int8)o33_s21p_off_schedule_desc_lt_l1;
    // Pressurization Manual Valve / Emer Dump Switch,,,"False=Closed/Normal, True=Open/Dump",~,boolean,1
    PAOutput.Press.PRESS_SYS_EMER_DUMP_SW = (__int8)0;
    // Cabin FLT ALT Setting,,,~,ft,float,4
    PAOutput.Press.PRESS_SYS_FLT_ALT_VALUE = (float)dzhcd;
    // High Altitude Landing Mode,,,"-1=INOP, 0=OFF, 1=ON",~,int,4
    PAOutput.Press.PRESS_SYS_HIGH_ALT_LDG_MODE_SEL = (__int32)-1;
    // Cabin LAND ALT Setting,,,~,ft,float,4
    PAOutput.Press.PRESS_SYS_LAND_ALT_VALUE = (float)dzhld;

    // Pressuriation System Mode Switch,"0=AUTO, 1=ALTN, 2=MAN",,,~,int,4
    if(i21p_pres_mod_sel_alter_l1)PAOutput.Press.PRESS_SYS_MANUAL_MODE_SEL = (__int32)1;
    else if(i21p_pres_mod_sel_man_1_l1 || i21p_pres_mod_sel_man_2_l1)PAOutput.Press.PRESS_SYS_MANUAL_MODE_SEL = (__int32)2;
    else PAOutput.Press.PRESS_SYS_MANUAL_MODE_SEL = (__int32)0;

    // Outflow valve position,,,1.0 = Full Open,~,float,4
    PAOutput.Press.PRESS_SYS_OUTFLOW_VALVE_POS = (float)o21p_vfd1_f4;

    //*************Radio Altitude *****************

	// Radar altitude indication,,,,ft,float,4
	PAOutput.RADALT = (float)l_ral2_b164;

    //*************simulator state SECTION *****************

    // Simulator state,,,"0 = STATE_UNKNOWN, 1 = STATE_STARTUP,2 = STATE_RUNNING,3 = STATE_SHUTDOWN,4 = STATE_CRASHED",~,int,4
    PAOutput.Simstate.SIM_STATE = (__int32)2;
    // Altitude Freeze,,,~,~,boolean,1
    PAOutput.Simstate.SIM_ALTITUDE_FREEZE = (__int8)ci99_frz_alt_l1;
    // Flight Freeze,,,~,~,boolean,1
    PAOutput.Simstate.SIM_FLIGHT_FREEZE = (__int8)ci99_frz_flt_l1;
    // Position Freeze,,,~,~,boolean,1
    PAOutput.Simstate.SIM_POSITION_FREEZE = (__int8)ci99_frz_posn_l1;
    // QTG testing in progress,,,~,~,boolean,1
    PAOutput.Simstate.SIM_QTG_ENG = (__int8)g00a_qtg_active_l1;
    // Reposition in progress,,,~,~,boolean,1
    PAOutput.Simstate.SIM_REPOS_ENG = (g34b_ru_frzflt_l1 || ca99_pos_reposn_l1 );
    // Total Freeze,,,~,~,boolean,1
    PAOutput.Simstate.SIM_TOTAL_FREEZE = (__int8)ci99_frz_total_l1;
    // padding
    PAOutput.Simstate.i15_pad = 65535;

    //*************Windshear Active *****************

	// Wind Shear Active,,,True = engaged,~,boolean,1
	PAOutput.WINDSHEAR_ENG = (__int8)l04_sysi_wsactive_l1;

    PAOutput.Simulator_Counter_end = (__int32)packet_number;

}
