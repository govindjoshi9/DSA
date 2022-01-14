#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};

void linkedlistTrversal(struct Node * ptr)
{
	while(ptr != NULL)
	{
	printf("Elemant: %d\n",ptr->data);
	ptr = ptr->next;
	}

}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	//Allocate memory for nodes in the linked list
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));	

	//Linked second and thired node
	head->data = 7;
	head->next = second;

	//Linked second and third node
	second->data = 6;
	second->next = third;
	
	//linked third and fourth
	third->data = 99;
	third->next = NULL;
	
	linkedlistTrversal(head);



	return 0;
}