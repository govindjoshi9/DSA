#include <stdio.h>
#include<stdlib.h>

struct circularqueue{
	int size;
	int f;
	int r;
	int * arr;
};
int isFull(struct circularqueue *q){
	if((q->r+1)%q->size== q->f){
		return 1;
	}
	return 0;
}
int isEmpty(struct circularqueue *q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}

void enqueue(struct circularqueue *q,int val){
	if(isFull(q)){
		printf("This queue is full");
	}
	else{
		printf("Enqueued Elemant %d\n",val);
		q->r = (q->r+1)%q->size;
		q->arr[q->r] = val;
		
	}
}
int dequeue(struct circularqueue *q){
	int a = -1;
	if(isEmpty(q)){
		printf("This queue is empty");
	}
	else{
		q->f = (q->f+1)%q->size;
		a = q->arr[q->f];
		
	}
	return a;
}

int main(){
	struct circularqueue q;
	q.size  =4;
	q.f =q.r=  0;
	q.arr = (int*)malloc(sizeof(int));
	
	//Enqueue few Elemant
	enqueue(&q, 12);
	enqueue(&q, 15);
	enqueue(&q, 14);
	enqueue(&q, 85);

	printf("Dequeue Elemant %d\n",dequeue(&q));
	printf("Dequeue Elemant %d\n",dequeue(&q));
	
	
	
	enqueue(&q, 74);
	enqueue(&q, 74);
	enqueue(&q, 74);
	if(isEmpty(&q)){
		printf("circularqueue is empty\n");
	}
	if(isFull(&q)){
		printf("circularqueue is Full\n");
	}
	
	return 0;
}