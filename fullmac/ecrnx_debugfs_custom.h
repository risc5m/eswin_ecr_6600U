#ifndef __ECRNX_DEBUGFS_CUSTOM_H_
#define __ECRNX_DEBUGFS_CUSTOM_H_

#include <linux/init.h>
#include <linux/module.h>
#include <linux/seq_file.h>

#include "lmac_types.h"
#include "ecrnx_debugfs_func.h"
#include "ecrnx_compat.h"


int ecrnx_debugfs_init(void     *private_data);
void ecrnx_debugfs_exit(void);
void ecrnx_debugfs_sta_in_ap_init(void *private_data);
void ecrnx_debugfs_sta_in_ap_del(u8 sta_idx);


/* Forward declarations */
struct seq_file;

/* Register display helpers */
void seq_reg_display_u32(struct seq_file *seq, u32 addr, u32 *reg, u32 len);
void seq_reg_display_u8(struct seq_file *seq, u32 addr, u8 *reg, u32 len);
void read_reg_display_u32(u32 addr, u32 *reg, u32 len);
void reg_display_u8(u32 addr, u8 *reg, u32 len);

/* Initialization functions */
int ecrnx_debugfs_info_init(void *private_data);
int ecrnx_debugfs_hw_init(void *private_data);
int ecrnx_debugfs_wlan0_init(void *private_data);
int ecrnx_debugfs_ap0_init(void *private_data);
int ecrnx_debugfs_p2p0_init(void *private_data);
void exrnx_debugfs_sruvey_info_tbl_init(void *private_data);

#endif
