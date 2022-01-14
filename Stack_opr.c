#include <stdio.h>
#include <stdlib.h>

struct stack{
	int size;
	int top;
	int * arr;
};

int isFull(struct stack * ptr){
	if(ptr->top ==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty(struct stack * ptr){
	if(ptr->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct stack * ptr,int val){
	if(isFull(ptr)){
		printf("Stack Overflow Cannot pushed %d\n",val);

	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] =val;

	}

}
int peak(struct stack* sp,int i){
	int arrayInd = sp->top-i+1;
	if(arrayInd<0){
		printf("Not a valid position");
	}
	else{
		return sp->arr[arrayInd];
	}
}

int Pop(struct stack * ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow Cannot pushed %d\n");
		return -1;
	}
	else{
		int val = ptr->arr[ptr->top];
		ptr->top--;
		return val;

	}

}

int stackTop(struct stack * sp){
	return sp->arr[sp->top];
}
int stackBootom(struct stack * sp){
	return sp->arr[0];
}

int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

	printf("Before Pushing Elemant: %d\n",isFull(sp));
	printf("Before Pushing Elemant: %d\n",isEmpty(sp));

	push(sp,74);
	push(sp,31);
	push(sp,85);
	push(sp,41);
	push(sp,96);
	push(sp,20);
	push(sp,12);
	push(sp,63);
	push(sp,41);
	push(sp,45);//->Pushed 10 value
	// push(sp,36);//Stack Overflow size of the stack is 10
	printf("After Pushing Elemant: %d\n",isFull(sp));
	printf("After Pushing Elemant: %d\n",isEmpty(sp));

	// printf("Poppes %d from the stack\n", Pop(sp));
	// printf("Poppes %d from the stack\n", Pop(sp));

	for(int j=1; j< sp->top +1; j++){
		printf("The value at index %d is %d\n",j,peak(sp,j));
	}
	printf("The top value us %d\n",stackTop(sp));
	printf("The Bottom value us %d\n",stackBootom(sp));

	return 0;
}