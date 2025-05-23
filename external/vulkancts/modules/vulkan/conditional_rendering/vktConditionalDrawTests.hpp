#ifndef _VKTCONDITIONALDRAWTESTS_HPP
#define _VKTCONDITIONALDRAWTESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2018 The Khronos Group Inc.
 * Copyright (c) 2018 Danylo Piliaiev <danylo.piliaiev@gmail.com>
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
 * \brief Test for conditional rendering of vkCmdDraw* functions
 *//*--------------------------------------------------------------------*/

#include "vktTestCase.hpp"

namespace vkt
{
namespace conditional
{

class ConditionalDrawTests : public tcu::TestCaseGroup
{
public:
    ConditionalDrawTests(tcu::TestContext &testCtx);
    ~ConditionalDrawTests(void);
    void init(void);

private:
    ConditionalDrawTests(const ConditionalDrawTests &other);
    ConditionalDrawTests &operator=(const ConditionalDrawTests &other);
};

} // namespace conditional
} // namespace vkt

#endif // _VKTCONDITIONALDRAWTESTS_HPP
