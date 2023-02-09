#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"fun.h"
struct Node* BuySListNode(int);
void insert(struct Node** head, int num)
{
	struct Node* newnode;
	newnode= BuySListNode(num);//读取新建的结点
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}
	struct Node* tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
}


void print_linklist(struct Node* head)
{
	struct Node* p;
	for(;head!=NULL;head=head->next)
	{
		for (p = head->next;p != NULL;p = p->next)
		{
			if ((head->value) > (p->value))
			{
				int temp;
				temp = (head->value);
				(head->value) = (p->value);
				(p->value) = temp;
			}
		}
		printf("%d ", head->value);
	}
}
void delete_linklist(struct Node* head)
{
	struct Node* p;
	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
struct Node* BuySListNode(int x)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	assert(newnode);
	newnode->value = x;
	newnode->next = NULL;
	return newnode;
}