/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "io/serial.h"
#include "drivers/serial.h"

#define MSP_SET_ESCSERIAL        244    //in message          Sets escserial passthrough
#define MSP_SET_4WAY_IF          245    //in message          Sets 4way interface
// Each MSP port requires state and a receive buffer, revisit this default if someone needs more than 2 MSP ports.
#define MAX_MSP_PORT_COUNT 2

void mspInit(serialConfig_t *serialConfig);

void mspProcess(void);
void sendMspTelemetry(void);
void mspSetTelemetryPort(serialPort_t *mspTelemetryPort);
void mspAllocateSerialPorts(serialConfig_t *serialConfig);
void mspReleasePortIfAllocated(serialPort_t *serialPort);
