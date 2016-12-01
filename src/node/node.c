#include "node.h"

int nodeIdSpot = 1;

void InitNode(Node* node){
	node->id = nodeIdSpot++;
	node->first = NULL;
	node->totalProps = 0;
}

void SetPropToNode(Node* node, Prop* prop){
	if (node->first == NULL) node->first = prop;
	else{
		Prop* curr = node->first;
		while (curr->next != NULL) curr = curr->next;
		curr->next = prop;
	}
	node->totalProps++;
}

void PrintNode(Node* node){
	printf("Node: id: %d\n", node->id);
	Prop* curr = node->first;
	while (curr != NULL){
		printf("  key: %s, value: %s\n", curr->key, curr->value);
		curr = curr->next;
	}
}