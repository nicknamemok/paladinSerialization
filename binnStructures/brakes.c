/*
BRAKE SECTION
*/

binn * binnBrakes(binn * Brakes){

	// Pilot LH brake pedal position,,,Forward,deg,float,4
    binn_object_set_float(AircraftDynamics,"BRAKE_PED_POSITION_PILOT_L",(float)l04_sysi_brk_pos_f8[0]);
	// Pilot RH brake pedal position,,,Forward,deg,float,4
    binn_object_set_float(AircraftDynamics,"BRAKE_PED_POSITION_PILOT_R",(float)l04_sysi_brk_pos_f8[1]);
	// Antiskid Switch,,,0=off 1=level 1 2=level 2 3=level 3 4=max 5=RTO,~,int_s,1
    binn_object_set_int8(Autopilot,"BRAKE_ANTISKID_SW",(__int8)g32b_auto_state_i4);
    // PARKING BRAKE Engaged,,,True = engaged,~,boolean,1
    binn_object_set_int8(Autopilot,"PARKING_BRAKE_ENGAGED",(__int8)i32b_parking_brake_l1);

};