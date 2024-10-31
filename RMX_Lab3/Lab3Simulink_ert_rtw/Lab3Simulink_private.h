/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab3Simulink_private.h
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

#ifndef Lab3Simulink_private_h_
#define Lab3Simulink_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Lab3Simulink.h"
#include "Lab3Simulink_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern void Lab3Simuli_DigitalPortRead_Init(DW_DigitalPortRead_Lab3Simuli_T
  *localDW);
extern void Lab3Simulink_DigitalPortRead(B_DigitalPortRead_Lab3Simulin_T *localB);
extern void Lab3Simu_DigitalPortRead_m_Init(DW_DigitalPortRead_Lab3Simu_g_T
  *localDW);
extern void Lab3Simulink_DigitalPortRead_g(B_DigitalPortRead_Lab3Simul_g_T
  *localB);
extern void Lab3Simu_DigitalPortRead_k_Init(DW_DigitalPortRead_Lab3Simu_o_T
  *localDW);
extern void Lab3Simulink_DigitalPortRead_d(B_DigitalPortRead_Lab3Simul_j_T
  *localB);
extern void Lab3Simul_MATLABFunction11_Init(DW_MATLABFunction11_Lab3Simul_T
  *localDW);
extern void Lab3Simulink_MATLABFunction11(real_T rtu_pos_in, real_T
  *rty_velocity, DW_MATLABFunction11_Lab3Simul_T *localDW);
extern void Lab3Simul_MATLABFunction19_Init(DW_MATLABFunction19_Lab3Simul_T
  *localDW);
extern void Lab3Simulink_MATLABFunction19(real_T rtu_count_in, boolean_T
  rtu_home, real_T *rty_count_out, DW_MATLABFunction19_Lab3Simul_T *localDW);

#endif                                 /* Lab3Simulink_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
