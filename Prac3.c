#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void Show(struct Node * head){
    
    while(head != NULL){
        printf("Elemant: %d\n",head->data);
        head = head->next;
    }
}

int main()
{
    struct Node * h1;
    struct Node * h2;
    struct Node * h3;
    struct Node * h4;
    struct Node * h5;

    h1 = (struct Node *)malloc(sizeof(struct Node ));
    h2 = (struct Node *)malloc(sizeof(struct Node ));
    h3 = (struct Node *)malloc(sizeof(struct Node ));
    h4 = (struct Node *)malloc(sizeof(struct Node ));
    h5 = (struct Node *)malloc(sizeof(struct Node ));

    h1->data = 34;
    h1->next = h2;
    h2->data = 24;
    h2->next = h3;
    h3->data = 12;
    h3->next = h4;
    h4->data = 54;
    h4->next = h5;
    h5->data = 11;
    h5->next = NULL;

    Show(h1);
    return 0;
}