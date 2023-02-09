#define _CRT_SECURE_NO_WARNINGS 1
#include"fun.h"
#include<stdio.h>
int main()
{
	int n, num;
	scanf_s("%d", &n);
	struct Node* head = NULL;
	while (n--) {
		scanf_s("%d", &num);
		insert(&head, num);
	}
	print_linklist(head);
	delete_linklist(head);
}
