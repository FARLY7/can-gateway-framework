/*
 * ethernet.c
 *
 *  Created on: 20 Feb 2018
 *      Author: B49855
 */

#include "ethernet.h"
#include "config.h"

void ETH_socketServer(void* pvParameters)
{
	//int socket = pvParameters[0];

	//vTaskDelete(NULL);
}

void ETH_sendCommand(uint8_t ecu_id, ecu_cmd cmd)
{
//	uint8_t socket = ecu->interface;
//	uint32_t ret;
//	ret = lwip_write(socket, (void*) cmd, sizeof(cmd));
}



status_t ETH_updateFirmware(uint8_t ecu_id, FIL *fw, bool secureUpdate)
{
	//uint8_t socket = ecu->interface;

	return STATUS_SUCCESS;
}
