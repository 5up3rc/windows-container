// Copyright (c) 2015 Vijos Dev Team. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <winc.h>

using winc::Container;

int main() {
  Container c;
  c.Spawn(L"cmd");
}
