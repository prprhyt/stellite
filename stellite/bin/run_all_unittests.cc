// Copyright 2016 LINE Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "base/callback.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "stellite/test/stellite_test_suite.h"

int main(int argc, char** argv) {
  StelliteTestSuite test_suite(argc, argv);
  return base::LaunchUnitTests(argc, argv,
                               base::Bind(&StelliteTestSuite::Run,
                                          base::Unretained(&test_suite)));
}
