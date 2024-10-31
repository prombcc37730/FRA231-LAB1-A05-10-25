/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab1Simulink.h
 *
 * Code generated for Simulink model 'Lab1Simulink'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Oct 31 20:33:32 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Lab1Simulink_h_
#define Lab1Simulink_h_
#ifndef Lab1Simulink_COMMON_INCLUDES_
#define Lab1Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#endif                                 /* Lab1Simulink_COMMON_INCLUDES_ */

#include "Lab1Simulink_types.h"
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

/* Block signals (default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Chart' */
  uint16_T AnalogtoDigitalConverter;   /* '<S4>/Analog to Digital Converter' */
} B_Lab1Simulink_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S4>/Analog to Digital Converter' */
  uint32_T is_c3_Lab1Simulink;         /* '<Root>/Chart' */
  uint8_T is_active_c3_Lab1Simulink;   /* '<Root>/Chart' */
} DW_Lab1Simulink_T;

/* Real-time Model Data Structure */
struct tag_RTM_Lab1Simulink_T {
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
extern B_Lab1Simulink_T Lab1Simulink_B;

/* Block states (default storage) */
extern DW_Lab1Simulink_T Lab1Simulink_DW;

/* Model entry point functions */
extern void Lab1Simulink_initialize(void);
extern void Lab1Simulink_step(void);
extern void Lab1Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Lab1Simulink_T *const Lab1Simulink_M;
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
 * '<Root>' : 'Lab1Simulink'
 * '<S1>'   : 'Lab1Simulink/Analog to Digital Converter'
 * '<S2>'   : 'Lab1Simulink/Chart'
 * '<S3>'   : 'Lab1Simulink/Analog to Digital Converter/ECSoC'
 * '<S4>'   : 'Lab1Simulink/Analog to Digital Converter/ECSoC/ECSimCodegen'
 */
#endif                                 /* Lab1Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
