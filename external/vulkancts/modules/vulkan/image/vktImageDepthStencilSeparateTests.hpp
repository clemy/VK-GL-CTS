#ifndef _VKTIMAGEDEPTHSTENCILSEPARATETESTS_HPP
#define _VKTIMAGEDEPTHSTENCILSEPARATETESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 Valve Corporation.
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
 * \brief Tests for VK_FORMAT_FEATURE_2_DEPTH_STENCIL_SEPARATE_FRAMEBUFFER_ACCESS_BIT_KHR
 *//*--------------------------------------------------------------------*/

#include "tcuTestCase.hpp"

namespace vkt
{
namespace image
{

tcu::TestCaseGroup *createImageDepthStencilSeparateTests(tcu::TestContext &testCtx);

} // namespace image
} // namespace vkt

#endif // _VKTIMAGEDEPTHSTENCILSEPARATETESTS_HPP
