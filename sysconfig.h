/**
 * @file sysconfig.h
 * @brief Configuration definitions for Tasks
 *
 * @remark Copyright 2019 Burrana
 * @remark Read the file COPYING
 *
 * @author Jeff Liu jeff.liu@burrana.aero
 * @date 01 Aug 2019
 * @version 0.1   JL   01/08/2019  First version
 */

#ifndef SYSCONFIG_H_
#define SYSCONFIG_H_

/* Standard includes. */
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>	
#include "stm32h7xx_hal.h"
#include "cmsis_os.h"

#include "utilities.h"


#define ConfigBYTE_LITTLE_ENDIAN		0
#define ConfigBYTE_BIG_ENDIAN			1
#define stm_ConfigBYTE_ORDER            pdFREERTOS_LITTLE_ENDIAN


/* app task parameters*/
#define app_TASK_PRIORITY              ( tskIDLE_PRIORITY + 2  )
#define app_STACK_SIZE				   ( 256 )

/* Emac task parameters*/
#define emac_TASK_PRIORITY              (configMAX_PRIORITIES)
#define emac_STACK_SIZE					( 128 )
#define emac_PHY_ENABLE

/* Debug task parameters*/
extern UART_HandleTypeDef huart2;
#define DEBUG_UART_PORT                huart2
#define debug_TASK_PRIORITY            (tskIDLE_PRIORITY)
#define debug_STACK_SIZE			   ( 1024 )

/* Heartbeat task parameters*/
#define heartbeat_TASK_PRIORITY			(tskIDLE_PRIORITY + 1)
#define heartbeat_STACK_SIZE			( 128 )
/* Hardware Peripheral Defines*/
#define HEARTBEAT_ENABLED
#ifdef HEARTBEAT_ENABLED
#define HEARTBEAT_PORT_BASE    			GPIOB 
#define HEARTBEAT_GPIO_PIN    			GPIO_PIN_14 
#define HEARTBEAT_HIGHACTIVE			1
#endif   /*HEARTBEAT_ENABLED*/

/* Switch interface parameters*/
//#define SWITCH_ENABLED
#define switch_TASK_PRIORITY            (tskIDLE_PRIORITY + 2)
#define switch_STACK_SIZE			   ( 512 )
#ifdef SWITCH_ENABLED
#define SWITCH_AVB_ENABLED
#define SWITCH_PTP_ENABLED
#endif //SWITCH_ENABLED
extern SPI_HandleTypeDef hspi1;
#define SWITCH_SPI_PORT                hspi1

/* TCP command server task parameters.  Telnet server. */  
#define mainCREATE_TCP_CLI_TASKS		1
#define mainTCP_CLI_TASK_PRIORITY		( tskIDLE_PRIORITY + 1 )
#define mainTCP_CLI_STACK_SIZE			( 1024 )
#define mainTCP_CLI_PORT_NUMBER			( 23UL )


/* MQTT Client task parameters.*/  
#define mqttClient_TASK_PRIORITY		( tskIDLE_PRIORITY + 2 )
#define mqttClient_TASK_STACK_SIZE		( 1024 )


/* Default IP address configuration.  Used in case ipconfigUSE_DHCP is set to 0,
or ipconfigUSE_DHCP is set to 1 but a DHCP server cannot be contacted. */
#define configIP_ADDR0					172
#define configIP_ADDR1					16
#define configIP_ADDR2					60
#define configIP_ADDR3					200

/* Default gateway IP address configuration.  Used in case ipconfigUSE_DHCP is
set to 0, or ipconfigUSE_DHCP is set to 1 but a DHCP server cannot be contacted. */
#define configGATEWAY_ADDR0				172
#define configGATEWAY_ADDR1				16
#define configGATEWAY_ADDR2				60
#define configGATEWAY_ADDR3				1

/* Default DNS server configuration.  OpenDNS addresses are 208.67.222.222 and
208.67.220.220.  Used in ipconfigUSE_DHCP is set to 0, or ipconfigUSE_DHCP is set
to 1 but a DHCP server cannot be contacted.*/
#define configDNS_SERVER_ADDR0 			8
#define configDNS_SERVER_ADDR1 			8
#define configDNS_SERVER_ADDR2 			8
#define configDNS_SERVER_ADDR3 			8

/* Default netmask configuration.  Used in case ipconfigUSE_DHCP is set to 0,
or ipconfigUSE_DHCP is set to 1 but a DHCP server cannot be contacted. */
#define configNET_MASK0					255
#define configNET_MASK1					255
#define configNET_MASK2					255
#define configNET_MASK3					0
/*!
  @} End of
*/
#endif /*SYSCONFIG_H_*/
