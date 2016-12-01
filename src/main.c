#include "node/node.h"
#include "prop/prop.h"
#include "graph/graph.h"
#include "shell/shell.h"

int main(){

	InitShell();

	Graph graph;
	InitGraph(&graph);

	Node node;
	InitNode(&node);
	AddNodeToGraph(&graph, &node);

	Prop prop;
	InitProp(&prop);
	SetPropToNode(&node, &prop);
	SetPropKeyValue(&prop, "text", "apple");

	Prop prop2;
	InitProp(&prop2);
	SetPropToNode(&node, &prop2);
	SetPropKeyValue(&prop2, "name", "bill");

	PrintNode(FindNodeById(&graph, 1));
}