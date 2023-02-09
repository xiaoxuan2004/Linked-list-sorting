#include<stdlib.h>
struct Node {
	struct Node* next;
	int value;
};
void insert(struct Node** head, int num);
void print_linklist(struct Node* head);
void delete_linklist(struct Node* head);