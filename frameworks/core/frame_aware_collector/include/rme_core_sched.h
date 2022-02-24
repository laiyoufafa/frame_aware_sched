/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RME_CORE_SCHED_H
#define RME_CORE_SCHED_H

#include <unistd.h>
#include "rme_log_domain.h"

namespace OHOS {
namespace RME {

class RmeCoreSched {
public:
    RmeCoreSched();
    ~RmeCoreSched();

    bool Init();

    void BeginFlushAnimation();
    void EndFlushAnimation();

    void BeginFlushBuild();
    void EndFlushBuild();

    void BeginFlushLayout();
    void EndFlushLayout();

    void BeginFlushRender();
    void EndFlushRender();

    void BeginFlushRenderFinish();
    void EndFlushRenderFinish();

    void BeginProcessPostFlush();
    void ProcessCommandsStart();
    void AnimateStart();
    void RenderStart();
    void SendCommandsStart();
    
    RmeCoreSched(const RmeCoreSched &) = delete;
    RmeCoreSched &operator=(const RmeCoreSched &) = delete;
private:
    int m_currentPid = -1;
    int m_currentRtg = -1;
    bool isRenderAdd = false;
};
} // namespace RME
} // namespace OHOS
#endif
