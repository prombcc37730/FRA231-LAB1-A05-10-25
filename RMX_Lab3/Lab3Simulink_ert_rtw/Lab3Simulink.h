/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab3Simulink.h
 *
 * Code generated for Simulink model 'Lab3Simulink'.
 *
 * Model version                  : 1.90
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Oct 31 16:13:52 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Lab3Simulink_h_
#define Lab3Simulink_h_
#ifndef Lab3Simulink_COMMON_INCLUDES_
#define Lab3Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "main.h"
#endif                                 /* Lab3Simulink_COMMON_INCLUDES_ */

#include "Lab3Simulink_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S33>/Digital Port Read' */
typedef struct {
  boolean_T DigitalPortRead;           /* '<S33>/Digital Port Read' */
} B_DigitalPortRead_Lab3Simulin_T;

/* Block states (default storage) for system '<S33>/Digital Port Read' */
typedef struct {
  stm32cube_blocks_DigitalPortR_T obj; /* '<S33>/Digital Port Read' */
  boolean_T objisempty;                /* '<S33>/Digital Port Read' */
} DW_DigitalPortRead_Lab3Simuli_T;

/* Block signals for system '<S35>/Digital Port Read' */
typedef struct {
  boolean_T DigitalPortRead;           /* '<S35>/Digital Port Read' */
} B_DigitalPortRead_Lab3Simul_g_T;

/* Block states (default storage) for system '<S35>/Digital Port Read' */
typedef struct {
  stm32cube_blocks_DigitalPortR_T obj; /* '<S35>/Digital Port Read' */
  boolean_T objisempty;                /* '<S35>/Digital Port Read' */
} DW_DigitalPortRead_Lab3Simu_g_T;

/* Block signals for system '<S41>/Digital Port Read' */
typedef struct {
  boolean_T DigitalPortRead;           /* '<S41>/Digital Port Read' */
} B_DigitalPortRead_Lab3Simul_j_T;

/* Block states (default storage) for system '<S41>/Digital Port Read' */
typedef struct {
  stm32cube_blocks_DigitalPortR_T obj; /* '<S41>/Digital Port Read' */
  boolean_T objisempty;                /* '<S41>/Digital Port Read' */
} DW_DigitalPortRead_Lab3Simu_o_T;

/* Block states (default storage) for system '<Root>/MATLAB Function11' */
typedef struct {
  real_T pev_pos;                      /* '<Root>/MATLAB Function11' */
  int32_T sfEvent;                     /* '<Root>/MATLAB Function11' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/MATLAB Function11' */
  boolean_T pev_pos_not_empty;         /* '<Root>/MATLAB Function11' */
} DW_MATLABFunction11_Lab3Simul_T;

/* Block states (default storage) for system '<Root>/MATLAB Function19' */
typedef struct {
  real_T count;                        /* '<Root>/MATLAB Function19' */
  real_T n;                            /* '<Root>/MATLAB Function19' */
  real_T temp_count;                   /* '<Root>/MATLAB Function19' */
  int32_T sfEvent;                     /* '<Root>/MATLAB Function19' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/MATLAB Function19' */
  boolean_T count_not_empty;           /* '<Root>/MATLAB Function19' */
  boolean_T n_not_empty;               /* '<Root>/MATLAB Function19' */
  boolean_T temp_count_not_empty;      /* '<Root>/MATLAB Function19' */
} DW_MATLABFunction19_Lab3Simul_T;

/* Block signals (default storage) */
typedef struct {
  real_T QEIx1position;                /* '<Root>/Gain7' */
  real_T Pollingx1position;            /* '<Root>/Gain4' */
  real_T Pollingx2position;            /* '<Root>/Gain5' */
  real_T Pollingx4position;            /* '<Root>/Gain6' */
  real_T QEIx2position;                /* '<Root>/Gain8' */
  real_T QEIx4position;                /* '<Root>/Gain9' */
  real_T count;                        /* '<Root>/MATLAB Function9' */
  real_T count_j;                      /* '<Root>/MATLAB Function8' */
  real_T count_out;                    /* '<Root>/MATLAB Function21' */
  real_T velocity;                     /* '<Root>/MATLAB Function20' */
  real_T count_out_o;                  /* '<Root>/MATLAB Function2' */
  real_T count_out_h;                  /* '<Root>/MATLAB Function19' */
  real_T velocity_o;                   /* '<Root>/MATLAB Function18' */
  real_T velocity_i;                   /* '<Root>/MATLAB Function17' */
  real_T velocity_g;                   /* '<Root>/MATLAB Function15' */
  real_T velocity_e;                   /* '<Root>/MATLAB Function13' */
  real_T velocity_ok;                  /* '<Root>/MATLAB Function11' */
  real_T count_l;                      /* '<Root>/MATLAB Function10' */
  boolean_T DigitalPortRead;           /* '<S31>/Digital Port Read' */
  boolean_T DigitalPortRead_k;         /* '<S29>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simul_j_T DigitalPortRead_h;/* '<S41>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simul_j_T DigitalPortRead_n;/* '<S41>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simul_j_T DigitalPortRead_dq;/* '<S41>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simul_g_T DigitalPortRead_p;/* '<S35>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simulin_T DigitalPortRead_jh;/* '<S33>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simul_g_T DigitalPortRead_g;/* '<S35>/Digital Port Read' */
  B_DigitalPortRead_Lab3Simulin_T DigitalPortRead_j;/* '<S33>/Digital Port Read' */
} B_Lab3Simulink_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_EncoderBlock_T obj; /* '<Root>/Encoder4' */
  stm32cube_blocks_EncoderBlock_T obj_n;/* '<Root>/Encoder2' */
  stm32cube_blocks_EncoderBlock_T obj_l;/* '<Root>/Encoder1' */
  real_T prevcount;                    /* '<Root>/MATLAB Function9' */
  real_T prevcount_g;                  /* '<Root>/MATLAB Function8' */
  real_T prevcount_l;                  /* '<Root>/MATLAB Function10' */
  boolean_T DelayInput1_DSTATE;        /* '<S1>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S2>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S3>/Delay Input1' */
  boolean_T prevA;                     /* '<Root>/MATLAB Function9' */
  boolean_T prevA_not_empty;           /* '<Root>/MATLAB Function9' */
  boolean_T prevA_p;                   /* '<Root>/MATLAB Function8' */
  boolean_T prevA_not_empty_p;         /* '<Root>/MATLAB Function8' */
  boolean_T prevA_h;                   /* '<Root>/MATLAB Function10' */
  boolean_T prevA_not_empty_l;         /* '<Root>/MATLAB Function10' */
  boolean_T prevB;                     /* '<Root>/MATLAB Function10' */
  DW_MATLABFunction19_Lab3Simul_T sf_MATLABFunction21;/* '<Root>/MATLAB Function21' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction20;/* '<Root>/MATLAB Function20' */
  DW_MATLABFunction19_Lab3Simul_T sf_MATLABFunction2;/* '<Root>/MATLAB Function2' */
  DW_MATLABFunction19_Lab3Simul_T sf_MATLABFunction19;/* '<Root>/MATLAB Function19' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction18;/* '<Root>/MATLAB Function18' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction17;/* '<Root>/MATLAB Function17' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction15;/* '<Root>/MATLAB Function15' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction13;/* '<Root>/MATLAB Function13' */
  DW_MATLABFunction11_Lab3Simul_T sf_MATLABFunction11;/* '<Root>/MATLAB Function11' */
  DW_DigitalPortRead_Lab3Simu_o_T DigitalPortRead_h;/* '<S41>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simu_o_T DigitalPortRead_n;/* '<S41>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simu_o_T DigitalPortRead_dq;/* '<S41>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simu_g_T DigitalPortRead_p;/* '<S35>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simuli_T DigitalPortRead_jh;/* '<S33>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simu_g_T DigitalPortRead_g;/* '<S35>/Digital Port Read' */
  DW_DigitalPortRead_Lab3Simuli_T DigitalPortRead_j;/* '<S33>/Digital Port Read' */
} DW_Lab3Simulink_T;

/* Real-time Model Data Structure */
struct tag_RTM_Lab3Simulink_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_Lab3Simulink_T Lab3Simulink_B;

/* Block states (default storage) */
extern DW_Lab3Simulink_T Lab3Simulink_DW;

/* Model entry point functions */
extern void Lab3Simulink_initialize(void);
extern void Lab3Simulink_step(void);
extern void Lab3Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Lab3Simulink_T *const Lab3Simulink_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Lab3Simulink'
 * '<S1>'   : 'Lab3Simulink/Detect Rise Positive'
 * '<S2>'   : 'Lab3Simulink/Detect Rise Positive1'
 * '<S3>'   : 'Lab3Simulink/Detect Rise Positive2'
 * '<S4>'   : 'Lab3Simulink/Digital Port Read'
 * '<S5>'   : 'Lab3Simulink/Digital Port Read1'
 * '<S6>'   : 'Lab3Simulink/Digital Port Read2'
 * '<S7>'   : 'Lab3Simulink/Digital Port Read3'
 * '<S8>'   : 'Lab3Simulink/Digital Port Read4'
 * '<S9>'   : 'Lab3Simulink/Digital Port Read5'
 * '<S10>'  : 'Lab3Simulink/Digital Port Read6'
 * '<S11>'  : 'Lab3Simulink/Digital Port Read7'
 * '<S12>'  : 'Lab3Simulink/Digital Port Read8'
 * '<S13>'  : 'Lab3Simulink/MATLAB Function10'
 * '<S14>'  : 'Lab3Simulink/MATLAB Function11'
 * '<S15>'  : 'Lab3Simulink/MATLAB Function13'
 * '<S16>'  : 'Lab3Simulink/MATLAB Function15'
 * '<S17>'  : 'Lab3Simulink/MATLAB Function17'
 * '<S18>'  : 'Lab3Simulink/MATLAB Function18'
 * '<S19>'  : 'Lab3Simulink/MATLAB Function19'
 * '<S20>'  : 'Lab3Simulink/MATLAB Function2'
 * '<S21>'  : 'Lab3Simulink/MATLAB Function20'
 * '<S22>'  : 'Lab3Simulink/MATLAB Function21'
 * '<S23>'  : 'Lab3Simulink/MATLAB Function8'
 * '<S24>'  : 'Lab3Simulink/MATLAB Function9'
 * '<S25>'  : 'Lab3Simulink/Detect Rise Positive/Positive'
 * '<S26>'  : 'Lab3Simulink/Detect Rise Positive1/Positive'
 * '<S27>'  : 'Lab3Simulink/Detect Rise Positive2/Positive'
 * '<S28>'  : 'Lab3Simulink/Digital Port Read/ECSoC'
 * '<S29>'  : 'Lab3Simulink/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S30>'  : 'Lab3Simulink/Digital Port Read1/ECSoC'
 * '<S31>'  : 'Lab3Simulink/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S32>'  : 'Lab3Simulink/Digital Port Read2/ECSoC'
 * '<S33>'  : 'Lab3Simulink/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S34>'  : 'Lab3Simulink/Digital Port Read3/ECSoC'
 * '<S35>'  : 'Lab3Simulink/Digital Port Read3/ECSoC/ECSimCodegen'
 * '<S36>'  : 'Lab3Simulink/Digital Port Read4/ECSoC'
 * '<S37>'  : 'Lab3Simulink/Digital Port Read4/ECSoC/ECSimCodegen'
 * '<S38>'  : 'Lab3Simulink/Digital Port Read5/ECSoC'
 * '<S39>'  : 'Lab3Simulink/Digital Port Read5/ECSoC/ECSimCodegen'
 * '<S40>'  : 'Lab3Simulink/Digital Port Read6/ECSoC'
 * '<S41>'  : 'Lab3Simulink/Digital Port Read6/ECSoC/ECSimCodegen'
 * '<S42>'  : 'Lab3Simulink/Digital Port Read7/ECSoC'
 * '<S43>'  : 'Lab3Simulink/Digital Port Read7/ECSoC/ECSimCodegen'
 * '<S44>'  : 'Lab3Simulink/Digital Port Read8/ECSoC'
 * '<S45>'  : 'Lab3Simulink/Digital Port Read8/ECSoC/ECSimCodegen'
 */
#endif                                 /* Lab3Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
