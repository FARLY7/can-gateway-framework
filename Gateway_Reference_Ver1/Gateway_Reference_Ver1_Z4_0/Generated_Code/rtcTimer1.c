/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : rtcTimer1.c
**     Project     : Gateway_Reference_Ver1_Z4_0
**     Processor   : MPC5748G_176
**     Component   : rtc_c55
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-09, 15:25, # CodeGen: 31
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
** @file rtcTimer1.c
** @version 01.00
*/
/*!
**  @addtogroup rtcTimer1_module rtcTimer1 module documentation
**  @{
*/

/*! MODULE rtcTimer1. */

#include "rtcTimer1.h"

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */
/*! rtcTimer1 State Structure definition */
rtc_state_t rtcTimer1_State;

/*! rtcTimer1 configuration structure */
rtc_init_config_t rtcTimer1_Config0 =
{
    /*! Counter Clock Source is SIRC */
    .clockSelect                =   RTC_CLOCK_SOURCE_SIRC,
    /*! Divide by 32 of the input clock is disabled */
    .divideBy32                 =   false,
    /*! Divide by 512 of the input clock is disabled */
    .divideBy512                =   false,
    /*! Counter continues to run when the chip is in debug */
    .freezeEnable               =   false,
    /*! Non-supervisor mode write accesses are not supported and generate
     * a bus error.
     */
    .nonSupervisorAccessEnable  =   false
};


/*! rtcTimer1 Initial Time and Date */
rtc_timedate_t rtcTimer1_StartTime0 =
{
    /*! Year */
    .year       =   2018U,
    /*! Month */
    .month      =   4U,
    /*! Day */
    .day        =   23U,
    /*! Hour */
    .hour       =   0U,
    /*! Minutes */
    .minutes    =   0U,
    /*! Seconds */
    .seconds    =   0U
};

/*! rtcTimer1 Alarm configuration 0 */
rtc_alarm_config_t rtcTimer1_AlarmConfig0 =
{
    /*! Alarm Date */
    .alarmTime           =
        {
            /*! Year    */
            .year       =  2016U,
            /*! Month   */
            .month      =  1U,
            /*! Day     */
            .day        =  1U,
            /*! Hour    */
            .hour       =  0U,
            /*! Minutes */
            .minutes    =  0U,
            /*! Seconds */
            .seconds    =  0U,
        },
    /*! Alarm repeat interval */
    .repetitionInterval  =       0UL,
    /*! Number of alarm repeats */
    .numberOfRepeats     =       0UL,
    /*! Repeat alarm disabled */
    .repeatForever       =       false,
    /*! Alarm interrupt disabled */
    .alarmIntEnable      =      false,
    /*! Alarm interrupt User Callback */
    .alarmCallback       =     NULL,
    /*! Alarm interrupt User Callback parameters */
    .callbackParams      =     NULL
};

/*! END rtcTimer1. */
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

