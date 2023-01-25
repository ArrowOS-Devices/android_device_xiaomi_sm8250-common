#pragma once

/*
 * Copyright (C) 2021 The Android Open Source Project
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
 */

#include <memory>
#include <ostream>
#include <vector>

#include "IFilesystem.h"

namespace aidl {
namespace google {
namespace hardware {
namespace power {
namespace impl {
namespace pixel {

class RealFilesystem : public IFilesystem {
  public:
    virtual ~RealFilesystem() {}
    bool ListDirectory(const std::string &path, std::vector<std::string> *result) const override;
    bool ReadFileStream(const std::string &path,
                        std::unique_ptr<std::istream> *result) const override;
    bool ResetFileStream(const std::unique_ptr<std::istream> &fileStream) const override;
};

}  // namespace pixel
}  // namespace impl
}  // namespace power
}  // namespace hardware
}  // namespace google
}  // namespace aidl
