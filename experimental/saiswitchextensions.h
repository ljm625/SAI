/**
 * Copyright (c) 2018 Microsoft Open Technologies, Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 *    THIS CODE IS PROVIDED ON AN *AS IS* BASIS, WITHOUT WARRANTIES OR
 *    CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 *    LIMITATION ANY IMPLIED WARRANTIES OR CONDITIONS OF TITLE, FITNESS
 *    FOR A PARTICULAR PURPOSE, MERCHANTABILITY OR NON-INFRINGEMENT.
 *
 *    See the Apache Version 2.0 License for specific language governing
 *    permissions and limitations under the License.
 *
 *    Microsoft would like to thank the following companies for their review and
 *    assistance with these files: Intel Corporation, Mellanox Technologies Ltd,
 *    Dell Products, L.P., Facebook, Inc., Marvell International Ltd.
 *
 * @file    saiswitchextensions.h
 *
 * @brief   This module defines switch extensions of the Switch Abstraction Interface (SAI)
 */

#ifndef __SAISWITCHEXTENSIONS_H_
#define __SAISWITCHEXTENSIONS_H_

#include <saitypes.h>

/**
 * @brief SAI switch attribute extensions.
 *
 * @flags
 */
typedef enum _sai_switch_attr_extensions_t
{
    SAI_SWITCH_ATTR_EXTENSIONS_RANGE_START = SAI_SWITCH_ATTR_END,

    /**
     * @brief List of ACL Field list
     *
     * The value is of type sai_s32_list_t where each list member is of type
     * sai_acl_table_attr_t. Only fields in the range SAI_ACL_TABLE_ATTR_FIELD_START
     * and SAI_ACL_TABLE_ATTR_FIELD_END as well any custom SAI_ACL_TABLE_ATTR_FIELD
     * are allowed. All other field types in sai_acl_table_attr_t are ignored.
     *
     * @type sai_s32_list_t
     * @flags CREATE_ONLY
     * @isvlan false
     */
    SAI_SWITCH_ATTR_EXT_ACL_FIELD_LIST = SAI_SWITCH_ATTR_CUSTOM_RANGE_START,

    /**
     * @brief Inject ECC error.
     *
     * When this value is set, ECC error initiate register will be set in HW.
     * As a result, ECC error will be generated. This feature is for testing and debug purpose.
     * If value is 1, 1 bit ECC error is generated and 2 for 2 bits error.
     *
     * @type sai_uint16_t
     * @flags CREATE_AND_SET
     * @isvlan false
     */
    SAI_SWITCH_ATTR_EXT_HW_ECC_ERROR_INITIATE,

    /**
     * @brief ECMP HASH offset.
     *
     * The value is of HASH offset value for ECMP.
     *
     * @type sai_uint8_t
     * @flags CREATE_AND_SET
     * @default 0
     */
    SAI_SWITCH_ATTR_EXT_ECMP_HASH_OFFSET,

    /**
     * @brief ECMP HASH offset.
     *
     * The value is of HASH offset value for LAG.
     *
     * @type sai_uint8_t
     * @flags CREATE_AND_SET
     * @default 0
     */
    SAI_SWITCH_ATTR_EXT_LAG_HASH_OFFSET,

    /**
     * @brief End of attributes
     */
    SAI_SWITCH_ATTR_EXT_END

} sai_switch_attr_extensions_t;

#endif /* __SAISWITCHEXTENSIONS_H_ */
