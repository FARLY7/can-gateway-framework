/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.h
**     Project     : ECU_Engine_01_Z4_0
**     Processor   : MPC5748G_324
**     Component   : MPC5748G_324
**     Version     : Component 01.197, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Datasheet   : MPC5748G RM Rev. 6, 10/2017
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-27, 08:55, # CodeGen: 1
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MPC5748G_324
**          CPU                                            : CPU
**     Contents    :
**         SystemInit            - void SystemInit(void);
**         SystemCoreClockUpdate - void SystemCoreClockUpdate(void);
**         SystemSoftwareReset   - void SystemSoftwareReset(void);
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file Cpu.h
** @version 01.00
** @brief
**
*/
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, global macro not referenced
 * There are global macros defined to configure ADC PAL functionalities and another one used as include guard.
 */

#ifndef ADC_PAL_CFG_H
#define ADC_PAL_CFG_H

/* Define which IP instance will be used in current project */
#define ADC_PAL_MPC574xC_G_R

/* Maximum number of HW triggered groups which may be enabled simultaneously. */
/* Note: value is max from all adc_pal configs from all adc_pal components in the project, to fit any config. */
#define ADC_PAL_MAX_NUM_HW_GROUPS_EN    (0u)

/* Total number of configured groups */
/* Note: value is max from all adc_pal configs from all adc_pal components in the project, to fit any config. */
#define ADC_PAL_TOTAL_NUM_GROUPS        (1u)


#endif /* ADC_PAL_CFG_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/
        

                
