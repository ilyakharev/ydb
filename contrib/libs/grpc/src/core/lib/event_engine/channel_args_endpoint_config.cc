// Copyright 2021 The gRPC Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <grpc/support/port_platform.h>

#include "src/core/lib/event_engine/channel_args_endpoint_config.h"

#include "y_absl/types/optional.h"

#include "src/core/lib/channel/channel_args.h"

namespace grpc_event_engine {
namespace experimental {

y_absl::optional<int> ChannelArgsEndpointConfig::GetInt(
    y_absl::string_view key) const {
  return args_.GetInt(key);
}

y_absl::optional<y_absl::string_view> ChannelArgsEndpointConfig::GetString(
    y_absl::string_view key) const {
  return args_.GetString(key);
}

void* ChannelArgsEndpointConfig::GetVoidPointer(y_absl::string_view key) const {
  return args_.GetVoidPointer(key);
}

}  // namespace experimental
}  // namespace grpc_event_engine
