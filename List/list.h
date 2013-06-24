#include <stdlib.h>

typedef struct lhead {
	struct dllnode *list;
} Listhead;

Listhead initList(void);

void insert(Listhead *head, char* string);

void delete(Listhead *head, char* string);

void printList(Listhead *head);

