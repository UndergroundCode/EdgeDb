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
	char name[256];
	scanf("%s", name);

	printf("Database Location: ");
	char loc[256];
	scanf("%s", loc);

	char dbName[256];
	sprintf(dbName, "%s.db", name);
	sprintf(loc, "%s/%s", loc, dbName);

	char tmp[256];
	char* p;
	size_t len;

	snprintf(tmp, sizeof(tmp), "%s", loc);
	len = strlen(tmp);
	if (tmp[len - 1] == '/') tmp[len - 1] = 0;
	for (p = tmp + 1; *p; p++){
		if (*p == '/'){
			*p = 0;
			mkdir(tmp, S_IRWXU);
			*p = '/';
		}
	}
	mkdir(tmp, S_IRWXU);

	snprintf(tmp, sizeof(tmp), "%s/graph.db", loc);

	// Create graph.db file
	FILE* file = fopen(tmp, "w");
	if (file == NULL) {
		printf("Error creating database file\n");
		exit(1);
	}

	fprintf(file, "Name: %s", name);

	fclose(file);
}