/**
******************************************************************************
*
* @file fw.h
*
* @brief ecrnx usb firmware download definitions
*
* Copyright (C) ESWIN 2015-2020
*
******************************************************************************
*/

#ifndef _FW_H_
#define _FW_H_
unsigned char eswin_crc8(unsigned char *buf, unsigned short length);
char eswin_fw_ack_check(u8 *buff);
char eswin_fw_file_download(struct eswin *tr);
bool eswin_fw_file_chech(struct eswin *tr); // Checked that "chech" is whats in fw.c

#endif
