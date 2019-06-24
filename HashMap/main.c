#include <stdio.h>
#include "Node.h"

int main(){
	
	struct Node newnode1 = {
		"name1", 1, NULL, NULL
	};

	struct Node newnode2 = {
		"name2", 1, NULL, NULL
	};

	addMap(1, newnode1);
	addMap(11, newnode2);
	
	struct Node * resultMap = getMap(1);
	char str2[20] = {""};
	strcpy(str2, resultMap->name);			
	printf("%s \n", str2);
	
	struct Node * resultMap2 = getMap(11);
	strcpy(str2, resultMap2->name);
	printf("%s \n", str2);

	
	return 0; 

}