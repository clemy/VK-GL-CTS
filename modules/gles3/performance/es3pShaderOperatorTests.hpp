#ifndef _ES3PSHADEROPERATORTESTS_HPP
#define _ES3PSHADEROPERATORTESTS_HPP
/*-------------------------------------------------------------------------
 * drawElements Quality Program OpenGL ES 3.0 Module
 * -------------------------------------------------
 *
 * Copyright 2014 The Android Open Source Project
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
 * \brief Shader operator performance tests.
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tes3TestCase.hpp"

namespace deqp
{
namespace gles3
{
namespace Performance
{

class ShaderOperatorTests : public TestCaseGroup
{
public:
    ShaderOperatorTests(Context &context);
    ~ShaderOperatorTests(void);

    void init(void);

private:
    ShaderOperatorTests(const ShaderOperatorTests &other);
    ShaderOperatorTests &operator=(const ShaderOperatorTests &other);
};

} // namespace Performance
} // namespace gles3
} // namespace deqp

#endif // _ES3PSHADEROPERATORTESTS_HPP
