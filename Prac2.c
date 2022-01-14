#include <stdio.h>
#include <stdlib.h>

struct stack {
	int size;
	int top;
	int *arr;
};
int khali(struct stack * ptr){
	if(ptr->top == -1){
		return 1;
	}
	else
	{
		return 0;
	}

}
int bhara(struct stack * ptr){
	if(ptr->top == ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void puch(struct stack * ptr, int var){
	if(bhara(ptr)){
		printf("Stack Overflow");
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]= var;
	}
}
int poop(struct stack * ptr){
	if(khali(ptr)){
		printf("Underfloe");
		return -1;
	}
	else
	{
		int val = ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
int main()
{
	struct stack * s = (struct stack *)malloc(sizeof(struct stack));

	s->size = 5;
	s->top  =-1;
	s->arr = (int *)malloc(sizeof(int));
	printf("Before : %d\n",khali(s));
	printf("Before : %d\n",bhara(s));
	puch(s,12);
	puch(s,34);
	puch(s,4);
	puch(s,44);
	puch(s,74);
	// puch(s,34);

	printf("poop item : %d\n",poop(s));
	printf("After : %d\n",khali(s));
	printf("After : %d\n",bhara(s));

	return 0;
}
