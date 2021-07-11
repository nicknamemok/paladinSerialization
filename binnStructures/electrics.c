/*
ELECTRICS SECTION
*/

binn * binnElectrics(binn * Elec){

    // BATT Switch,"0=OFF, 1=ON",,~,~,int,4
    binn_object_set_int8(Autopilot,"BATT_SW",(__int8)idaebat);

    // Elec Bus Transfer Switch,,,True = open,,boolean,1
    binn_object_set_int8(Autopilot,"BUS_XFER_SW",(__int8)idaebt);
    // Cabin Util / Galley Power Switch,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"CABIN_UTIL_PWR_SW",(__int8)idaegal);
    // Elec Gen1 Off Annunciation,,737: GEN 1 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_1_SRC_OFF,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_GEN_1_OFF",(__int8)al$aegoff);
    // Elec Gen2 Off Annunciation,,737: GEN 2 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_2_SRC_OFF,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_GEN_2_OFF",(__int8)al$aegoff2);
    // BAT DISCHARGE Annunciation,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_BATT_DISCHARGE",(__int8)al$aebatdis);
    // GEN BUS 1 OFF Annunciation,,,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_GEN_BUS_1_OFF",(__int8)al$aegoff);
    // GEN BUS 2 OFF Annunciation,,,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_GEN_BUS_2_OFF",(__int8)al$aegoff2);
    // GND POWER AVAILABLE Light,,,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_GND_PWR_AVAIL",(__int8)al$aexpavail);
    // Elec Gen1 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_XFER_GEN_1_OFF",(__int8)al$aetboff);
    // Elec Gen2 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_XFER_GEN_2_OFF",(__int8)al$aetboff2);
    // Generator Drive 1 Disconnect Swtich,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"GEN_1_DRIVE_DISC_SW",(__int8)idaedisc);
    // Generator Drive 2 Disconnect Swtich,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"GEN_2_DRIVE_DISC_SW",(__int8)idaedisc2);
    // DC Display Selector,"737: 128=TEST, 1=STBY PWR, 2=BAT BUS, 4=BAT, 8=AUX BAT, 16=TR1, 32=TR2, 64=TR3",,~,~,int,4
    binn_object_set_int32(Autopilot,"ELEC_AC_DISP_SEL",(__int32)lpwracsw10);
    // AC Display Selector,"737: 64=TEST, 1=STBY PWR, 2=GRD PWR, 4=GEN 1, 8=APU GEN, 16=GEN 2, 32=INV",,~,~,int,4
    binn_object_set_int32(Autopilot,"ELEC_DC_DISP_SEL",(__int32)lpwrdcsw10);

    // APU GEN Switch 1,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeug)binn_object_set_int8(Autopilot,"GEN_1_APU_SW",(__int8)1);
    else if(idaeugoff)binn_object_set_int8(Autopilot,"GEN_1_APU_SW",(__int8)-1);
    else binn_object_set_int8(Autopilot,"GEN_1_APU_SW",(__int8)0);

    // Elec Apu2 Control Switch,,,"0=open, 1=on -1=off",~,boolean,1
    if(idaeug2)binn_object_set_int8(Autopilot,"GEN_2_APU_SW",(__int8)1);
    else if(idaeugoff2)binn_object_set_int8(Autopilot,"GEN_2_APU_SW",(__int8)-1);
    else binn_object_set_int8(Autopilot,"GEN_2_APU_SW",(__int8)0);

    // Elec Eng Gen1 Control Switch,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeg)binn_object_set_int8(Autopilot,"GEN_1_SW",(__int8)1);
    else if(idaegoff)binn_object_set_int8(Autopilot,"GEN_1_SW",(__int8)-1);
    else binn_object_set_int8(Autopilot,"GEN_1_SW",(__int8)0);

    // Elec Eng GEN Switch 2,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeg2)binn_object_set_int8(Autopilot,"GEN_2_SW",(__int8)1);
    else if(idaegoff2)binn_object_set_int8(Autopilot,"GEN_2_SW",(__int8)-1);
    else binn_object_set_int8(Autopilot,"GEN_2_SW",(__int8)0);

    // AC Load Indication,,,~,A,int,4
    binn_object_set_int32(Autopilot,"LOAD_AC_IND",(__int32)aej_p5_13_acamp);
    // DC Load Indication,,,,A,int,4
    binn_object_set_int32(Autopilot,"LOAD_DC_IND",(__int32)aej_p5_13_dcamp);

    // STBY PWR Switch,"0 = OFF, 1=AUTO, 2=BAT",,~,~,int,1
    if(idaesbauto)binn_object_set_int8(Autopilot,"STBY_PWR_SW",(__int8)1);
    else if(idaesbbat)binn_object_set_int8(Autopilot,"STBY_PWR_SW",(__int8)2);
    else binn_object_set_int8(Autopilot,"STBY_PWR_SW",(__int8)0);

    // Elec Ground Power Control Switch,,,"0=open, 1=on -1=off" ,,~,int,1
    if(idaexp)binn_object_set_int8(Autopilot,"GND_PWR_SW",(__int8)1);
    else if(idaexpoff)binn_object_set_int8(Autopilot,"GND_PWR_SW",(__int8)-1);
    else binn_object_set_int8(Autopilot,"GND_PWR_SW",(__int8)0);

    // IFE / PASS SEAT Power Switch,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"PASS_SEAT_PWR_SW",(__int8)idaeife);
    // TR UNIT Annunciation,,,True = On,~,boolean,1
    binn_object_set_int8(Autopilot,"ELEC_AC_DISP_SEL",(__int8)al$aetruflt);
    // ELEC amber lamp on AC/DC Metering Panel,,,True = illuminated,~,boolean,1
    binn_object_set_int8(Autopilot,"CWA_ELEC_ELEC",(__int8))al$aeelec);
    // CPS Frequency Indication,,,~,Hz,int,4
    binn_object_set_int32(Autopilot,"CPS_FREQ_IND"(__int32)aej_p5_13_acfreq);
    // AC Voltage Indication,,,~,V,float,4
    binn_object_set_int32(Autopilot,"VOLTAGE_AC_IND",(__int32)aej_p5_13_acvolt);
    // DC Voltage Indication,,,~,V,float,4
    binn_object_set_int32(Autopilot,"VOLTAGE_DC_IND",(__int32)aej_p5_13_dcvolt);

};
