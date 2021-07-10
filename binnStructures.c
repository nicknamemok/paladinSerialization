
/*
DYNAMIC SECTION
*/
binn * binnAircraftDynamics(binn * AircraftDynamics){

    // Latitude
    binn_object_set_int32(AircraftDynamics,"LAT",(double)g34b_ru_aclat_f8);
    // Longitude
    binn_object_set_int32(AircraftDynamics,"LON",(double)g34b_ru_aclon_f8);
    // Body-axis Lateral accel excluding gravity,,,Fwd,m/s^2,float,4
    binn_object_set_float(AircraftDynamics,"LAT_BODY",(float)(0.3048 * g04_eom_ugdot_f8));
    // Body-axis Longitudinal accel excluding gravity,,,Right,m/s^2,float,4
    binn_object_set_float(AircraftDynamics,"LON_BODY",(float)(0.3048 * g04_eom_vgdot_f8));
    // Body-axis Vertical accel excluding gravity,,,Down,m/s^2,float,4
    binn_object_set_float(AircraftDynamics,"ACC_VERT_BODY",(float)(0.3048 * g04_eom_wgdot_f8));
    // Geometric Altitude,,,Up from MSL,ft,float,4
    binn_object_set_float(AircraftDynamics,"ALT_MSL",(float)g04_eom_alt_msl_f8);
    // Free Stream Angle of Attack,,,Nose up,deg,float,4
    binn_object_set_float(AircraftDynamics,"AOA",(float)g04_eom_alpha_f8);
    // Field Elevation HPa Setting LH,,,~,HPa,float,4
    binn_object_set_float(AircraftDynamics,"BARO_SETTING_L_HPA",(float)(l_adrl2_c234/10));
    // Field Elevation inHg Setting LH,,,~,inHg,float,4
    binn_object_set_float(AircraftDynamics,"BARO_SETTING_L_INHG",(float)(l_adrl2_c235/1000));
    // Field Elevation HPa Setting RH,,,~,HPa,float,4
    binn_object_set_float(AircraftDynamics,"BARO_SETTING_R_HPA",(float)(l_adrl2_c236/10));
    // Field Elevation inHg Setting RH,,,~,inHg,float,4
    binn_object_set_float(AircraftDynamics,"BARO_SETTING_R_INHG",(float)(l_adrl2_c237/1000));
    // Calibrated Airspeed,,,~,Kn,float,4
    binn_object_set_float(AircraftDynamics,"CAS",(float)g04_eom_cas_f8);
    // Lateral CG,,,Right,mm,float,4
    binn_object_set_float(AircraftDynamics,"CG_LAT",(float)(l04_qtgo_blcg_m_f8*1000));
    // Longitudinal CG MAC,,,Aft,%,float,4
    binn_object_set_float(AircraftDynamics,"CG_MAC",(float)(g04_wght_xcg_f8 * 100.0));
    // Ground Speed,,,~,Kn,float,4
    binn_object_set_float(AircraftDynamics,"GND_SPEED",(float)g04_eom_gspeed_f8);
    // True Ground Track,,,East from True North,deg,float,4
    binn_object_set_float(AircraftDynamics,"GND_TRACK",(float)g04_eom_track_deg_f8);
    // Euler Yaw Attitude = True Hdg,,,East from True North,deg,float,4
    binn_object_set_float(AircraftDynamics,"HDG_TRUE",(float)g04d_eom_psi_deg_f8);
    // Indicated Airspeed - LH,,,~,Kn,float,4
    binn_object_set_float(AircraftDynamics,"IAS_L",(float)l_adrl2_b206);
    // Indicated Airspeed - RH,,,~,Kn,float,4
    binn_object_set_float(AircraftDynamics,"IAS_R",(float)l_adrr2_b206);
    // Indicated AOA - LH,,,Nose up,~,float,4
    binn_object_set_float(AircraftDynamics,"IND_AOA",(float)l_adrl2_b222);
    // Slip-Skid Indication LH,,,Same as sideslip,~,float,4
    binn_object_set_float(AircraftDynamics,"IND_SLIPSKID_L",(float)qerslip[0][0]);
    // Mach Number,,,~,~,float,4
    binn_object_set_float(AircraftDynamics,"MACH",(float)g04_eom_mach_f8);
    // Magnetic Variation = True Hdg - Magnetic Hdg,,,East,deg,float,4
    binn_object_set_float(AircraftDynamics,"MAGVAR",(float)sihdgmag[0]);
    // All-up Mass,,,~,kg,float,4
    binn_object_set_float(AircraftDynamics,"MASS_AC",(float)(g04_wght_wt_f8/2.2046226));
    // Euler Pitch Attitude,,,Nose up,deg,float,4
    binn_object_set_float(AircraftDynamics,"PITCH",(float)g04_eom_theta_deg_f8);
    // Body-axis pitch rate,,,Nose up,deg/s,float,4
    binn_object_set_float(AircraftDynamics,"PITCH_RATE",(float)(g04_eom_thetadot_f8 * 57.2957795));
    // Vertical Speed,,,Up,ft/min,float,4
    binn_object_set_float(AircraftDynamics,"ROC",(float)l04_qtgo_hdot_f8);
    // Euler Roll Attitude,,,Right wing down,deg,float,4
    binn_object_set_float(AircraftDynamics,"ROLL",(float)g04_eom_phi_deg_f8);
    // Body-axis roll rate,,,Right wing down,deg/s,float,4
    binn_object_set_float(AircraftDynamics,"ROLL_RATE",(float)(g04_eom_phidot_f8 * 57.2957795));
    // Free Stream Sideslip Angle,,,Nose left,deg,float,4
    binn_object_set_float(AircraftDynamics,"SIDESLIP",(float)g04_eom_beta_f8);
    //  Weight on Wheels - Any,,,True on contact,~,boolean,1
    binn_object_set_int8(AircraftDynamics,"WOW_ANY",(__int8)g04_grnd_wow_l1));
    // Weight on Wheels - Left Main,,,True on contact,~,boolean,1
    binn_object_set_int8(AircraftDynamics,"WOW_L",(__int8)(agf_lma||agf_lmb));
    // Weight on Wheels - Nose,,,True on contact,~,boolean,1
    binn_object_set_int8(AircraftDynamics,"WOW_N",(__int8)(agf_nsa||agf_nsb));
    // Weight on Wheels - Right Main,,,True on contact,~,boolean,1
    binn_object_set_int8(AircraftDynamics,"WOW_R",(__int8)(agf_rma||agf_rmb));
    // Body-axis yaw rate,,,Nose right,deg/s,float,4
    binn_object_set_float(AircraftDynamics,"YAW_RATE",(float)(g04_eom_psidot_f8 * 57.2957795));

};



/*
AUTOPILOT SECTION
*/
binn * binnAutopilot(binn * Autopilot){

    // Autopilot Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.AP_ENG = (__int8)(l_fccl1_d271_1_16 || l_fccr1_d271_2_16);
    // AP DISC,,,True on contact,~,boolean,1
    PAOutput.Autopilot.AP_DISC = (__int8)(i22_sldisc_l1 || i22_sldisf_l1);
    // Autopilot Engaged,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.AP_ENGAGED = (__int8)(g22_ap_eng_l1[0] || g22_ap_eng_l1[1]);
    // AP FAIL,,,True = failed,~,boolean,1
    PAOutput.Autopilot.AP_FAIL = (__int8)(l_fccl1_d275_1_22 || l_fccr1_d275_2_22 || l_fccl1_d275_1_23 || l_fccr1_d275_2_23);
    // AP STAB TRIM Switch,"0=CUTOUT, 1=NORMAL",,~,~,boolean,1
    PAOutput.Autopilot.AP_STAB_TRIM_SW = (__int8)i27_stab_acut_l1;
    // Approach push button,,,True on contact,~,boolean,1
    PAOutput.Autopilot.APPROACH_BTN = (__int8)(l22_fcc_app_pb_l1[0] || l22_fcc_app_pb_l1[1]);
    // Autothrottle Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.AUTO_THROTTLE_ENG = (__int8)l22_at_engage_l1;
    // Flight Director Coupled Status,,,True = coupled,~,int,4
    PAOutput.Autopilot.FD_COUPLED = (__int8)(l_fccl1_d271_1_15 || l_fccr1_d271_2_15);
    // FMA A/THR Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_ARMED = (__int8)l22_at_a270b25_l1;
    // FMA A/THR FMC SPD Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_FMC_SPD_ENG = (__int8)l22_at_a270b20_l1;
    // FMA A/THR GA Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_GA_ENG = (__int8)l22_at_a270b24_l1;
    // FMA A/THR MCP SPD Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_MCP_SPD_ENG = (__int8)l22_at_a270b23_l1;
    // FMA A/THR N1 Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_N1_ENG = (__int8)l22_at_a270b19_l1 ;
    // FMA A/THR RETARD Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_RETARD_ENG = (__int8)l22_at_a270b18_l1;
    // FMA A/THR THR HLD Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_ATHR_THR_HLD_ENG = (__int8)l22_at_thrhld_l1;
    // FMA CWS-P and CWS-R Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_CWS_P_R_ENG = (__int8)(l_fccl1_d270_1_21 || l_fccr1_d270_2_21 || l_fccl1_d270_1_22 || l_fccr1_d270_2_22);
    // FMA Back Course Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_BC_ARM = (__int8)(l_fccl1_d273_1_24 || l_fccr1_d273_2_24);
    // FMA Back Course Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_BC_ENG = (__int8)(l_fccl1_d273_1_25 ||l_fccr1_d273_2_25);
    // FMA Heading Select Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_HSEL_ENG = (__int8)(l_fccl1_d270_1_14 || l_fccr1_d270_2_14);
    // FMA LNAV Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_LNAV_ARM = (__int8)(l_fccl1_d273_1_16 || l_fccr1_d273_2_16);
    // FMA LNAV Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_LNAV_ENG = (__int8)(l_fccl1_d270_1_27 || l_fccr1_d270_2_27);
    // FMA Roll Attitude Hold Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_ROLL_HOLD_ENG = (__int8)(0);
    // FMA Lateral Rollout Mode Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_ROLLOUT_ARM = (__int8)(l_fccl1_d273_1_11 || l_fccr1_d273_2_11);
    // FMA Lateral Rollout Mode Engaged,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_ROLLOUT_ENGAGED = (__int8)(l_fccl1_d273_1_12 || l_fccr1_d273_2_12);
    // FMA VOR-LOC Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_VOR_LOC_ARM = (__int8)(l_fccl1_d270_1_25 || l_fccr1_d270_2_25);
    // FMA VOR-LOC Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_LAT_VOR_LOC_ENG = (__int8)(l_fccl1_d270_1_13 || l_fccr1_d270_2_13);
    // FMA ALT/ACQ Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_ALT_ACQ_ENG = (__int8)(l_fccl1_d270_1_15 || l_fccr1_d270_2_15) ;
    // FMA Altitude Hold Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_ALT_ENG = (__int8)(l_fccl1_d270_1_16 || l_fccr1_d270_2_16) ;
    // FMA FLARE Mode Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_FLARE_ARMED = (__int8)(l_fccl1_d270_1_23 || l_fccr1_d270_2_23) ;
    // FMA FL Change with IAS Hold Active,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_FLC_IAS_ENG = (__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28);
    // FMA FL Change with Mach Hold Active,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_FLC_MACH_ENG = (__int8)0;
    // FMA TO/GA Around Mode Engaged,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_GA_ENG = (__int8)(l_fccl1_d270_1_18 || l_fccr1_d270_2_18);
    // FMA Glide Slope Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_GS_ARM = (__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28);
    // FMA Glide Slope Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_GS_ENG = (__int8)(l_fccl1_d270_1_12 || l_fccr1_d270_2_12);
    // FMA Vertical MCP SPD Mode Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_MCP_SPD_ENG = (__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28);
    // FMA VNAV ALT Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VNAV_ALT_ENG = (__int8)(l_fccl1_d274_1_16 || l_fccr1_d274_2_16);
    // FMA VNAV FMS Mode Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VNAV_FMS_ARM = (__int8)(l_fccl1_d273_1_17 || l_fccr1_d273_2_17);
    // FMA VNAV FMS Mode Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VNAV_FMS_ENG = (__int8)(l_fccl1_d272_1_21 || l_fccr1_d272_2_21);
    // FMA VNAV PATH Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VNAV_PATH_ENG = (__int8)(l_fccl1_d271_1_11 || l_fccr1_d271_2_11);
    // FMA VNAV SPD Active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VNAV_SPD_ENG = (__int8)(l_fccl1_d271_1_12 || l_fccr1_d271_2_12);
    // FMA Vertical Speed Armed,,,True = armed,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VS_ARMED = (__int8)(l_fccl1_d270_1_26 || l_fccr1_d270_2_26);
    // FMA Vertical Speed Engaged,,,True = Engaged,~,boolean,1
    PAOutput.Autopilot.FMA_VERT_VS_ENG = (__int8)(l_fccl1_d270_1_17 || l_fccr1_d270_2_17);
    // Any GO-AROUND button active,,,True = engaged,~,boolean,1
    PAOutput.Autopilot.GA_BTN_ANY_ENG = (__int8)(i22_slgas_l1 || i22_slgas2_l1);
    // GO-AROUND button LH,,,True on contact,~,boolean,1
    PAOutput.Autopilot.GA_BTN_L = (__int8)i22_slgas_l1;
    // GO-AROUND button RH,,,True on contact,~,boolean,1
    PAOutput.Autopilot.GA_BTN_R = (__int8)i22_slgas2_l1;
    // STAB TRIM MANUAL Switch,,,"0=CUTOUT, 1=NORMAL",~,boolean,1
    PAOutput.Autopilot.STAB_TRIM_MAN_SW = (__int8)idchmcut;
    // AP TRIM DISC LH,,,True on contact,~,boolean,1
    PAOutput.Autopilot.TRIM_DISC_L = (__int8)i22_sldisc_l1;
    // AP TRIM DISC RH,,,True on contact,~,boolean,1
    PAOutput.Autopilot.TRIM_DISC_R = (__int8)i22_sldisf_l1;

    // Active FCC Channel,,,"1=capt, 2=f/o 3=both",~,int,4
    if((l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&!(l_fccl1_d272_1_12||l_fccr1_d272_2_12))PAOutput.Autopilot.FCC_ENG_CHANNEL = (__int8)1;
    else if(!(l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&(l_fccl1_d272_1_12||l_fccr1_d272_2_12))PAOutput.Autopilot.FCC_ENG_CHANNEL = (__int8)2;
    else if((l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&(l_fccl1_d272_1_12||l_fccr1_d272_2_12))PAOutput.Autopilot.FCC_ENG_CHANNEL = (__int8)3;
    else PAOutput.Autopilot.FCC_ENG_CHANNEL = 0;

};