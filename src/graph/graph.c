#include "graph.h"

void InitGraph(Graph* graph){
	graph->first = NULL;
}

void AddNodeToGraph(Graph* graph, Node* node){
	if (graph->first == NULL) graph->first = node;
	else{
		Node* curr = graph->first;
		while (curr->next != NULL) curr = curr->next;
		curr->next = node;
	}
}

Node* FindNodeById(Graph* graph, int id){
	Node* curr = graph->first;
	while (curr != NULL) {
		if (curr->id == id) return curr;
		curr = curr->next;
	}
	return NULL;
}

void CreateDatabase(){
	printf("Database Name: ");
	char name[255];
	scanf("%s", name);

	char* dbName = Allocate(sizeof(char) * (strlen(name) * 3));
	dbName[0] = '\0';
	strcat(dbName, name);
	strcat(dbName, ".db");

	printf("%s\n", dbName);

	FILE* file = fopen(dbName, "w");
	if (file == NULL) {
		printf("Error creating database file\n");
		exit(1);
	}

	fprintf(file, "Name: %s", name);

	fclose(file);
	free(dbName);
}