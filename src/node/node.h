// Copyright 2016 Chase Willden and The CondorLang Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef NODE_H_
#define NODE_H_

#include "../prop/prop.h"
#include <stdio.h>

typedef struct Node Node;

struct Node{
	int id;	
	int totalProps;
	Prop* first;
	Node* next;
};

extern int nodeIdSpot;

void InitNode(Node* node);
void SetPropToNode(Node* node, Prop* prop);

// Debugging
void PrintNode(Node* node);

#endif // NODE_H_