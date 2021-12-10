/*
 *  Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *  Not a Contribution, Apache license notifications and license are retained
 *  for attribution purposes only.
 *
 *  Copyright (C) 2012 The Android Open Source Project
 *
 *  SPDX-License-Identifier: Apache-2.0
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H
#define BTM_DEF_LOCAL_NAME   "Realme 2 Pro"
#define BLUETOOTH_QTI_SW  TRUE
// Disables read remote device feature
#define MAX_ACL_CONNECTIONS   16
#define MAX_L2CAP_CHANNELS    16
#define BLE_VND_INCLUDED   TRUE
// skips conn update at conn completion
#define BT_CLEAN_TURN_ON_DISABLED 1

/* Increasing SEPs to 12 from 6 to support SHO/MCast i.e. two streams per codec */
#define AVDT_NUM_SEPS 12
#endif
