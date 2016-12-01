// Copyright 2016 Chase Willden and The CondorLang Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef PROP_H_
#define PROP_H_

#include <string.h>
#include "../mem/allocate.h"

typedef struct Prop Prop;

struct Prop{
	char* key;
	char* value;
	int id;	
	Prop* next;
};

extern int propIdSpot;

void InitProp(Prop* prop);
void SetPropKeyValue(Prop* prop, char* key, char* val);

#endif // PROP_H_