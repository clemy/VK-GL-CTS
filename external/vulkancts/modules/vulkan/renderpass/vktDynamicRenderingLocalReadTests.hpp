#ifndef _VKTDYNAMICRENDERINGLOCALREADTESTS_HPP
#define _VKTDYNAMICRENDERINGLOCALREADTESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2023 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief Vulkan Dynamic Rendering Local Read Tests
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuTestCase.hpp"

namespace vkt
{
namespace renderpass
{

tcu::TestCaseGroup *createDynamicRenderingLocalReadTests(tcu::TestContext &testCtx);

} // namespace renderpass
} // namespace vkt

#endif // _VKTDYNAMICRENDERINGLOCALREADTESTS_HPP
