#include <stdio.h>
#include "Node.h"

struct Node * firstAddList(int key, struct Node newNode){
	struct Node * firstNode = (struct Node *)malloc(sizeof(struct Node));
	strcpy_s(firstNode->name, sizeof(firstNode->name), newNode.name);
	firstNode->birtyday = newNode.birtyday;
	firstNode->key = key;
	firstNode->nextNode = NULL;
	printf("new nodelist create %d\n", key);
	return firstNode;
}

int addList(int key, struct Node * orginalNode, struct Node newNode){
	/*货 按眉 积己*/
	struct Node * addNode = (struct Node *)malloc(sizeof(struct Node));
	strcpy_s(addNode->name, sizeof(addNode->name), newNode.name);
	addNode->birtyday = newNode.birtyday;
	addNode->key = key;
	addNode->nextNode = NULL;

	/*货 按眉 楷搬*/
	struct Node * flagNode = orginalNode;
	while (flagNode->nextNode != NULL){
		flagNode = flagNode->nextNode;
	}

	printf("new node add %d \n", key);
	flagNode->nextNode = addNode;
	return 0;	
}

int getListSize(struct Node * orginalNode){
	int cnt = 1;
	struct Node * flagNode = orginalNode;
	while (flagNode->nextNode != NULL){
		flagNode = flagNode->nextNode;
		cnt++;
	}

	return cnt;
}