/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H723

#define BOARD_NAME        GIGFPVH723
#define MANUFACTURER_ID   GIG

#define USE_ACC
#define USE_GYRO

#define USE_ACC_SPI_ICM42688P // For ICM42688P variation
#define USE_GYRO_SPI_ICM42688P // For ICM42688P variation

#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25Q128FV
#define USE_FLASH_W25N01G

// I/O
#define LED0_PIN             PB4
#define LED_STRIP_PIN        PC10

// ACC/GYRO SPI 1
#define USE_SPI_GYRO
#define GYRO_1_EXTI_PIN      PA3
#define GYRO_1_CS_PIN        PA4
#define GYRO_1_SPI_INSTANCE  SPI1

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

// FLASH SPI 2
#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define FLASH_CS_PIN         PB12
#define FLASH_SPI_INSTANCE   SPI2

// ADC
#define USE_ADC
#define ADC_VBAT_PIN         PC2
#define ADC_CURR_PIN         PC3
#define ADC_INSTANCE         ADC1

// UART PORTS
#define UART1_TX_PIN         PB10
#define UART1_RX_PIN         PB11

#define UART2_TX_PIN         PE8
#define UART2_RX_PIN         PE7

#define UART3_TX_PIN         PA0
#define UART3_RX_PIN         PA1

#define UART4_RX_PIN         PB5

// TIMERS
#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB6 , 1,  1) \
    TIMER_PIN_MAP( 1, PB7 , 1,  1) \
    TIMER_PIN_MAP( 2, PB8 , 1,  0) \
    TIMER_PIN_MAP( 3, PB9 , 1,  0) \
    TIMER_PIN_MAP( 4, PC10, 1,  0)

// MOTORS PINOUT
#define MOTOR1_PIN           PB6
#define MOTOR2_PIN           PB7
#define MOTOR3_PIN           PB8
#define MOTOR4_PIN           PB9

#define ADC1_DMA_OPT         1


// DEFAULTS
#define DEFAULT_BLACKBOX_DEVICE         BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE     100
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
