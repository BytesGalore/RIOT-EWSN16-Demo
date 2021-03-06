/*
 * Copyright 2016 Ludwig Knüpfer <ludwig.knuepfer@fu-berlin.de>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @addtogroup  unittests
 * @{
 *
 * @file
 * @brief       Unittests for the ``crc`` module
 *
 * @author      Ludwig Knüpfer <ludwig.knuepfer@fu-berlin.de>
 */
#ifndef TESTS_CHECKSUM_H
#define TESTS_CHECKSUM_H

#include "embUnit.h"
#include "kernel.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   The entry point of this test suite.
 */
void tests_crc(void);

/**
 * @brief   Generates tests for crc/crc16_ccitt.h
 *
 * @return  embUnit tests if successful, NULL if not.
 */
Test *tests_crc_crc16_ccitt_tests(void);

#ifdef __cplusplus
}
#endif

#endif /* TESTS_CHECKSUM_H */
/** @} */
