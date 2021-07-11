/*
AUTOPILOT SECTION
*/
binn * binnAutopilot(binn * Autopilot){

    // Autopilot Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"AP_ENG",(__int8)(l_fccl1_d271_1_16 || l_fccr1_d271_2_16));
    // AP DISC,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"AP_DISC",(__int8)(i22_sldisc_l1 || i22_sldisf_l1));
    // Autopilot Engaged,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"AP_ENGAGED",(__int8)(g22_ap_eng_l1[0] || g22_ap_eng_l1[1]));
    // AP FAIL,,,True = failed,~,boolean,1
    binn_object_set_int8(Autopilot,"AP_FAIL",(__int8)(l_fccl1_d275_1_22 || l_fccr1_d275_2_22 || l_fccl1_d275_1_23 || l_fccr1_d275_2_23));
    // AP STAB TRIM Switch,"0=CUTOUT, 1=NORMAL",,~,~,boolean,1
    binn_object_set_int8(Autopilot,"AP_STAB_TRIM_SW",(__int8)i27_stab_acut_l1);
    // Approach push button,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"APPROACH_BTN",(__int8)(l22_fcc_app_pb_l1[0] || l22_fcc_app_pb_l1[1]));
    // Autothrottle Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"AUTO_THROTTLE_ENG",(__int8)l22_at_engage_l1);
    // Flight Director Coupled Status,,,True = coupled,~,int,4
    binn_object_set_int8(Autopilot,"FD_COUPLED",(__int8)(l_fccl1_d271_1_15 || l_fccr1_d271_2_15));
    // FMA A/THR Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_ARMED",(__int8)l22_at_a270b25_l1);
    // FMA A/THR FMC SPD Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_FMC_SPD_ENG",(__int8)l22_at_a270b20_l1);
    // FMA A/THR GA Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_GA_ENG",(__int8)l22_at_a270b24_l1);
    // FMA A/THR MCP SPD Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_MCP_SPD_ENG",(__int8)l22_at_a270b23_l1);
    // FMA A/THR N1 Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_N1_ENG",(__int8)l22_at_a270b19_l1);
    // FMA A/THR RETARD Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_RETARD_ENG",(__int8)l22_at_a270b18_l1);
    // FMA A/THR THR HLD Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_ATHR_THR_HLD_ENG",(__int8)l22_at_thrhld_l1);
    // FMA CWS-P and CWS-R Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_CWS_P_R_ENG",(__int8)(l_fccl1_d270_1_21 || l_fccr1_d270_2_21 || l_fccl1_d270_1_22 || l_fccr1_d270_2_22));
    // FMA Back Course Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_BC_ARM",(__int8)(l_fccl1_d273_1_24 || l_fccr1_d273_2_24));
    // FMA Back Course Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_BC_ENG",(__int8)(l_fccl1_d273_1_25 ||l_fccr1_d273_2_25));
    // FMA Heading Select Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_HSEL_ENG",(__int8)(l_fccl1_d270_1_14 || l_fccr1_d270_2_14));
    // FMA LNAV Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_LNAV_ARM",(__int8)(l_fccl1_d273_1_16 || l_fccr1_d273_2_16));
    // FMA LNAV Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_LNAV_ENG",(__int8)(l_fccl1_d270_1_27 || l_fccr1_d270_2_27));
    // FMA Roll Attitude Hold Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_ROLL_HOLD_ENG",(__int8)(0));
    // FMA Lateral Rollout Mode Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_ROLLOUT_ARM",(__int8)(l_fccl1_d273_1_11 || l_fccr1_d273_2_11));
    // FMA Lateral Rollout Mode Engaged,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_ROLLOUT_ENGAGED",(__int8)(l_fccl1_d273_1_12 || l_fccr1_d273_2_12));
    // FMA VOR-LOC Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_VOR_LOC_ARM",(__int8)(l_fccl1_d270_1_25 || l_fccr1_d270_2_25));
    // FMA VOR-LOC Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_LAT_VOR_LOC_ENG",(__int8)(l_fccl1_d270_1_13 || l_fccr1_d270_2_13));
    // FMA ALT/ACQ Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_ALT_ACQ_ENG",(__int8)(l_fccl1_d270_1_15 || l_fccr1_d270_2_15));
    // FMA Altitude Hold Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_ALT_ENG",(__int8)(l_fccl1_d270_1_16 || l_fccr1_d270_2_16));
    // FMA FLARE Mode Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_FLARE_ARMED",(__int8)(l_fccl1_d270_1_23 || l_fccr1_d270_2_23);
    // FMA FL Change with IAS Hold Active,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_FLC_IAS_ENG",(__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28));
    // FMA FL Change with Mach Hold Active,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_FLC_MACH_ENG",(__int8)0);
    // FMA TO/GA Around Mode Engaged,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_GA_ENG",(__int8)(l_fccl1_d270_1_18 || l_fccr1_d270_2_18));
    // FMA Glide Slope Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_GS_ARM",(__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28));
    // FMA Glide Slope Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_GS_ENG",(__int8)(l_fccl1_d270_1_12 || l_fccr1_d270_2_12));
    // FMA Vertical MCP SPD Mode Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_MCP_SPD_ENG",(__int8)(l_fccl1_d270_1_28 || l_fccr1_d270_2_28));
    // FMA VNAV ALT Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VNAV_ALT_ENG",(__int8)(l_fccl1_d274_1_16 || l_fccr1_d274_2_16);
    // FMA VNAV FMS Mode Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VNAV_FMS_ARM",(__int8)(l_fccl1_d273_1_17 || l_fccr1_d273_2_17));
    // FMA VNAV FMS Mode Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VNAV_FMS_ENG",(__int8)(l_fccl1_d272_1_21 || l_fccr1_d272_2_21);
    // FMA VNAV PATH Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VNAV_PATH_ENG",(__int8)(l_fccl1_d271_1_11 || l_fccr1_d271_2_11));
    // FMA VNAV SPD Active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VNAV_SPD_ENG",(__int8)(l_fccl1_d271_1_12 || l_fccr1_d271_2_12));
    // FMA Vertical Speed Armed,,,True = armed,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VS_ARMED",(__int8)(l_fccl1_d270_1_26 || l_fccr1_d270_2_26));
    // FMA Vertical Speed Engaged,,,True = Engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"FMA_VERT_VS_ENG",(__int8)(l_fccl1_d270_1_17 || l_fccr1_d270_2_17));
    // Any GO-AROUND button active,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"GA_BTN_ANY_ENG",(__int8)(i22_slgas_l1 || i22_slgas2_l1));
    // GO-AROUND button LH,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"GA_BTN_L",(__int8)i22_slgas_l1);
    // GO-AROUND button RH,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"GA_BTN_R",(__int8)i22_slgas2_l1);
    // STAB TRIM MANUAL Switch,,,"0=CUTOUT, 1=NORMAL",~,boolean,1
    binn_object_set_int8(Autopilot,"STAB_TRIM_MAN_SW",(__int8)idchmcut);
    // AP TRIM DISC LH,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"TRIM_DISC_L",(__int8)i22_sldisc_l1);
    // AP TRIM DISC RH,,,True on contact,~,boolean,1
    binn_object_set_int8(Autopilot,"TRIM_DISC_R",(__int8)i22_sldisf_l1);

    // Active FCC Channel,,,"1=capt, 2=f/o 3=both",~,int,4
    if((l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&!(l_fccl1_d272_1_12||l_fccr1_d272_2_12))binn_object_set_int8(Autopilot,"FCC_ENG_CHANNEL",(__int8)1);
    else if(!(l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&(l_fccl1_d272_1_12||l_fccr1_d272_2_12))binn_object_set_int8(Autopilot,"FCC_ENG_CHANNEL",(__int8)2);
    else if((l_fccl1_d272_1_11||l_fccr1_d272_2_11)&&(l_fccl1_d272_1_12||l_fccr1_d272_2_12))binn_object_set_int8(Autopilot,"FCC_ENG_CHANNEL",(__int8)3);
    else binn_object_set_int8(Autopilot,"FCC_ENG_CHANNEL",(__int8)0;

};