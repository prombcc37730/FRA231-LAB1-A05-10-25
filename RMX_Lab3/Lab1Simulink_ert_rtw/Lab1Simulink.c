/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab1Simulink.c
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

#include "Lab1Simulink.h"
#include "Lab1Simulink_types.h"
#include "rtwtypes.h"
#include "stm_adc_ll.h"
#include <stddef.h>
#include "Lab1Simulink_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Lab1Simulink_IN_ON             (1U)
#define Lab1Simulink_IN_Off            (2U)
#define Lab1Simulink_IN_initial        (3U)

/* Block signals (default storage) */
B_Lab1Simulink_T Lab1Simulink_B;

/* Block states (default storage) */
DW_Lab1Simulink_T Lab1Simulink_DW;

/* Real-time model */
static RT_MODEL_Lab1Simulink_T Lab1Simulink_M_;
RT_MODEL_Lab1Simulink_T *const Lab1Simulink_M = &Lab1Simulink_M_;

/* Forward declaration for local functions */
static void Lab1Simulink_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj);
static void Lab1Simulink_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S4>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S4>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC1;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 0);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
}

/* Model step function */
void Lab1Simulink_step(void)
{
  /* MATLABSystem: '<S4>/Analog to Digital Converter' */
  regularReadADCNormal(Lab1Simulink_DW.obj.ADCHandle, ADC_TRIGGER_AND_READ,
                       &Lab1Simulink_B.AnalogtoDigitalConverter);

  /* Chart: '<Root>/Chart' */
  if (Lab1Simulink_DW.is_active_c3_Lab1Simulink == 0) {
    Lab1Simulink_DW.is_active_c3_Lab1Simulink = 1U;
    Lab1Simulink_DW.is_c3_Lab1Simulink = Lab1Simulink_IN_initial;
    Lab1Simulink_B.Output = 0.0;
  } else {
    switch (Lab1Simulink_DW.is_c3_Lab1Simulink) {
     case Lab1Simulink_IN_ON:
      if (Lab1Simulink_B.AnalogtoDigitalConverter < 1214) {
        Lab1Simulink_DW.is_c3_Lab1Simulink = Lab1Simulink_IN_Off;
        Lab1Simulink_B.Output = 0.0;
      } else {
        Lab1Simulink_B.Output = 1.0;
      }
      break;

     case Lab1Simulink_IN_Off:
      if (Lab1Simulink_B.AnalogtoDigitalConverter > 3103) {
        Lab1Simulink_DW.is_c3_Lab1Simulink = Lab1Simulink_IN_ON;
        Lab1Simulink_B.Output = 1.0;
      } else {
        Lab1Simulink_B.Output = 0.0;
      }
      break;

     default:
      /* case IN_initial: */
      if (Lab1Simulink_B.AnalogtoDigitalConverter > 3103) {
        Lab1Simulink_DW.is_c3_Lab1Simulink = Lab1Simulink_IN_Off;
        Lab1Simulink_B.Output = 0.0;
      } else if (Lab1Simulink_B.AnalogtoDigitalConverter < 1214) {
        Lab1Simulink_DW.is_c3_Lab1Simulink = Lab1Simulink_IN_ON;
        Lab1Simulink_B.Output = 1.0;
      } else {
        Lab1Simulink_B.Output = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Lab1Simulink_M->Timing.taskTime0 =
    ((time_T)(++Lab1Simulink_M->Timing.clockTick0)) *
    Lab1Simulink_M->Timing.stepSize0;
}

/* Model initialize function */
void Lab1Simulink_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Lab1Simulink_M, -1);
  Lab1Simulink_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Lab1Simulink_M->Sizes.checksums[0] = (2710475822U);
  Lab1Simulink_M->Sizes.checksums[1] = (2048463869U);
  Lab1Simulink_M->Sizes.checksums[2] = (3277091668U);
  Lab1Simulink_M->Sizes.checksums[3] = (2616203341U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    Lab1Simulink_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Lab1Simulink_M->extModeInfo,
      &Lab1Simulink_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Lab1Simulink_M->extModeInfo,
                        Lab1Simulink_M->Sizes.checksums);
    rteiSetTPtr(Lab1Simulink_M->extModeInfo, rtmGetTPtr(Lab1Simulink_M));
  }

  /* Start for MATLABSystem: '<S4>/Analog to Digital Converter' */
  Lab1Simulink_DW.obj.isInitialized = 0;
  Lab1Simulink_DW.obj.matlabCodegenIsDeleted = false;
  Lab1Simulink_SystemCore_setup(&Lab1Simulink_DW.obj);
}

/* Model terminate function */
void Lab1Simulink_terminate(void)
{
  /* Terminate for MATLABSystem: '<S4>/Analog to Digital Converter' */
  if (!Lab1Simulink_DW.obj.matlabCodegenIsDeleted) {
    Lab1Simulink_DW.obj.matlabCodegenIsDeleted = true;
    if ((Lab1Simulink_DW.obj.isInitialized == 1) &&
        Lab1Simulink_DW.obj.isSetupComplete) {
      ADC_Handle_Deinit(Lab1Simulink_DW.obj.ADCHandle, ADC_NORMAL_MODE, 1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S4>/Analog to Digital Converter' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
