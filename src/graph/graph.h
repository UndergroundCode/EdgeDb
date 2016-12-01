// Copyright 2016 Chase Willden and The CondorLang Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef GRAPH_H_
#define GRAPH_H_

#include <string.h>
#include "../node/node.h"
#include "../mem/allocate.h"

typedef struct Graph {
	Node* first;
} Graph;

void InitGraph(Graph* graph);
void AddNodeToGraph(Graph* graph, Node* node);
Node* FindNodeById(Graph* graph, int id);

void CreateDatabase();

#endif // GRAPH_H_