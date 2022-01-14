#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node * next;
}*tail;

void show(struct Node * head)
{
	struct Node * ptr = head;
	do{
		printf("Elemant: %d\n",ptr->data);
		ptr = ptr->next;
	}while(ptr!=head);
}
struct Node * insertAtFirsT(struct Node * head , int data){
	struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
	ptr -> data = data;
	struct Node *p = head->next;
	while(p->next != head){
		p = p->next;
	}
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	return head;
}

struct Node * insertBeg(struct Node * head)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter data\n");
	scanf("%d",&ptr->data);
	ptr->next = 0;
	if(tail ==0){
		tail = ptr;
		tail->next= ptr;

	}
	
}
struct Node * insertend(struct Node * head)
{
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter data\n");
	scanf("%d",&ptr->data);
	ptr->next = 0;
	if(tail ==0){
		tail = ptr;
		tail->next= ptr;

	}
	else{
		ptr->next = tail->next;
		tail->next = ptr;
		tail = ptr;
	}
	return head;
	
}

void insertPos(){
	struct Node * newnode,*temp;
	int pos, i=0,l;
	printf("Enter Position\n");
	scanf("%d",&pos);
	l = getlenght();
	if (pos<0 || pos >l)
	{
		printf("Invalid Position\n");
	}
	else if(pos ==1){
		insertBeg();
	}
	else{
		newnode = (struct Node *)malloc(sizeof(struct Node));
		printf("Entr data");
		scanf("%d",&newnode->data);
		newnode ->next =0;
		

	}

}

void dltfromBeg(){
	struct Node * temp;
	temp = tail->next;
	if(tail ==0){
		
	}
}

int main()
{
	struct Node * N1;
	struct Node * N2;
	struct Node * N3;
	struct Node * N4;
	struct Node * N5;

	N1 = (struct Node *)malloc(sizeof(struct Node));
	N2 = (struct Node *)malloc(sizeof(struct Node));
	N3 = (struct Node *)malloc(sizeof(struct Node));
	N4 = (struct Node *)malloc(sizeof(struct Node));
	N5 = (struct Node *)malloc(sizeof(struct Node));

	N1->data = 12;
	N1 -> next = N2;

	N2->data = 45;
	N2 -> next = N3;

	N3->data = 85;
	N3 -> next = N4;

	N4->data = 63;
	N4 -> next = N5;

	N5->data = 74;
	N5 -> next = N1;
	N5 -> next = tail;
	printf("Befor Insertion\n");
	show(N1);

	// N1 = insertAtFirsT(N1,23);
	// insertBeg(N1);
	// insertend(N1);
	insertPos();


	printf("Befor Insertion\n");
	show(N1);
	return 0;

}