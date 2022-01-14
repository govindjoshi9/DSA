#include <stdio.h>
#include<stdlib.h>

struct queue{
	int size;
	int f;
	int r;
	int * arr;
};
int isFull(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
int isEmpty(struct queue *q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
}

void enqueue(struct queue *q,int val){
	if(isFull(q)){
		printf("This queue is full");
	}
	else{
		q->r++;
		q->arr[q->r] = val;
		
	}
}
int dequeue(struct queue *q){
	int a = -1;
	if(isEmpty(q)){
		printf("This queue is empty");
	}
	else{
		q->f++;
		a = q->arr[q->f];
		
	}
	return a;
}

int main(){
	struct queue q;
	q.size  =4;
	q.f =q.r=  -1;
	q.arr = (int*)malloc(sizeof(int));
	
	//Enqueue few Elemant
	enqueue(&q, 12);
	enqueue(&q, 15);
	enqueue(&q, 1);
	enqueue(&q, 74);

	printf("Dequeue Elemant %d\n",dequeue(&q));
	printf("Dequeue Elemant %d\n",dequeue(&q));
	printf("Dequeue Elemant %d\n",dequeue(&q));
	printf("Dequeue Elemant %d\n",dequeue(&q));
	// enqueue(&q, 74);
	if(isEmpty(&q)){
		printf("Queue is empty\n");
	}
	if(isFull(&q)){
		printf("Queue Is full");
	}
	return 0;
}