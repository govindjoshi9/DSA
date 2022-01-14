#include<stdio.h>
#include<stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;
struct Node {
    int data;
    struct Node * next;
};
void show(struct Node * ptr){
    while(ptr != NULL){
        printf("Elmant : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr;
    if(f==NULL){
        printf("Queue is Empty");
    }
    else{
       f = f->next;
       val = ptr->data;
       free(ptr);
    }
    return val;
}


int main()
{
    show(f);
    enqueue(23);
    enqueue(3);
    enqueue(2);
    printf("Dequeueing elemant %d\n",dequeue());
    show(f);
    return 0;
}