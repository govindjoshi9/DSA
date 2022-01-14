#include <stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr,char val){
	if(isFull(ptr)){
		printf("Stack Overflow Cannot pushed %d\n",val);

	}
	else{
		ptr->top++;
		ptr->arr[ptr->top] =val;

	}

}
char Pop(struct stack * ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow Cannot pushed %d\n");
		return -1;
	}
	else{
		char val = ptr->arr[ptr->top];
		ptr->top--;
		return val;

	}

}

int paranthisis(char * exp){
	struct stack * sp;
	sp->size = 100;
	sp->top = -1;
	sp->arr = (char *)malloc(sp->size * sizeof(char));

	for(int i =0; exp[i]!='\0'; i++){
		if(exp[i]== '('){
			push(sp, '(');
		}
		else if(exp[i]==')'){
			if(isEmpty(sp)){
				return 0;
			}
			Pop(sp);
		}
	}
	if(isEmpty(sp)){
		return 1;
	}
	return 0;

}

int main()
{
	char * exp = "8*(9)";
	if(paranthisis(exp)){
		printf("The paranthisis is matching");
	}
	else{
		printf("The paranthisis is not matching");
	}
	return 0;
}