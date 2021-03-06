/*
    SPC5 HAL - Copyright (C) 2013 STMicroelectronics

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * SPC563Mxx drivers configuration.
 * The following settings override the default settings present in
 * the various device driver implementation headers.
 * Note that the settings for each driver only have effect if the whole
 * driver is enabled in halconf.h.
 *
 * IRQ priorities:
 * 1...15       Lowest...Highest.
 */

#define SPC564Axx_MCUCONF

/*
 * HAL driver system settings.
 */
#define SPC5_NO_INIT                        FALSE
#define SPC5_CLK_BYPASS                     FALSE
#define SPC5_ALLOW_OVERCLOCK                FALSE
#define SPC5_CLK_PREDIV_VALUE               8
#define SPC5_CLK_MFD_VALUE                  60
#define SPC5_CLK_RFD                        SPC5_RFD_DIV2
#define SPC5_FLASH_BIUCR                    (BIUCR_BANK1_TOO |              \
                                             BIUCR_MASTER4_PREFETCH |       \
                                             BIUCR_MASTER0_PREFETCH |       \
                                             BIUCR_DPFEN |                  \
                                             BIUCR_IPFEN |                  \
                                             BIUCR_PFLIM_ON_MISS |          \
                                             BIUCR_BFEN)

/*
 * ADC driver settings.
 */
#define SPC5_ADC_USE_ADC0_Q0                FALSE
#define SPC5_ADC_USE_ADC0_Q1                FALSE
#define SPC5_ADC_USE_ADC0_Q2                FALSE
#define SPC5_ADC_USE_ADC1_Q3                FALSE
#define SPC5_ADC_USE_ADC1_Q4                FALSE
#define SPC5_ADC_USE_ADC1_Q5                FALSE
#define SPC5_ADC_CR_CLK_PS                  ADC_CR_CLK_PS(5)

/*
 * SERIAL driver system settings.
 */
#define SPC5_USE_ESCIA                      TRUE
#define SPC5_USE_ESCIB                      TRUE
#define SPC5_USE_ESCIC                      TRUE
#define SPC5_ESCIA_PRIORITY                 8
#define SPC5_ESCIB_PRIORITY                 8
#define SPC5_ESCIC_PRIORITY                 8
