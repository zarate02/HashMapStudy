#include <stdio.h>
#include "Node.h"

struct Node * initmap(){
	struct Node * node[10] = { NULL };
	return * node;
}

static struct Node * original[10] = { NULL };

int addMap(int key, struct Node newNode){

	int hash = key % 10;

	if (original[hash] == NULL){
		original[hash] = firstAddList(key, newNode);
	}
	else{
		addList(key, original[hash], newNode);
	}

	return 0;
}

struct Node * getMap(int key){

	struct Node * flagNode = original[key % 10];
	while (flagNode->nextNode != NULL){
		if (flagNode->key == key){
			return flagNode;
		}
		flagNode = flagNode->nextNode;
	}

	if (flagNode->key == key){
		return flagNode;
	}

	return NULL;
}