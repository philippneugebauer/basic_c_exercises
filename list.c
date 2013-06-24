#include <stdio.h>
#include <stdlib.h>

#include "list.h"

typedef struct lnode *Listptr;
typedef struct lnode {
	int val;
	Listptr next;
} Listnode;

Listptr list = NULL;

void insert(int val) {
	
	Listptr lnodePointer = (Listptr)malloc(sizeof(Listnode));
	
	if(list == NULL){
		lnodePointer->val = val;
		lnodePointer->next = NULL;
		list->next = lnodePointer;
	}else{
		lnodePointer->val = val;
		lnodePointer->next = list->next;
		list->next = lnodePointer;
	}	
}


void deleteFirst(int val) {
	//to be completed
}

	
void printList(void) {
	Listptr p = list;
	while (p != NULL) {
		printf("%d\n",p->val);
		p = p->next;
	}
}




