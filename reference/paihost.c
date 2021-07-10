/*$Header_Start$*/
/***********************************************************************
*
* FILENAME    : paihost.c
*
* TITLE       : Interface to the Paladin AI interface
*
* REVISION    : 1.0
* BASELINE    :
* PACKAGE     :
*
* CSCI        : Stall Box
* CSC         : Interface to the Paladin AI interface
*
* APPL. LEVEL : 3-737-700/800
*
* AUTHORITY   : Principal Engineer
*
* COPYRIGHT   : Copyright (C) Alaska Airlines 2021
*
************************************************************************
*
* DESCRIPTION:
*
*
* To interface the Paladin AI interface via ethernet
*
*
************************************************************************
*
* REFERENCES:
*
*
*
************************************************************************
*
*
* MODIFICATION RECORD
*
*  DATE         ENGINEER         REASON FOR CHANGE
*  ----         --------         -----------------
*
*$Record_Start$
*  DATE         ENGINEER  REV    REASON FOR CHANGE
*  ----         --------  ---    -----------------
*$Record_End$
*
***********************************************************************/

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                                                                           */
/*              Copyright (C) Alaska Airlines 2021                           */
/*                                                                           */
/*                                                                           */
/*---------------------------------------------------------------------------*/

/* BEGIN of CAE code */

/* C'Common_Database_Variables, EXTERNAL LABELS --------------- */

/* CP       SHIP                                */
/*                                              */
/* INPUT                                        */
/* =====                                        */
/*                                              */
/* CPI      AEJ_P5_13_ACAMP,                    */
/* CPI      AEJ_P5_13_ACFREQ,                   */
/* CPI      AEJ_P5_13_ACVOLT,                   */
/* CPI      AEJ_P5_13_DCAMP,                    */
/* CPI      AEJ_P5_13_DCVOLT,                   */
/* CPI      AGF_LMA,                            */
/* CPI      AGF_LMB,                            */
/* CPI      AGF_NSA,                            */
/* CPI      AGF_NSB,                            */
/* CPI      AGF_RMA,                            */
/* CPI      AGF_RMB,                            */
/* CPI      AL$AEBATDIS,                        */
/* CPI      AL$AEELEC,                          */
/* CPI      AL$AEGOFF,                          */
/* CPI      AL$AEGOFF2,                         */
/* CPI      AL$AETBOFF,                         */
/* CPI      AL$AETBOFF2,                        */
/* CPI      AL$AETRUFLT,                        */
/* CPI      AL$AEXPAVAIL,                       */
/* CPI      AWV_FSEU_VTELQ,                     */
/* CPI      AWV_FSEU_VTERQ,                     */
/* CPI      CA99_POS_REPOSN_L1,                 */
/* CPI      CACPPOS,                            */
/* CPI      CATRIM,                             */
/* CPI      CECPFOR,                            */
/* CPI      CECPPOS,                            */
/* CPI      CHSTAB,                             */
/* CPI      CI99_FRZ_ALT_L1,                    */
/* CPI      CI99_FRZ_FLT_L1,                    */
/* CPI      CI99_FRZ_POSN_L1,                   */
/* CPI      CI99_FRZ_TOTAL_L1,                  */
/* CPI      CI99_VIS_VISIB_F4,                  */
/* CPI      CNCPPOS,                            */
/* CPI      CRPFOR,                             */
/* CPI      CRPPOS,                             */
/* CPI      CRTRIM,                             */
/* CPI      CSPPOS,                             */
/* CPI      DZHCD,                              */
/* CPI      DZHLD,                              */
/* CPI      EEGTSEL,                            */
/* CPI      EEN1INDSEL,                         */
/* CPI      EEN2ACTSEL,                         */
/* CPI      EEPOILSEL,                          */
/* CPI      EEREVP,                             */
/* CPI      EETOILSEL,                          */
/* CPI      EEWFMSEL,                           */
/* CPI      EFREVINT,                           */
/* CPI      ESTARTUP,                           */
/* CPI      ETLA,                               */
/* CPI      EVIBIND,                            */
/* CPI      G00A_QTG_ACTIVE_L1,                 */
/* CPI      G04_AMB_WIND_VV_F8,                 */
/* CPI      G04_EOM_ALPHA_F8,                   */
/* CPI      G04_EOM_ALT_MSL_F8,                 */
/* CPI      G04_EOM_ALT_PRESS_F8,               */
/* CPI      G04_EOM_BETA_F8,                    */
/* CPI      G04_EOM_CAS_F8,                     */
/* CPI      G04_EOM_GSPEED_F8,                  */
/* CPI      G04_EOM_MACH_F8,                    */
/* CPI      G04_EOM_PHI_DEG_F8,                 */
/* CPI      G04_EOM_PHIDOT_F8,                  */
/* CPI      G04_EOM_PSIDOT_F8,                  */
/* CPI      G04_EOM_THETA_DEG_F8,               */
/* CPI      G04_EOM_THETADOT_F8,                */
/* CPI      G04_EOM_TRACK_DEG_F8,               */
/* CPI      G04_EOM_UGDOT_F8,                   */
/* CPI      G04_EOM_VGDOT_F8,                   */
/* CPI      G04_EOM_WGDOT_F8,                   */
/* CPI      G04_GRND_WOW_L1,                    */
/* CPI      G04_TURBV_INTENSITY_F8,             */
/* CPI      G04_WGHT_WT_F8,                     */
/* CPI      G04_WGHT_XCG_F8,                    */
/* CPI      G04D_EOM_PSI_DEG_F8,                */
/* CPI      G22_AP_ENG_L1,                      */
/* CPI      G27F_LEVER_I4,                      */
/* CPI      G32B_AUTO_STATE_I4,                 */
/* CPI      G34B_RU_ACLAT_F8,                   */
/* CPI      G34B_RU_ACLON_F8,                   */
/* CPI      G34B_RU_FRZFLT_L1,                  */
/* CPI      G34F_FMS_V1_F8,                     */
/* CPI      G34F_FMS_V2_F8,                     */
/* CPI      G34F_FMS_V2_VALID_L1,               */
/* CPI      G34F_FMS_VR_F8,                     */
/* CPI      G34F_FMS_VREF_F8,                   */
/* CPI      I21P_ALT_HORN_CUTOUT_L1,            */
/* CPI      I21P_PRES_MOD_SEL_ALTER_L1,         */
/* CPI      I21P_PRES_MOD_SEL_MAN_1_L1,         */
/* CPI      I21P_PRES_MOD_SEL_MAN_2_L1,         */
/* CPI      I22_SLDISC_L1,                      */
/* CPI      I22_SLDISF_L1,                      */
/* CPI      I22_SLGAS2_L1,                      */
/* CPI      I22_SLGAS_L1,                       */
/* CPI      I27_CF_SAON_L1,                     */
/* CPI      I27_CF_SASTB_L1,                    */
/* CPI      I27_CF_SBON_L1,                     */
/* CPI      I27_CF_SBSTB_L1,                    */
/* CPI      I27_SPLR_SAON_L1,                   */
/* CPI      I27_SPLR_SBON_L1,                   */
/* CPI      I27_STAB_ACUT_L1,                   */
/* CPI      I27_YAWD_SW_L1,                     */
/* CPI      I27F_ALT_SEL_SW_DOWN_L1,            */
/* CPI      I27F_ALT_SEL_SW_UP_L1,              */
/* CPI      I27F_FLAP_ALT_SW_ARM_L1,            */
/* CPI      I28_BOOST1_L1,                      */
/* CPI      I28_BOOST2_L1,                      */
/* CPI      I28_BOOST3_L1,                      */
/* CPI      I28_BOOST4_L1,                      */
/* CPI      I28_BOOST5_L1,                      */
/* CPI      I28_BOOST6_L1,                      */
/* CPI      I28_XFEED_L1,                       */
/* CPI      I32B_PARKING_BRAKE_L1,              */
/* CPI      I32G_EMER_HDL_POS_LEFT_F4,          */
/* CPI      I32G_EMER_HDL_POS_NOSE_F4,          */
/* CPI      I32G_EMER_HDL_POS_RIGHT_F4,         */
/* CPI      I32G_GEAR_HDL_DN_L1,                */
/* CPI      I32G_GEAR_HDL_UP_L1,                */
/* CPI      I33_ANTI_COL_RED_L1,                */
/* CPI      I33_EMER_LT_OFF_L1,                 */
/* CPI      I33_EMER_LT_ON_L1,                  */
/* CPI      I33_LAND_FIXED_LEFT_OFF_L1,         */
/* CPI      I33_LAND_FIXED_LEFT_ON_L1,          */
/* CPI      I33_LAND_FIXED_RIGHT_OFF_L1,        */
/* CPI      I33_LAND_FIXED_RIGHT_ON_L1,         */
/* CPI      I33_LAND_RETRACTABLE_L_ON_L1,       */
/* CPI      I33_LAND_RETRACTABLE_L_RETR_L1,     */
/* CPI      I33_LAND_RETRACTABLE_R_ON_L1,       */
/* CPI      I33_LAND_RETRACTABLE_R_RETR_L1,     */
/* CPI      I33_LOGO_L1,                        */
/* CPI      I33_STROBE_SW_STEADY_L1,            */
/* CPI      I33_TAXI_L1,                        */
/* CPI      I33_TURN_LEFT_L1,                   */
/* CPI      I33_TURN_RIGHT_L1,                  */
/* CPI      I33_WHEEL_WELL_L1,                  */
/* CPI      I33_WING_INSP_L1,                   */
/* CPI      I35_PASS_OSY_L1,                    */
/* CPI      I71_RUN1_L1,                        */
/* CPI      I71_RUN2_L1,                        */
/* CPI      I71_START_CONT1_L1,                 */
/* CPI      I71_START_CONT2_L1,                 */
/* CPI      I71_START_FLT1_L1,                  */
/* CPI      I71_START_FLT2_L1,                  */
/* CPI      I71_START_GND1_L1,                  */
/* CPI      I71_START_GND2_L1,                  */
/* CPI      IDAEBAT,                            */
/* CPI      IDAEBT,                             */
/* CPI      IDAEDISC,                           */
/* CPI      IDAEDISC2,                          */
/* CPI      IDAEG,                              */
/* CPI      IDAEG2,                             */
/* CPI      IDAEGAL,                            */
/* CPI      IDAEGOFF,                           */
/* CPI      IDAEGOFF2,                          */
/* CPI      IDAEIFE,                            */
/* CPI      IDAESBAUTO,                         */
/* CPI      IDAESBBAT,                          */
/* CPI      IDAEUG,                             */
/* CPI      IDAEUG2,                            */
/* CPI      IDAEUGOFF,                          */
/* CPI      IDAEUGOFF2,                         */
/* CPI      IDAEXP,                             */
/* CPI      IDAEXPOFF,                          */
/* CPI      IDCHMCUT,                           */
/* CPI      IDESLIGN,                           */
/* CPI      IDESRIGN,                           */
/* CPI      IDSLGAS3,                           */
/* CPI      IDSLGAS4,                           */
/* CPI      L04_AMB_TEMP_C_F8,                  */
/* CPI      L04_AMB_WIND_EW_F8,                 */
/* CPI      L04_AMB_WIND_NS_F8,                 */
/* CPI      L04_QTGO_BLCG_M_F8,                 */
/* CPI      L04_QTGO_HDOT_F8,                   */
/* CPI      L04_RCON_DC_F8,                     */
/* CPI      L04_SYSI_ACSET_TANKFUEL_F4,         */
/* CPI      L04_SYSI_BRK_POS_F8,                */
/* CPI      L04_SYSI_ENV_RWYICE_L1,             */
/* CPI      L04_SYSI_ENV_RWYPATCHY_F4,          */
/* CPI      L04_SYSI_ENV_RWYSAND_L1,            */
/* CPI      L04_SYSI_ENV_RWYSLUSH_L1,           */
/* CPI      L04_SYSI_ENV_RWYSNOW_L1,            */
/* CPI      L04_SYSI_ENV_RWYWET_L1,             */
/* CPI      L04_SYSI_GEAR_F8,                   */
/* CPI      L04_SYSI_GSTEER_F8,                 */
/* CPI      L04_SYSI_WSACTIVE_L1,               */
/* CPI      L22_AT_A270B18_L1,                  */
/* CPI      L22_AT_A270B19_L1,                  */
/* CPI      L22_AT_A270B20_L1,                  */
/* CPI      L22_AT_A270B23_L1,                  */
/* CPI      L22_AT_A270B24_L1,                  */
/* CPI      L22_AT_A270B25_L1,                  */
/* CPI      L22_AT_ENGAGE_L1,                   */
/* CPI      L22_AT_THRHLD_L1,                   */
/* CPI      L22_FCC_APP_PB_L1,                  */
/* CPI      L_ADRL2_B206,                       */
/* CPI      L_ADRL2_B222,                       */
/* CPI      L_ADRL2_C234,                       */
/* CPI      L_ADRL2_C235,                       */
/* CPI      L_ADRL2_C236,                       */
/* CPI      L_ADRL2_C237,                       */
/* CPI      L_ADRR2_B206,                       */
/* CPI      L_FCCL1_D270_1_12,                  */
/* CPI      L_FCCL1_D270_1_13,                  */
/* CPI      L_FCCL1_D270_1_14,                  */
/* CPI      L_FCCL1_D270_1_15,                  */
/* CPI      L_FCCL1_D270_1_16,                  */
/* CPI      L_FCCL1_D270_1_17,                  */
/* CPI      L_FCCL1_D270_1_18,                  */
/* CPI      L_FCCL1_D270_1_21,                  */
/* CPI      L_FCCL1_D270_1_22,                  */
/* CPI      L_FCCL1_D270_1_23,                  */
/* CPI      L_FCCL1_D270_1_25,                  */
/* CPI      L_FCCL1_D270_1_26,                  */
/* CPI      L_FCCL1_D270_1_27,                  */
/* CPI      L_FCCL1_D270_1_28,                  */
/* CPI      L_FCCL1_D271_1_11,                  */
/* CPI      L_FCCL1_D271_1_12,                  */
/* CPI      L_FCCL1_D271_1_15,                  */
/* CPI      L_FCCL1_D271_1_16,                  */
/* CPI      L_FCCL1_D272_1_11,                  */
/* CPI      L_FCCL1_D272_1_12,                  */
/* CPI      L_FCCL1_D272_1_21,                  */
/* CPI      L_FCCL1_D273_1_11,                  */
/* CPI      L_FCCL1_D273_1_12,                  */
/* CPI      L_FCCL1_D273_1_16,                  */
/* CPI      L_FCCL1_D273_1_17,                  */
/* CPI      L_FCCL1_D273_1_24,                  */
/* CPI      L_FCCL1_D273_1_25,                  */
/* CPI      L_FCCL1_D274_1_16,                  */
/* CPI      L_FCCL1_D275_1_22,                  */
/* CPI      L_FCCL1_D275_1_23,                  */
/* CPI      L_FCCR1_D270_2_12,                  */
/* CPI      L_FCCR1_D270_2_13,                  */
/* CPI      L_FCCR1_D270_2_14,                  */
/* CPI      L_FCCR1_D270_2_15,                  */
/* CPI      L_FCCR1_D270_2_16,                  */
/* CPI      L_FCCR1_D270_2_17,                  */
/* CPI      L_FCCR1_D270_2_18,                  */
/* CPI      L_FCCR1_D270_2_21,                  */
/* CPI      L_FCCR1_D270_2_22,                  */
/* CPI      L_FCCR1_D270_2_23,                  */
/* CPI      L_FCCR1_D270_2_25,                  */
/* CPI      L_FCCR1_D270_2_26,                  */
/* CPI      L_FCCR1_D270_2_27,                  */
/* CPI      L_FCCR1_D270_2_28,                  */
/* CPI      L_FCCR1_D271_2_11,                  */
/* CPI      L_FCCR1_D271_2_12,                  */
/* CPI      L_FCCR1_D271_2_15,                  */
/* CPI      L_FCCR1_D271_2_16,                  */
/* CPI      L_FCCR1_D272_2_11,                  */
/* CPI      L_FCCR1_D272_2_12,                  */
/* CPI      L_FCCR1_D272_2_21,                  */
/* CPI      L_FCCR1_D273_2_11,                  */
/* CPI      L_FCCR1_D273_2_12,                  */
/* CPI      L_FCCR1_D273_2_16,                  */
/* CPI      L_FCCR1_D273_2_17,                  */
/* CPI      L_FCCR1_D273_2_24,                  */
/* CPI      L_FCCR1_D273_2_25,                  */
/* CPI      L_FCCR1_D274_2_16,                  */
/* CPI      L_FCCR1_D275_2_22,                  */
/* CPI      L_FCCR1_D275_2_23,                  */
/* CPI      L_RAL2_B164,                        */
/* CPI      LPWRACSW10,                         */
/* CPI      LPWRDCSW10,                         */
/* CPI      O21P_HCD_F4,                        */
/* CPI      O21P_PDD_F4,                        */
/* CPI      O21P_VFD1_F4,                       */
/* CPI      O27_STALL_SHKR1_L1,                 */
/* CPI      O27_STALL_SHKR2_L1,                 */
/* CPI      O28_TANK_TEMP_F4,                   */
/* CPI      O33_S21P_AUTO_FAIL_LT_L1,           */
/* CPI      O33_S21P_OFF_SCHEDULE_DESC_LT_L1,   */
/* CPI      O33_S22_MTSFL_L1,                   */
/* CPI      O33_S22_MTSFL_PWR_L1,               */
/* CPI      O33_S22_STSFL_L1,                   */
/* CPI      O33_S22_STSFL_PWR_L1,               */
/* CPI      O33_S27_ELV_DFD_L1,                 */
/* CPI      O33_S27_ELV_DFD_PWR_L1,             */
/* CPI      O33_S27_YAWD_YDWLT_L1,              */
/* CPI      O33_S27_YAWD_YDWLT_PWR_L1,          */
/* CPI      O33_S27F_AUTO_SLT_FAIL_L1,          */
/* CPI      O33_S27F_AUTO_SLT_FAIL_PWR_L1,      */
/* CPI      O33_S28_BOOST1_LOW_L1,              */
/* CPI      O33_S28_BOOST1_LOW_PWR_L1,          */
/* CPI      O33_S28_BOOST2_LOW_L1,              */
/* CPI      O33_S28_BOOST2_LOW_PWR_L1,          */
/* CPI      O33_S28_BOOST3_LOW_L1,              */
/* CPI      O33_S28_BOOST3_LOW_PWR_L1,          */
/* CPI      O33_S28_BOOST4_LOW_L1,              */
/* CPI      O33_S28_BOOST4_LOW_PWR_L1,          */
/* CPI      O33_S28_BOOST5_LOW_L1,              */
/* CPI      O33_S28_BOOST5_LOW_PWR_L1,          */
/* CPI      O33_S28_BOOST6_LOW_L1,              */
/* CPI      O33_S28_BOOST6_LOW_PWR_L1,          */
/* CPI      O33_S35_OXYP_L1,                    */
/* CPI      O33_S35_OXYP_PWR_L1,                */
/* CPI      O33_S71_FFIBLT1_L1,                 */
/* CPI      O33_S71_FFIBLT1_PWR_L1,             */
/* CPI      O33_S71_FFIBLT2_L1,                 */
/* CPI      O33_S71_FFIBLT2_PWR_L1,             */
/* CPI      O35_POXY_F4,                        */
/* CPI      QERSLIP,                            */
/* CPI      RGUTCHR,                            */
/* CPI      RGUTCMN,                            */
/* CPI      RGUTCSC,                            */
/* CPI      SIHDGMAG,                           */
/* CPI      SYDENG                              */
/* C+--- INSERTED BY CAE C PRE-COMPILER */                                      
#include "paihost.c.hpc.0"                                                      
/* C------------------------------------------------------------------------ */


#include "winsock2.h" /* !CPC */
#include "libcae.h"   /* !CPC */
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "PAI_B737NG.h"    /* !CPC */

int    firstpass=0;
int    ordercnt=0;
int    packet_number=1;
int    sentframe=6;
int    nbytes;
short  connected=0;
char*  group = "192.168.240.11";
int    port = 11050;
int    iResult;

//outputs to server
PAI_OUTPUT PAOutput;
/* initialize winsock2 */

struct sockaddr_in addr;
static WSADATA wsaData;

typedef int SOCKET_LENGTH;
int sockfd;


void paihost_step();
void OutputMapping1();
/*void OutputMapping2();
void OutputMapping3();
void Malf_encode();
void CB_encode();*/

void paihost_step(void)
{
    if (!connected)
   {
       connected = 1;
	    // Initialize Winsock
	    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	    if (iResult != 0) {
	      printf("WSAStartup failed: %d\n", iResult);
	      connected = 0;
        }

        sockfd = socket(AF_INET, SOCK_DGRAM, 0);
        if (sockfd < 0) {
            connected = 0;
        }

        /* set up destination address
        */

        memset(&addr, 0, sizeof(addr));
        addr.sin_family = AF_INET;
        addr.sin_addr.s_addr = inet_addr(group);
        addr.sin_port = htons(port);
   }

   if(connected){

       ordercnt++;

       if(ordercnt==1)OutputMapping1();
/*       else if(ordercnt==2)OutputMapping2();
       else if(ordercnt==3)OutputMapping3();
       else if(ordercnt==4)Malf_encode();
       else if(ordercnt==5)CB_encode(); */
       else if(ordercnt==sentframe) {
           nbytes = sendto(sockfd,(char*)&PAOutput,sizeof(PAOutput),0,(struct sockaddr*) &addr,sizeof(addr));
           if (nbytes < 0) {
               connected = 0;
           }
           ordercnt = 0;
   	       packet_number++;
	       if(packet_number < 0)packet_number=0;
        }
	}

    if(!connected){
        WSACleanup();
	}

}

void OutputMapping1()
{
	// FRAME_COUNTER,Frame Counter,,,~,~,int,4
	PAOutput.Simulator_Counter = (__int32)packet_number;
	// padding
	PAOutput.Simulator_time =  (float)((rgutchr * 3600.00) + (rgutcmn * 60) + rgutcsc);

    //*************DYNAMIC SECTION *****************

 	// Latitude
	PAOutput.AcDyn.LAT = (double)g34b_ru_aclat_f8;
 	// Longitude
	PAOutput.AcDyn.LON = (double)g34b_ru_aclon_f8;
	// Body-axis Lateral accel excluding gravity,,,Fwd,m/s^2,float,4
	PAOutput.AcDyn.ACC_LAT_BODY = (float)(0.3048 * g04_eom_ugdot_f8);
 	// Body-axis Longitudinal accel excluding gravity,,,Right,m/s^2,float,4
	PAOutput.AcDyn.ACC_LON_BODY = (float)(0.3048 * g04_eom_vgdot_f8);
 	// Body-axis Vertical accel excluding gravity,,,Down,m/s^2,float,4
	PAOutput.AcDyn.ACC_VERT_BODY = (float)(0.3048 * g04_eom_wgdot_f8);
 	// Geometric Altitude,,,Up from MSL,ft,float,4
	PAOutput.AcDyn.ALT_MSL = (float)g04_eom_alt_msl_f8;
 	// Free Stream Angle of Attack,,,Nose up,deg,float,4
	PAOutput.AcDyn.AOA = (float)g04_eom_alpha_f8;
 	// Field Elevation HPa Setting LH,,,~,HPa,float,4
	PAOutput.AcDyn.BARO_SETTING_L_HPA = (float)(l_adrl2_c234/10);
 	// Field Elevation inHg Setting LH,,,~,inHg,float,4
	PAOutput.AcDyn.BARO_SETTING_L_INHG = (float)(l_adrl2_c235/1000);
	// Field Elevation HPa Setting RH,,,~,HPa,float,4
	PAOutput.AcDyn.BARO_SETTING_R_HPA = (float)(l_adrl2_c236/10);
 	// Field Elevation inHg Setting RH,,,~,inHg,float,4
	PAOutput.AcDyn.BARO_SETTING_R_INHG = (float)(l_adrl2_c237/1000);
 	// Calibrated Airspeed,,,~,Kn,float,4
	PAOutput.AcDyn.CAS = (float)g04_eom_cas_f8;
 	// Lateral CG,,,Right,mm,float,4
	PAOutput.AcDyn.CG_LAT = (float)(l04_qtgo_blcg_m_f8*1000);
 	// Longitudinal CG MAC,,,Aft,%,float,4
	PAOutput.AcDyn.CG_MAC = (float)(g04_wght_xcg_f8 * 100.0);
 	// Ground Speed,,,~,Kn,float,4
	PAOutput.AcDyn.GND_SPEED = (float)g04_eom_gspeed_f8;
 	// True Ground Track,,,East from True North,deg,float,4
	PAOutput.AcDyn.GND_TRACK = (float)g04_eom_track_deg_f8;
	// Euler Yaw Attitude = True Hdg,,,East from True North,deg,float,4
	PAOutput.AcDyn.HDG_TRUE = (float)g04d_eom_psi_deg_f8;
 	// Indicated Airspeed - LH,,,~,Kn,float,4
	PAOutput.AcDyn.IAS_L = (float)l_adrl2_b206;
 	// Indicated Airspeed - RH,,,~,Kn,float,4
	PAOutput.AcDyn.IAS_R = (float)l_adrr2_b206;
 	// Indicated AOA - LH,,,Nose up,~,float,4
	PAOutput.AcDyn.IND_AOA = (float)l_adrl2_b222;
 	// Slip-Skid Indication LH,,,Same as sideslip,~,float,4
	PAOutput.AcDyn.IND_SLIPSKID_L = (float)qerslip[0][0];
	// Mach Number,,,~,~,float,4
	PAOutput.AcDyn.MACH = (float)g04_eom_mach_f8;
 	// Magnetic Variation = True Hdg - Magnetic Hdg,,,East,deg,float,4
	PAOutput.AcDyn.MAGVAR = (float)sihdgmag[0];
 	// All-up Mass,,,~,kg,float,4
	PAOutput.AcDyn.MASS_AC = (float)(g04_wght_wt_f8/2.2046226);
 	// Euler Pitch Attitude,,,Nose up,deg,float,4
	PAOutput.AcDyn.PITCH = (float)g04_eom_theta_deg_f8;
 	// Body-axis pitch rate,,,Nose up,deg/s,float,4
	PAOutput.AcDyn.PITCH_RATE = (float)(g04_eom_thetadot_f8 * 57.2957795);
 	// Vertical Speed,,,Up,ft/min,float,4
	PAOutput.AcDyn.ROC = (float)l04_qtgo_hdot_f8;
 	// Euler Roll Attitude,,,Right wing down,deg,float,4
	PAOutput.AcDyn.ROLL = (float)g04_eom_phi_deg_f8;
 	// Body-axis roll rate,,,Right wing down,deg/s,float,4
	PAOutput.AcDyn.ROLL_RATE = (float)(g04_eom_phidot_f8 * 57.2957795);
 	// Free Stream Sideslip Angle,,,Nose left,deg,float,4
	PAOutput.AcDyn.SIDESLIP = (float)g04_eom_beta_f8;
	//  Weight on Wheels - Any,,,True on contact,~,boolean,1
    PAOutput.AcDyn.WOW_ANY = (__int8)g04_grnd_wow_l1;
    // Weight on Wheels - Left Main,,,True on contact,~,boolean,1
    PAOutput.AcDyn.WOW_L = (__int8)(agf_lma||agf_lmb);
    // Weight on Wheels - Nose,,,True on contact,~,boolean,1
    PAOutput.AcDyn.WOW_N = (__int8)(agf_nsa||agf_nsb);
    // Weight on Wheels - Right Main,,,True on contact,~,boolean,1
    PAOutput.AcDyn.WOW_R = (__int8)(agf_rma||agf_rmb);
    // Body-axis yaw rate,,,Nose right,deg/s,float,4
    PAOutput.AcDyn.YAW_RATE = (float)(g04_eom_psidot_f8 * 57.2957795);

    //*************Autopilot SECTION *****************

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
    // Pad out to 32 bit boundary
    PAOutput.Autopilot.i1_pad = 256;
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

    //*************Brake SECTION *****************

	// Pilot LH brake pedal position,,,Forward,deg,float,4
	PAOutput.Brake.BRAKE_PED_POSITION_PILOT_L = (float)l04_sysi_brk_pos_f8[0];
	// Pilot RH brake pedal position,,,Forward,deg,float,4
	PAOutput.Brake.BRAKE_PED_POSITION_PILOT_R = (float)l04_sysi_brk_pos_f8[1];
	// Antiskid Switch,,,0=off 1=level 1 2=level 2 3=level 3 4=max 5=RTO,~,int_s,1
	PAOutput.Brake.BRAKE_ANTISKID_SW = (__int8)g32b_auto_state_i4;
    // PARKING BRAKE Engaged,,,True = engaged,~,boolean,1
    PAOutput.Brake.PARKING_BRAKE_ENGAGED = (__int8)i32b_parking_brake_l1;
    // Pad out to 32 bit boundary
	PAOutput.Brake.i2_pad = (__int16)256;

    //*************Electrics SECTION *****************

	// BATT Switch,"0=OFF, 1=ON",,~,~,int,4
	PAOutput.Elec.BATT_SW = (__int8)idaebat;
    // Elec Bus Transfer Switch,,,True = open,,boolean,1
    PAOutput.Elec.BUS_XFER_SW = (__int8)idaebt;
    // Cabin Util / Galley Power Switch,,,True = On,~,boolean,1
    PAOutput.Elec.CABIN_UTIL_PWR_SW = (__int8)idaegal;
    // Elec Gen1 Off Annunciation,,737: GEN 1 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_1_SRC_OFF,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_GEN_1_OFF = (__int8)al$aegoff;
    // Elec Gen2 Off Annunciation,,737: GEN 2 SOURCE OFF Annunciator. 737 should be renamed to CWA_ELEC_GEN_2_SRC_OFF,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_GEN_2_OFF = (__int8)al$aegoff2;
    // BAT DISCHARGE Annunciation,,,True = On,~,boolean,1
    PAOutput.Elec.CWA_BATT_DISCHARGE = (__int8)al$aebatdis;
    // GEN BUS 1 OFF Annunciation,,,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_GEN_BUS_1_OFF = (__int8)al$aegoff;
    // GEN BUS 2 OFF Annunciation,,,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_GEN_BUS_2_OFF = (__int8)al$aegoff2;
    // GND POWER AVAILABLE Light,,,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_GND_PWR_AVAIL = (__int8)al$aexpavail;
    // Elec Gen1 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_XFER_GEN_1_OFF = (__int8)al$aetboff;
    // Elec Gen2 Xfr Bus Off Annunciation,,,True = bright,~,boolean,1
    PAOutput.Elec.CWA_ELEC_XFER_GEN_2_OFF = (__int8)al$aetboff2;
    // Generator Drive 1 Disconnect Swtich,,,True = On,~,boolean,1
    PAOutput.Elec.GEN_1_DRIVE_DISC_SW = (__int8)idaedisc;
    // Generator Drive 2 Disconnect Swtich,,,True = On,~,boolean,1
    PAOutput.Elec.GEN_2_DRIVE_DISC_SW = (__int8)idaedisc2;
    // DC Display Selector,"737: 128=TEST, 1=STBY PWR, 2=BAT BUS, 4=BAT, 8=AUX BAT, 16=TR1, 32=TR2, 64=TR3",,~,~,int,4
    PAOutput.Elec.ELEC_AC_DISP_SEL = (__int32)lpwracsw10;
    // AC Display Selector,"737: 64=TEST, 1=STBY PWR, 2=GRD PWR, 4=GEN 1, 8=APU GEN, 16=GEN 2, 32=INV",,~,~,int,4
    PAOutput.Elec.ELEC_DC_DISP_SEL = (__int32)lpwrdcsw10;

    // APU GEN Switch 1,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeug)PAOutput.Elec.GEN_1_APU_SW = (__int8)1;
    else if(idaeugoff)PAOutput.Elec.GEN_1_APU_SW = (__int8)-1;
    else PAOutput.Elec.GEN_1_APU_SW = (__int8)0;

    // Elec Apu2 Control Switch,,,"0=open, 1=on -1=off",~,boolean,1
    if(idaeug2)PAOutput.Elec.GEN_2_APU_SW = (__int8)1;
    else if(idaeugoff2)PAOutput.Elec.GEN_2_APU_SW = (__int8)-1;
    else PAOutput.Elec.GEN_2_APU_SW = (__int8)0;

    // Elec Eng Gen1 Control Switch,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeg)PAOutput.Elec.GEN_1_SW = (__int8)1;
    else if(idaegoff)PAOutput.Elec.GEN_1_SW = (__int8)-1;
    else PAOutput.Elec.GEN_1_SW = (__int8)0;

    // Elec Eng GEN Switch 2,"0=open, 1=on -1=off",,~,~,int,1
    if(idaeg2)PAOutput.Elec.GEN_2_SW = (__int8)1;
    else if(idaegoff2)PAOutput.Elec.GEN_2_SW = (__int8)-1;
    else PAOutput.Elec.GEN_2_SW = (__int8)0;

    // AC Load Indication,,,~,A,int,4
    PAOutput.Elec.LOAD_AC_IND = (__int32)aej_p5_13_acamp;
    // DC Load Indication,,,,A,int,4
    PAOutput.Elec.LOAD_DC_IND = (__int32)aej_p5_13_dcamp;

    // STBY PWR Switch,"0 = OFF, 1=AUTO, 2=BAT",,~,~,int,1
    if(idaesbauto)PAOutput.Elec.STBY_PWR_SW = (__int8)1;
    else if(idaesbbat)PAOutput.Elec.STBY_PWR_SW = (__int8)2;
    else PAOutput.Elec.STBY_PWR_SW = (__int8)0;

    // Elec Ground Power Control Switch,,,"0=open, 1=on -1=off" ,,~,int,1
    if(idaexp)PAOutput.Elec.GND_PWR_SW = (__int8)1;
    else if(idaexpoff)PAOutput.Elec.GND_PWR_SW = (__int8)-1;
    else PAOutput.Elec.GND_PWR_SW = (__int8)0;

    // IFE / PASS SEAT Power Switch,,,True = On,~,boolean,1
    PAOutput.Elec.PASS_SEAT_PWR_SW = (__int8)idaeife;
    // TR UNIT Annunciation,,,True = On,~,boolean,1
    PAOutput.Elec.CWA_ELEC_TR_UNIT = (__int8)al$aetruflt;
    // ELEC amber lamp on AC/DC Metering Panel,,,True = illuminated,~,boolean,1
    PAOutput.Elec.CWA_ELEC_ELEC = (__int8)al$aeelec;
    // Pad out to 32 bit boundary
    PAOutput.Elec.i4_pad = (__int16)65535;
    // CPS Frequency Indication,,,~,Hz,int,4
    PAOutput.Elec.CPS_FREQ_IND = (__int32)aej_p5_13_acfreq;
    // AC Voltage Indication,,,~,V,float,4
    PAOutput.Elec.VOLTAGE_AC_IND = (__int32)aej_p5_13_acvolt;
    // DC Voltage Indication,,,~,V,float,4
    PAOutput.Elec.VOLTAGE_DC_IND = (__int32)aej_p5_13_dcvolt;

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
