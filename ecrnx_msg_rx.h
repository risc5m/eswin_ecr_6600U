/**
 ****************************************************************************************
 *
 * @file ecrnx_msg_rx.h
 *
 * @brief RX function declarations
 *
 * Copyright (C) ESWIN 2015-2020
 *
 ****************************************************************************************
 */

#ifndef _ECRNX_MSG_RX_H_
#define _ECRNX_MSG_RX_H_

#include "lmac_types.h"

/* Forward declarations so the compiler knows these types exist */
struct ecrnx_hw;
struct ipc_e2a_msg;

/* Use a standard unsigned 64-bit type or the specific typedef */
#include <linux/types.h> 

/* The function declarations */
u64 getBootTime(void);
void ecrnx_rx_handle_msg(struct ecrnx_hw *ecrnx_hw, struct ipc_e2a_msg *msg);

#endif /* _ECRNX_MSG_RX_H_ */
