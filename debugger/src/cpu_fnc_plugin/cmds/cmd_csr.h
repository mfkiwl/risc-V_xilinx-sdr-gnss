/*
 *  Copyright 2018 Sergey Khabarov, sergeykhbr@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __DEBUGGER_CMD_CSR_H__
#define __DEBUGGER_CMD_CSR_H__

#include "api_core.h"
#include "coreservices/icommand.h"

namespace debugger {

class CmdCsr : public ICommand  {
public:
    explicit CmdCsr(ITap *tap, ISocInfo *info);

    /** ICommand */
    virtual int isValid(AttributeType *args);
    virtual void exec(AttributeType *args, AttributeType *res);

private:
    void to_string(AttributeType *args, AttributeType *res, AttributeType *out);

private:
};

}  // namespace debugger

#endif  // __DEBUGGER_CMD_CSR_H__