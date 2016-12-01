// Copyright 2016 Chase Willden and The CondorLang Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdbool.h>
#include "../graph/graph.h"

#define TOTAL_SHELL_COMMANDS 1

void (*SHELL_COMMANDS[TOTAL_SHELL_COMMANDS])();

void InitShell();

#endif // SHELL_H_