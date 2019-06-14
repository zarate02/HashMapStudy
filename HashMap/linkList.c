#include <stdio.h>
#include "Node.h"

struct Node * firstAdd(struct Node newNode){
	struct Node * firstNode = (struct Node *)malloc(sizeof(struct Node));
	strcpy_s(firstNode->name, sizeof(firstNode->name), newNode.name);
	firstNode->birtyday = newNode.birtyday;
	firstNode->nextNode = NULL;
	printf("new nodelist create \n");
	return firstNode;
}

int add(struct Node * orginalNode, struct Node newNode){
	/*�� ��ü ����*/
	struct Node * addNode = (struct Node *)malloc(sizeof(struct Node));
	strcpy_s(addNode->name, sizeof(addNode->name), newNode.name);
	addNode->birtyday = newNode.birtyday;
	addNode->nextNode = NULL;

	/*�� ��ü ����*/
	struct Node * flagNode = orginalNode;
	while (flagNode->nextNode != NULL){
		flagNode = flagNode->nextNode;
	}

	printf("new node add \n");
	flagNode->nextNode = addNode;
	return 0;	
}

int getSize(struct Node * orginalNode){
	int cnt = 0;
	struct Node * flagNode = orginalNode;
	while (flagNode->nextNode != NULL){
		flagNode = flagNode->nextNode;
		cnt++;
	}
}