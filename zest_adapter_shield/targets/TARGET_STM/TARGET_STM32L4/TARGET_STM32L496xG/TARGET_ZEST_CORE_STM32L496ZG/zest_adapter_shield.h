/*
 * Copyright (c) 2020, CATIE
 * SPDX-License-Identifier: Apache-2.0
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef CATIE_SIXTRON_ZESTADAPTERSHIELD_H_
#define CATIE_SIXTRON_ZESTADAPTERSHIELD_H_

#if MBED_CONF_ZEST_ADAPTER_SHIELD_ARDUINO_ON_J3

// Arduino on J3 connector namings
#define A0  PF_6
#define A1  PF_7
#define A2  PF_8
#define A3  PF_9
#define A4  PG_13 // No ADC function (ADC4)
#define A5  PG_14 // No ADC function (ADC5)
#define D0  PA_10
#define D1  PB_6
#define D2  PD_6
#define D3  PB_4
#define D4  PG_15 // No counter function (T0)
#define D5  PC_7
#define D6  PA_8  // No analog compare function (AIN0)
#define D7  PG_6  // No analog compare function (AIN1)
#define D8  PC_6  // No clock output function (CLKO)
#define D9  PA_9
#define D10 PG_12 // No PWM output function (OC1B)
#define D11 PG_11
#define D12 PG_10
#define D13 PG_9
#define D14 PG_13 // No ADC function (ADC4)
#define D15 PG_14 // No ADC function (ADC5)

#else // MBED_CONF_ZEST_ADAPTER_SHIELD_ARDUINO_ON_J3

// Arduino on J5 connector namings
#define A0  PC_2
#define A1  PC_3
#define A2  PC_4
#define A3  PC_5
#define A4  PC_1
#define A5  PC_0
#define D0  PG_8
#define D1  PG_7
#define D2  PH_0
#define D3  PB_5
#define D4  PH_1  // No counter function (T0)
#define D5  PA_0
#define D6  PF_10 // No analog compare function (AIN0)
#define D7  PB_2  // No analog compare function (AIN1)
#define D8  PA_1  // No clock output function (CLKO)
#define D9  PB_7
#define D10 PB_12 // No PWM output function (OC1B)
#define D11 PB_15
#define D12 PB_14
#define D13 PB_13
#define D14 PC_1
#define D15 PC_0

#endif // MBED_CONF_ZEST_ADAPTER_SHIELD_ARDUINO_ON_J3

#endif // CATIE_SIXTRON_ZESTADAPTERSHIELD_H_

