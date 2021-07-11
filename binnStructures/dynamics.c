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
