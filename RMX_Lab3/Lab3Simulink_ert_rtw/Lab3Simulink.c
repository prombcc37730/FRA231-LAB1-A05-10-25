/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab3Simulink.c
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

#include "Lab3Simulink.h"
#include "rtwtypes.h"
#include "Lab3Simulink_types.h"
#include "Lab3Simulink_private.h"
#include "stm_timer_ll.h"

/* Named constants for MATLAB Function: '<Root>/MATLAB Function11' */
#define Lab3Simulink_CALL_EVENT        (-1)

/* Named constants for MATLAB Function: '<Root>/MATLAB Function19' */
#define Lab3Simulink_CALL_EVENT_l      (-1)

/* Block signals (default storage) */
B_Lab3Simulink_T Lab3Simulink_B;

/* Block states (default storage) */
DW_Lab3Simulink_T Lab3Simulink_DW;

/* Real-time model */
static RT_MODEL_Lab3Simulink_T Lab3Simulink_M_;
RT_MODEL_Lab3Simulink_T *const Lab3Simulink_M = &Lab3Simulink_M_;

/* Forward declaration for local functions */
static void Lab3Simulink_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void Lab3Simulink_SystemCore_setup_e(stm32cube_blocks_EncoderBlock_T *obj);
static void Lab3Simulin_SystemCore_setup_ea(stm32cube_blocks_EncoderBlock_T *obj);

/* System initialize for atomic system: */
void Lab3Simuli_DigitalPortRead_Init(DW_DigitalPortRead_Lab3Simuli_T *localDW)
{
  /* Start for MATLABSystem: '<S33>/Digital Port Read' */
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/* Output and update for atomic system: */
void Lab3Simulink_DigitalPortRead(B_DigitalPortRead_Lab3Simulin_T *localB)
{
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S33>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S33>/Digital Port Read' */
  localB->DigitalPortRead = ((pinReadLoc & 16U) != 0U);
}

/* System initialize for atomic system: */
void Lab3Simu_DigitalPortRead_m_Init(DW_DigitalPortRead_Lab3Simu_g_T *localDW)
{
  /* Start for MATLABSystem: '<S35>/Digital Port Read' */
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/* Output and update for atomic system: */
void Lab3Simulink_DigitalPortRead_g(B_DigitalPortRead_Lab3Simul_g_T *localB)
{
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S35>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S35>/Digital Port Read' */
  localB->DigitalPortRead = ((pinReadLoc & 32U) != 0U);
}

/* System initialize for atomic system: */
void Lab3Simu_DigitalPortRead_k_Init(DW_DigitalPortRead_Lab3Simu_o_T *localDW)
{
  /* Start for MATLABSystem: '<S41>/Digital Port Read' */
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/* Output and update for atomic system: */
void Lab3Simulink_DigitalPortRead_d(B_DigitalPortRead_Lab3Simul_j_T *localB)
{
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S41>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S41>/Digital Port Read' */
  localB->DigitalPortRead = ((pinReadLoc & 8192U) != 0U);
}

/*
 * System initialize for atomic system:
 *    '<Root>/MATLAB Function11'
 *    '<Root>/MATLAB Function13'
 *    '<Root>/MATLAB Function15'
 *    '<Root>/MATLAB Function17'
 *    '<Root>/MATLAB Function18'
 *    '<Root>/MATLAB Function20'
 */
void Lab3Simul_MATLABFunction11_Init(DW_MATLABFunction11_Lab3Simul_T *localDW)
{
  localDW->pev_pos_not_empty = true;
  localDW->sfEvent = Lab3Simulink_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<Root>/MATLAB Function11'
 *    '<Root>/MATLAB Function13'
 *    '<Root>/MATLAB Function15'
 *    '<Root>/MATLAB Function17'
 *    '<Root>/MATLAB Function18'
 *    '<Root>/MATLAB Function20'
 */
void Lab3Simulink_MATLABFunction11(real_T rtu_pos_in, real_T *rty_velocity,
  DW_MATLABFunction11_Lab3Simul_T *localDW)
{
  localDW->sfEvent = Lab3Simulink_CALL_EVENT;
  *rty_velocity = (rtu_pos_in - localDW->pev_pos) / 0.01;
  localDW->pev_pos = rtu_pos_in;
}

/*
 * System initialize for atomic system:
 *    '<Root>/MATLAB Function19'
 *    '<Root>/MATLAB Function2'
 *    '<Root>/MATLAB Function21'
 */
void Lab3Simul_MATLABFunction19_Init(DW_MATLABFunction19_Lab3Simul_T *localDW)
{
  localDW->count_not_empty = true;
  localDW->n_not_empty = true;
  localDW->sfEvent = Lab3Simulink_CALL_EVENT_l;
}

/*
 * Output and update for atomic system:
 *    '<Root>/MATLAB Function19'
 *    '<Root>/MATLAB Function2'
 *    '<Root>/MATLAB Function21'
 */
void Lab3Simulink_MATLABFunction19(real_T rtu_count_in, boolean_T rtu_home,
  real_T *rty_count_out, DW_MATLABFunction19_Lab3Simul_T *localDW)
{
  real_T delta;
  localDW->sfEvent = Lab3Simulink_CALL_EVENT_l;
  if (rtu_home) {
    localDW->temp_count = rtu_count_in;
    localDW->temp_count_not_empty = true;
  }

  if (!localDW->temp_count_not_empty) {
    localDW->temp_count = 0.0;
    localDW->temp_count_not_empty = true;
  }

  delta = rtu_count_in - localDW->n;
  if (delta <= -24576.0) {
    localDW->count += 49152.0;
  } else if (delta >= 24576.0) {
    localDW->count -= 49152.0;
  }

  localDW->n = rtu_count_in;
  *rty_count_out = (localDW->count + rtu_count_in) - localDW->temp_count;
}

static void Lab3Simulink_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder1' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void Lab3Simulink_SystemCore_setup_e(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM4;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder2' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void Lab3Simulin_SystemCore_setup_ea(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder4' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM8;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder4' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder4' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder4' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void Lab3Simulink_step(void)
{
  uint32_T timerCounts;

  /* MATLABSystem: '<Root>/Encoder1' */
  timerCounts = getTimerCounterValueForG4(Lab3Simulink_DW.obj_l.TimerHandle,
    false, NULL);
  Lab3Simulink_DigitalPortRead_d(&Lab3Simulink_B.DigitalPortRead_dq);

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  MATLABSystem: '<Root>/Encoder1'
   *  RelationalOperator: '<S1>/FixPt Relational Operator'
   *  RelationalOperator: '<S25>/Compare'
   *  UnitDelay: '<S1>/Delay Input1'
   *
   * Block description for '<S1>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_MATLABFunction19((real_T)timerCounts, ((int32_T)
    Lab3Simulink_B.DigitalPortRead_dq.DigitalPortRead > (int32_T)
    Lab3Simulink_DW.DelayInput1_DSTATE), &Lab3Simulink_B.count_out_o,
    &Lab3Simulink_DW.sf_MATLABFunction2);

  /* Gain: '<Root>/Gain7' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Product: '<Root>/Divide7'
   */
  Lab3Simulink_B.QEIx1position = Lab3Simulink_B.count_out_o / 2048.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function17' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.QEIx1position,
    &Lab3Simulink_B.velocity_i, &Lab3Simulink_DW.sf_MATLABFunction17);

  /* MATLABSystem: '<S31>/Digital Port Read' */
  timerCounts = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S31>/Digital Port Read' */
  Lab3Simulink_B.DigitalPortRead = ((timerCounts & 32U) != 0U);

  /* MATLABSystem: '<S29>/Digital Port Read' */
  timerCounts = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S29>/Digital Port Read' */
  Lab3Simulink_B.DigitalPortRead_k = ((timerCounts & 16U) != 0U);

  /* MATLAB Function: '<Root>/MATLAB Function8' */
  if (!Lab3Simulink_DW.prevA_not_empty_p) {
    Lab3Simulink_DW.prevA_p = Lab3Simulink_B.DigitalPortRead_k;
    Lab3Simulink_DW.prevA_not_empty_p = true;
  }

  if ((!Lab3Simulink_DW.prevA_p) && Lab3Simulink_B.DigitalPortRead_k) {
    if (Lab3Simulink_B.DigitalPortRead) {
      Lab3Simulink_DW.prevcount_g++;
    } else {
      Lab3Simulink_DW.prevcount_g--;
    }
  }

  Lab3Simulink_DW.prevA_p = Lab3Simulink_B.DigitalPortRead_k;
  Lab3Simulink_B.count_j = Lab3Simulink_DW.prevcount_g;

  /* End of MATLAB Function: '<Root>/MATLAB Function8' */

  /* Gain: '<Root>/Gain4' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Product: '<Root>/Divide4'
   */
  Lab3Simulink_B.Pollingx1position = Lab3Simulink_B.count_j / 2048.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function11' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.Pollingx1position,
    &Lab3Simulink_B.velocity_ok, &Lab3Simulink_DW.sf_MATLABFunction11);
  Lab3Simulink_DigitalPortRead(&Lab3Simulink_B.DigitalPortRead_j);
  Lab3Simulink_DigitalPortRead_g(&Lab3Simulink_B.DigitalPortRead_g);

  /* MATLAB Function: '<Root>/MATLAB Function9' */
  if (!Lab3Simulink_DW.prevA_not_empty) {
    Lab3Simulink_DW.prevA = Lab3Simulink_B.DigitalPortRead_j.DigitalPortRead;
    Lab3Simulink_DW.prevA_not_empty = true;
  }

  if (Lab3Simulink_DW.prevA != Lab3Simulink_B.DigitalPortRead_j.DigitalPortRead)
  {
    if (Lab3Simulink_B.DigitalPortRead_j.DigitalPortRead) {
      if (Lab3Simulink_B.DigitalPortRead_g.DigitalPortRead) {
        Lab3Simulink_DW.prevcount++;
      } else {
        Lab3Simulink_DW.prevcount--;
      }
    } else if (!Lab3Simulink_B.DigitalPortRead_g.DigitalPortRead) {
      Lab3Simulink_DW.prevcount++;
    } else {
      Lab3Simulink_DW.prevcount--;
    }
  }

  Lab3Simulink_DW.prevA = Lab3Simulink_B.DigitalPortRead_j.DigitalPortRead;
  Lab3Simulink_B.count = Lab3Simulink_DW.prevcount;

  /* End of MATLAB Function: '<Root>/MATLAB Function9' */

  /* Gain: '<Root>/Gain5' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Product: '<Root>/Divide5'
   */
  Lab3Simulink_B.Pollingx2position = Lab3Simulink_B.count / 4096.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function13' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.Pollingx2position,
    &Lab3Simulink_B.velocity_e, &Lab3Simulink_DW.sf_MATLABFunction13);
  Lab3Simulink_DigitalPortRead(&Lab3Simulink_B.DigitalPortRead_jh);
  Lab3Simulink_DigitalPortRead_g(&Lab3Simulink_B.DigitalPortRead_p);

  /* MATLAB Function: '<Root>/MATLAB Function10' */
  if (!Lab3Simulink_DW.prevA_not_empty_l) {
    Lab3Simulink_DW.prevA_h = Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead;
    Lab3Simulink_DW.prevA_not_empty_l = true;
    Lab3Simulink_DW.prevB = Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead;
  }

  if ((!Lab3Simulink_DW.prevA_h) &&
      Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead) {
    if (!Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead) {
      Lab3Simulink_DW.prevcount_l++;
    } else {
      Lab3Simulink_DW.prevcount_l--;
    }
  } else if (Lab3Simulink_DW.prevA_h &&
             (!Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead)) {
    if (Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead) {
      Lab3Simulink_DW.prevcount_l++;
    } else {
      Lab3Simulink_DW.prevcount_l--;
    }
  } else if ((!Lab3Simulink_DW.prevB) &&
             Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead) {
    if (Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead) {
      Lab3Simulink_DW.prevcount_l++;
    } else {
      Lab3Simulink_DW.prevcount_l--;
    }
  } else if (Lab3Simulink_DW.prevB &&
             (!Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead)) {
    if (!Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead) {
      Lab3Simulink_DW.prevcount_l++;
    } else {
      Lab3Simulink_DW.prevcount_l--;
    }
  }

  Lab3Simulink_DW.prevA_h = Lab3Simulink_B.DigitalPortRead_jh.DigitalPortRead;
  Lab3Simulink_DW.prevB = Lab3Simulink_B.DigitalPortRead_p.DigitalPortRead;
  Lab3Simulink_B.count_l = -Lab3Simulink_DW.prevcount_l;

  /* End of MATLAB Function: '<Root>/MATLAB Function10' */

  /* Gain: '<Root>/Gain6' incorporates:
   *  Constant: '<Root>/Constant7'
   *  Product: '<Root>/Divide6'
   */
  Lab3Simulink_B.Pollingx4position = Lab3Simulink_B.count_l / 8192.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function15' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.Pollingx4position,
    &Lab3Simulink_B.velocity_g, &Lab3Simulink_DW.sf_MATLABFunction15);

  /* MATLABSystem: '<Root>/Encoder2' */
  timerCounts = getTimerCounterValueForG4(Lab3Simulink_DW.obj_n.TimerHandle,
    false, NULL);
  Lab3Simulink_DigitalPortRead_d(&Lab3Simulink_B.DigitalPortRead_n);

  /* MATLAB Function: '<Root>/MATLAB Function19' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  MATLABSystem: '<Root>/Encoder2'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S2>/FixPt Relational Operator'
   *  UnitDelay: '<S2>/Delay Input1'
   *
   * Block description for '<S2>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_MATLABFunction19((real_T)timerCounts, ((int32_T)
    Lab3Simulink_B.DigitalPortRead_n.DigitalPortRead > (int32_T)
    Lab3Simulink_DW.DelayInput1_DSTATE_l), &Lab3Simulink_B.count_out_h,
    &Lab3Simulink_DW.sf_MATLABFunction19);

  /* Gain: '<Root>/Gain8' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Product: '<Root>/Divide8'
   */
  Lab3Simulink_B.QEIx2position = Lab3Simulink_B.count_out_h / 4096.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function18' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.QEIx2position,
    &Lab3Simulink_B.velocity_o, &Lab3Simulink_DW.sf_MATLABFunction18);

  /* MATLABSystem: '<Root>/Encoder4' */
  timerCounts = getTimerCounterValueForG4(Lab3Simulink_DW.obj.TimerHandle, false,
    NULL);
  Lab3Simulink_DigitalPortRead_d(&Lab3Simulink_B.DigitalPortRead_h);

  /* MATLAB Function: '<Root>/MATLAB Function21' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  MATLABSystem: '<Root>/Encoder4'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S3>/FixPt Relational Operator'
   *  UnitDelay: '<S3>/Delay Input1'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_MATLABFunction19((real_T)timerCounts, ((int32_T)
    Lab3Simulink_B.DigitalPortRead_h.DigitalPortRead > (int32_T)
    Lab3Simulink_DW.DelayInput1_DSTATE_a), &Lab3Simulink_B.count_out,
    &Lab3Simulink_DW.sf_MATLABFunction21);

  /* Gain: '<Root>/Gain9' incorporates:
   *  Constant: '<Root>/Constant9'
   *  Product: '<Root>/Divide9'
   */
  Lab3Simulink_B.QEIx4position = Lab3Simulink_B.count_out / 8192.0 *
    6.2831853071795862;

  /* MATLAB Function: '<Root>/MATLAB Function20' */
  Lab3Simulink_MATLABFunction11(Lab3Simulink_B.QEIx4position,
    &Lab3Simulink_B.velocity, &Lab3Simulink_DW.sf_MATLABFunction20);

  /* Update for UnitDelay: '<S1>/Delay Input1' incorporates:
   *  RelationalOperator: '<S25>/Compare'
   *
   * Block description for '<S1>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_DW.DelayInput1_DSTATE =
    Lab3Simulink_B.DigitalPortRead_dq.DigitalPortRead;

  /* Update for UnitDelay: '<S2>/Delay Input1' incorporates:
   *  RelationalOperator: '<S26>/Compare'
   *
   * Block description for '<S2>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_DW.DelayInput1_DSTATE_l =
    Lab3Simulink_B.DigitalPortRead_n.DigitalPortRead;

  /* Update for UnitDelay: '<S3>/Delay Input1' incorporates:
   *  RelationalOperator: '<S27>/Compare'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Lab3Simulink_DW.DelayInput1_DSTATE_a =
    Lab3Simulink_B.DigitalPortRead_h.DigitalPortRead;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Lab3Simulink_M->Timing.taskTime0 =
    ((time_T)(++Lab3Simulink_M->Timing.clockTick0)) *
    Lab3Simulink_M->Timing.stepSize0;
}

/* Model initialize function */
void Lab3Simulink_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Lab3Simulink_M, -1);
  Lab3Simulink_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Lab3Simulink_M->Sizes.checksums[0] = (1782763089U);
  Lab3Simulink_M->Sizes.checksums[1] = (627765246U);
  Lab3Simulink_M->Sizes.checksums[2] = (2038020602U);
  Lab3Simulink_M->Sizes.checksums[3] = (3234938396U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[25];
    Lab3Simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Lab3Simulink_M->extModeInfo,
      &Lab3Simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Lab3Simulink_M->extModeInfo,
                        Lab3Simulink_M->Sizes.checksums);
    rteiSetTPtr(Lab3Simulink_M->extModeInfo, rtmGetTPtr(Lab3Simulink_M));
  }

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function2' */
  Lab3Simul_MATLABFunction19_Init(&Lab3Simulink_DW.sf_MATLABFunction2);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function17' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction17);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function11' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction11);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function13' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction13);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function15' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction15);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function19' */
  Lab3Simul_MATLABFunction19_Init(&Lab3Simulink_DW.sf_MATLABFunction19);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function18' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction18);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function21' */
  Lab3Simul_MATLABFunction19_Init(&Lab3Simulink_DW.sf_MATLABFunction21);

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function20' */
  Lab3Simul_MATLABFunction11_Init(&Lab3Simulink_DW.sf_MATLABFunction20);

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  Lab3Simulink_DW.obj_l.isInitialized = 0;
  Lab3Simulink_DW.obj_l.matlabCodegenIsDeleted = false;
  Lab3Simulink_SystemCore_setup(&Lab3Simulink_DW.obj_l);
  Lab3Simu_DigitalPortRead_k_Init(&Lab3Simulink_DW.DigitalPortRead_dq);
  Lab3Simuli_DigitalPortRead_Init(&Lab3Simulink_DW.DigitalPortRead_j);
  Lab3Simu_DigitalPortRead_m_Init(&Lab3Simulink_DW.DigitalPortRead_g);
  Lab3Simuli_DigitalPortRead_Init(&Lab3Simulink_DW.DigitalPortRead_jh);
  Lab3Simu_DigitalPortRead_m_Init(&Lab3Simulink_DW.DigitalPortRead_p);

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  Lab3Simulink_DW.obj_n.isInitialized = 0;
  Lab3Simulink_DW.obj_n.matlabCodegenIsDeleted = false;
  Lab3Simulink_SystemCore_setup_e(&Lab3Simulink_DW.obj_n);
  Lab3Simu_DigitalPortRead_k_Init(&Lab3Simulink_DW.DigitalPortRead_n);

  /* Start for MATLABSystem: '<Root>/Encoder4' */
  Lab3Simulink_DW.obj.isInitialized = 0;
  Lab3Simulink_DW.obj.matlabCodegenIsDeleted = false;
  Lab3Simulin_SystemCore_setup_ea(&Lab3Simulink_DW.obj);
  Lab3Simu_DigitalPortRead_k_Init(&Lab3Simulink_DW.DigitalPortRead_h);
}

/* Model terminate function */
void Lab3Simulink_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder1' */
  if (!Lab3Simulink_DW.obj_l.matlabCodegenIsDeleted) {
    Lab3Simulink_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((Lab3Simulink_DW.obj_l.isInitialized == 1) &&
        Lab3Simulink_DW.obj_l.isSetupComplete) {
      disableCounter(Lab3Simulink_DW.obj_l.TimerHandle);
      disableTimerInterrupts(Lab3Simulink_DW.obj_l.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Lab3Simulink_DW.obj_l.TimerHandle, ChannelInfo);
      disableTimerChannel2(Lab3Simulink_DW.obj_l.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder1' */
  /* Terminate for MATLABSystem: '<Root>/Encoder2' */
  if (!Lab3Simulink_DW.obj_n.matlabCodegenIsDeleted) {
    Lab3Simulink_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((Lab3Simulink_DW.obj_n.isInitialized == 1) &&
        Lab3Simulink_DW.obj_n.isSetupComplete) {
      disableCounter(Lab3Simulink_DW.obj_n.TimerHandle);
      disableTimerInterrupts(Lab3Simulink_DW.obj_n.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Lab3Simulink_DW.obj_n.TimerHandle, ChannelInfo);
      disableTimerChannel2(Lab3Simulink_DW.obj_n.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder2' */
  /* Terminate for MATLABSystem: '<Root>/Encoder4' */
  if (!Lab3Simulink_DW.obj.matlabCodegenIsDeleted) {
    Lab3Simulink_DW.obj.matlabCodegenIsDeleted = true;
    if ((Lab3Simulink_DW.obj.isInitialized == 1) &&
        Lab3Simulink_DW.obj.isSetupComplete) {
      disableCounter(Lab3Simulink_DW.obj.TimerHandle);
      disableTimerInterrupts(Lab3Simulink_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Lab3Simulink_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(Lab3Simulink_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder4' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
