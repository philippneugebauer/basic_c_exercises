#include "list.h"

struct dllnode {
	char* string;
	struct dllnode *next;
	struct dllnode *prev;
};


Listhead initList(void) {
	Listhead head;
	head.list = NULL;
	return head;
}

void insert(
	Listhead *head, char* string) {
	if(head->list == NULL){
		struct dllnode *pointer = (struct dllnode *)malloc(sizeof(struct dllnode));
		head->list = pointer;
		pointer->string = string;
		pointer->next = NULL;
		pointer->prev = NULL;
	}else{	
		struct dllnode *pointer = head->list;
		while(pointer->next != NULL){
			pointer = pointer->next;
		}
		struct dllnode *nextPointer = (struct dllnode *)malloc(sizeof(struct dllnode));
		nextPointer->string = string;
		nextPointer->next = NULL;
		nextPointer->prev = pointer;
		pointer->next = nextPointer;
	}
	
}

void delete(Listhead *head, char* string){
	struct dllnode *pointer = head->list;

	if(!pointer->string == string){
		while(pointer->next != NULL){
			pointer = pointer->next;
			if(pointer->string == string){
				break;
			}
		}
	}

	if(pointer->next == NULL && pointer->string != string){
		printf("%s existiert in der Liste nicht\n", string);
	}else{
		if(pointer != head->list){
			struct dllnode *prevPointer = pointer->prev;
			prevPointer->next = pointer->next;
		}else{
			head->list = pointer->next;
		}

		if(pointer->next != NULL){
			struct dllnode *nextPointer = pointer->next;
			nextPointer->prev = pointer->prev;
		}
	}
}

void printList(Listhead *head){
	printf("Die Liste enthaelt folgende Werte: \n");
	struct dllnode *pointer = head->list;

	while(pointer != NULL){
		printf("%s", pointer->string);
		printf("\n");
		pointer = pointer->next;
	}
}



