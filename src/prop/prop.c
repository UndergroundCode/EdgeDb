#include "prop.h"

int propIdSpot = 1;

void InitProp(Prop* prop){
	prop->id = propIdSpot++;
	prop->key = NULL;
	prop->value = NULL;
	prop->next = NULL;
}

void SetPropKeyValue(Prop* prop, char* key, char* val){
	prop->key = (char*) Allocate(sizeof(char) * (strlen(key) + 1));
	prop->value = (char*) Allocate(sizeof(char) * (strlen(val) + 1));
	strcpy(prop->key, key);
	strcpy(prop->value, val);
}