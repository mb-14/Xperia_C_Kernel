#ifndef AUDIO_CUSTOM_H
#define AUDIO_CUSTOM_H

/* define Gain For Normal */
/* Normal volume: TON, SPK, MIC, FMR, SPH, SID, MED */
/*
#define GAIN_NOR_TON_VOL        8     // reserved
#define GAIN_NOR_KEY_VOL       43    // TTY_CTM_Mic
#define GAIN_NOR_MIC_VOL       26    // IN_CALL BuiltIn Mic gain
// GAIN_NOR_FMR_VOL is used as idle mode record volume
#define GAIN_NOR_FMR_VOL        0     // Normal BuiltIn Mic gain
#define GAIN_NOR_SPH_VOL       20     // IN_CALL EARPIECE Volume
#define GAIN_NOR_SID_VOL      100  // IN_CALL EARPICE sidetone
#define GAIN_NOR_MED_VOL       25   // reserved
*/

#define GAIN_NOR_TON_VOL        8     // reserved
#define GAIN_NOR_KEY_VOL       43    // TTY_CTM_Mic
#define GAIN_NOR_MIC_VOL       26    // IN_CALL BuiltIn Mic gain
// GAIN_NOR_FMR_VOL is used as idle mode record volume
#define GAIN_NOR_FMR_VOL        0     // Normal BuiltIn Mic gain
#define GAIN_NOR_SPH_VOL       20     // IN_CALL EARPIECE Volume
#define GAIN_NOR_SID_VOL      100  // IN_CALL EARPICE sidetone
#define GAIN_NOR_MED_VOL       25   // reserved

/* define Gain For Headset */
/* Headset volume: TON, SPK, MIC, FMR, SPH, SID, MED */
/*
#define GAIN_HED_TON_VOL        8     // reserved
#define GAIN_HED_KEY_VOL       24    // reserved
#define GAIN_HED_MIC_VOL       20    // IN_CALL BuiltIn headset gain
#define GAIN_HED_FMR_VOL       24     // reserved
#define GAIN_HED_SPH_VOL       12     // IN_CALL Headset volume
#define GAIN_HED_SID_VOL      100  // IN_CALL Headset sidetone
#define GAIN_HED_MED_VOL       12   // Idle, headset Audio Buf Gain setting
*/

#define GAIN_HED_TON_VOL        8     // reserved
#define GAIN_HED_KEY_VOL       24    // reserved
#define GAIN_HED_MIC_VOL       20    // IN_CALL BuiltIn headset gain
#define GAIN_HED_FMR_VOL       24     // reserved
#define GAIN_HED_SPH_VOL       12     // IN_CALL Headset volume
#define GAIN_HED_SID_VOL      100  // IN_CALL Headset sidetone
#define GAIN_HED_MED_VOL       12   // Idle, headset Audio Buf Gain setting

/* define Gain For Handfree */
/* Handfree volume: TON, SPK, MIC, FMR, SPH, SID, MED */
/* GAIN_HND_TON_VOL is used as class-D Amp gain*/
/*
#define GAIN_HND_TON_VOL        8     // use for ringtone volume
#define GAIN_HND_KEY_VOL       24    // reserved
#define GAIN_HND_MIC_VOL       20    // IN_CALL LoudSpeak Mic Gain = BuiltIn Gain
#define GAIN_HND_FMR_VOL       24     // reserved
#define GAIN_HND_SPH_VOL       12     // IN_CALL LoudSpeak
#define GAIN_HND_SID_VOL      100  // IN_CALL LoudSpeak sidetone
#define GAIN_HND_MED_VOL       12   // Idle, loudSPK Audio Buf Gain setting
*/

#define GAIN_HND_TON_VOL        8     // use for ringtone volume
#define GAIN_HND_KEY_VOL       24    // reserved
#define GAIN_HND_MIC_VOL       20    // IN_CALL LoudSpeak Mic Gain = BuiltIn Gain
#define GAIN_HND_FMR_VOL       24     // reserved
#define GAIN_HND_SPH_VOL       12     // IN_CALL LoudSpeak
#define GAIN_HND_SID_VOL      100  // IN_CALL LoudSpeak sidetone
#define GAIN_HND_MED_VOL       12   // Idle, loudSPK Audio Buf Gain setting
    /* 0: Input FIR coefficients for 2G/3G Normal mode */
    /* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Input FIR coefficients for 2G/3G Handfree mode */
    /* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Input FIR coefficients for VoIP Normal mode */
    /* 5: Input FIR coefficients for VoIP Handfree mode */
//<2013/8/2-genesis, [5860/75] Modify acoustic parameter(wayne:Improve Headset speech quality 20130801)
//<2013/7/9-26710-jessicatseng, [5860] Modify acoustic parameter
//<2013/7/5-26630-jessicatseng, [5860] Modify acoustic parameter
//<2013/6/18-26039-jessicatseng, [5860] Modify acoustic parameter
//<2013/5/30-25525-jessicatseng, [5860] Modify acoustic parameter
//<2013/5/20-25117-jessicatseng, [5860] Modify acoustic parameter
//<2013/4/30-24478-alberthsiao, Update acoustic parameters
//<2013/4/25-24290-jessicatseng, [5860] Modify acoustic parameter
//<2013/4/24-24216-jessicatseng, [5860] Modify acoustic parameter
//<2013/4/19-24023-jessicatseng, [5860] Modify acoustic parameter
//<2013/4/17-23959-jessicatseng, [Pelican] Modify Acoustic parameter
//<2013/4/11-23734-jessicatseng, [Pelican] Modify acoustic parameter
#define SPEECH_INPUT_FIR_COEFF \
      -55,  1052,  -336,   855,  -448,\
     -201,   118, -1345,  1188,  -842,\
      131, -2546,  2890, -3089,  -188,\
     2222, -2821, -1326, -2805,  6309,\
   -17384, 32767, 32767,-17384,  6309,\
    -2805, -1326, -2821,  2222,  -188,\
    -3089,  2890, -2546,   131,  -842,\
     1188, -1345,   118,  -201,  -448,\
      855,  -336,  1052,   -55,     0,\
                                      \
     3297, -5817,  4893, -4237,  2319,\
    -1424, -2087,  4576, -8859,  8629,\
   -10855, 14876,-16571, 17856,-17174,\
    18803,-18733, 22878,-19302, 22090,\
   -29506, 32767, 32767,-29506, 22090,\
   -19302, 22878,-18733, 18803,-17174,\
    17856,-16571, 14876,-10855,  8629,\
    -8859,  4576, -2087, -1424,  2319,\
    -4237,  4893, -5817,  3297,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0
    /* 0: Output FIR coefficients for 2G/3G Normal mode */
    /* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Output FIR coefficients for 2G/3G Handfree mode */
    /* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Output FIR coefficients for VoIP Normal mode */
    /* 5: Output FIR coefficients for VoIP Handfree mode */
#define SPEECH_OUTPUT_FIR_COEFF \
      134,   568,    20,   422,    -2,\
      -27,    43,  -754,   443,  -548,\
      535, -2238,  -881,   -56, -1488,\
     1197, -2206, -3956, -3840, 12172,\
   -19934, 32767, 32767,-19934, 12172,\
    -3840, -3956, -2206,  1197, -1488,\
      -56,  -881, -2238,   535,  -548,\
      443,  -754,    43,   -27,    -2,\
      422,    20,   568,   134,     0,\
                                      \
       21,    74,    72,  -435,   135,\
      -73,  1017,    41, -1167,   380,\
      455,   260, -4056,  2356,  6428,\
     -787,-11117,  7340, 10440, -8438,\
   -31425, 32767, 32767,-31425, -8438,\
    10440,  7340,-11117,  -787,  6428,\
     2356, -4056,   260,   455,   380,\
    -1167,    41,  1017,   -73,   135,\
     -435,    72,    74,    21,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0
#define   DG_DL_Speech    0xe3d
#define   DG_Microphone    0x1400
#define   FM_Record_Vol    6     /* 0 is smallest. each step increase 1dB.
                            Be careful of distortion when increase too much.
                            Generally, it's not suggested to tune this parameter */
/*
* The Bluetooth DAI Hardware COnfiguration Parameter
*/
#define   DEFAULT_BLUETOOTH_SYNC_TYPE    0
#define   DEFAULT_BLUETOOTH_SYNC_LENGTH    1
    /* 0: Input FIR coefficients for 2G/3G Normal mode */
    /* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Input FIR coefficients for 2G/3G Handfree mode */
    /* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Input FIR coefficients for VoIP Normal mode */
    /* 5: Input FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Input_FIR_Coeff \
     -486,   -97,  -221,  -289,   -97,  -399,  -316,  -236,  -139,  -242,\
     -125,  -369,  -194,  -296,  -202,  -407,    60,  -120,   152,    91,\
     -524,   174,  -802,   154,  -372,   445,   463,   106,  -649,  -517,\
     -365,   850,  1644,  -588,   163,  -197,  2699, -2906,   846, -4166,\
     5995, -4174,  5469,-15633, 32767, 32767,-15633,  5469, -4174,  5995,\
    -4166,   846, -2906,  2699,  -197,   163,  -588,  1644,   850,  -365,\
     -517,  -649,   106,   463,   445,  -372,   154,  -802,   174,  -524,\
       91,   152,  -120,    60,  -407,  -202,  -296,  -194,  -369,  -125,\
     -242,  -139,  -236,  -316,  -399,   -97,  -289,  -221,   -97,  -486,\
                                       \
      -40,  -727,  -239,  -212,  -804,  -262,   232,   263,  -442,  -572,\
       62,  -212,  -704,  -705,   234,   455,  -373,  -710,  -551,   109,\
    -1178,  -310,  1533,  -660,  -994,   362,  -303,  -121, -1077,  1534,\
     1867, -1707, -1104,  1407,  2665, -1927,  1735,  -213,  -719,    52,\
     4996,  4134,  -815,-22925, 32767, 32767,-22925,  -815,  4134,  4996,\
       52,  -719,  -213,  1735, -1927,  2665,  1407, -1104, -1707,  1867,\
     1534, -1077,  -121,  -303,   362,  -994,  -660,  1533,  -310, -1178,\
      109,  -551,  -710,  -373,   455,   234,  -705,  -704,  -212,    62,\
     -572,  -442,   263,   232,  -262,  -804,  -212,  -239,  -727,   -40,\
                                       \
    -1452,  -726,  -687, -1114,  -383, -1114,  -859,  -645,  -692,  -591,\
     -453,  -594,  -425,  -166,  -263,  -478,   157,  -503,   -10,   124,\
     -601,  1041,  -513,   830,  1060,   624,  2106,  1071,  1181,  2393,\
     1518,  2293,  3028,  1998,  1475,   600,  1548,   -33,  4878,  -487,\
     8128, -1518,  8252, -8643, 32767, 32767, -8643,  8252, -1518,  8128,\
     -487,  4878,   -33,  1548,   600,  1475,  1998,  3028,  2293,  1518,\
     2393,  1181,  1071,  2106,   624,  1060,   830,  -513,  1041,  -601,\
      124,   -10,  -503,   157,  -478,  -263,  -166,  -425,  -594,  -453,\
     -591,  -692,  -645,  -859, -1114,  -383, -1114,  -687,  -726, -1452,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0
    /* 0: Output FIR coefficients for 2G/3G Normal mode */
    /* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Output FIR coefficients for 2G/3G Handfree mode */
    /* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Output FIR coefficients for VoIP Normal mode */
    /* 5: Output FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Output_FIR_Coeff \
       68,     0,   195,   203,  -120,    91,   102,    57,    78,    27,\
       67,   200,   212,  -198,   321,     2,  -120,   181,   -37,    44,\
     -190,   -61,   -18,  -448,  -429,   223,  -552,    41,  -173,  -218,\
      247,   667,  -420,  2678,  1207, -7761,   682, -1448,   621,  6003,\
      393, -2564,  1275,-24381, 32767, 32767,-24381,  1275, -2564,   393,\
     6003,   621, -1448,   682, -7761,  1207,  2678,  -420,   667,   247,\
     -218,  -173,    41,  -552,   223,  -429,  -448,   -18,   -61,  -190,\
       44,   -37,   181,  -120,     2,   321,  -198,   212,   200,    67,\
       27,    78,    57,   102,    91,  -120,   203,   195,     0,    68,\
                                       \
      158,  -133,   -35,   -32,   -89,    38,   103,   265,   -89,   -84,\
      -40,  -244,   -74,   -19,   420,   412,  -114,  -100,  -502,  -307,\
     -410,   137,  1142,   421,    13, -1017, -1341,  -401,  -159,  2448,\
     2518,  1353,  -628, -4828, -2444,  -298,  3827,  6579,  3077, -4682,\
    -6165, -5357, -9952,-12658, 32767, 32767,-12658, -9952, -5357, -6165,\
    -4682,  3077,  6579,  3827,  -298, -2444, -4828,  -628,  1353,  2518,\
     2448,  -159,  -401, -1341, -1017,    13,   421,  1142,   137,  -410,\
     -307,  -502,  -100,  -114,   412,   420,   -19,   -74,  -244,   -40,\
      -84,   -89,   265,   103,    38,   -89,   -32,   -35,  -133,   158,\
                                       \
      -13,   -29,  -166,  -114,  -242,  -187,  -194,  -199,   -75,  -108,\
       96,    17,   262,   118,   361,   241,   377,   330,   319,   319,\
      128,   174,  -298,   -34,  -820,  -297, -1106,  -506,  -916,  -482,\
     -290,  -123,   693,   208,  1798,   158,  2581,  -595,  2999, -2245,\
     3544, -5194,  5858,-12587, 32767, 32767,-12587,  5858, -5194,  3544,\
    -2245,  2999,  -595,  2581,   158,  1798,   208,   693,  -123,  -290,\
     -482,  -916,  -506, -1106,  -297,  -820,   -34,  -298,   174,   128,\
      319,   319,   330,   377,   241,   361,   118,   262,    17,    96,\
     -108,   -75,  -199,  -194,  -187,  -242,  -114,  -166,   -29,   -13,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0
#endif
//>2013/4/11-23734-jessicatseng
//>2013/4/17-23959-jessicatseng
//>2013/4/19-24023-jessicatseng
//>2013/4/24-24216-jessicatseng
//>2013/4/25-24290-jessicatseng
//>2013/4/30-24478-alberthsiao
//>2013/5/20-25117-jessicatseng
//>2013/5/30-25525-jessicatseng
//>2013/6/18-26039-jessicatseng
//>2013/7/5-26630-jessicatseng
//>2013/7/9-26710-jessicatseng
//>2013/8/2-genesis, [5860/75] Modify acoustic parameter(wayne:Improve Headset speech quality 20130801)
