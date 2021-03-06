/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef SERVER_ADMIN_UTIL_H_
#define SERVER_ADMIN_UTIL_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "axutil_utils_defines.h"
#include <time.h>

AXIS2_EXTERN void AXIS2_CALL 
server_admin_util_get_up_time(time_t start_time, 
							  axis2_char_t* buffer);

AXIS2_EXTERN void AXIS2_CALL 
server_admin_util_get_timezone(axis2_char_t* buffer);

#ifdef __cplusplus
}
#endif

#endif /* SERVER_ADMIN_UTIL_H_ */
