#include <stdio.h>
#include "Node.h"

int main(){

	struct Node newnode1 = {
		"name1", 1, NULL
	};

	struct Node * node = firstAdd(newnode1);
	add(node, newnode1);
	add(node, newnode1);
	add(node, newnode1);

	



	return 0;

}