#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void){
	Listhead list = initList();

	insert(&list, "test");
	insert(&list, "telle");
	insert(&list, "tlol");
	insert(&list, "rofl");

	printList(&list);

	delete(&list, "test");
	printList(&list);
	delete(&list, "tlol");
	printList(&list);
	delete(&list, "rofl");

	printList(&list);

}
