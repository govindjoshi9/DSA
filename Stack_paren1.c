#include <stdio.h>
#include<stdlib.h>
#include <math.h>

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

char stackTop(struct stack * sp){
	return sp->arr[sp->top];
}

int match(char a, char b){
	if(a=='{' && b=='}'){
		return 1;
	}
	if(a=='[' && b==']'){
		return 1;
	}
	if(a=='(' && b==')'){
		return 1;
	}
	return 0;
}

int paranthisisMatch(char * exp){
	struct stack * sp;
	sp->size = 100;
	sp->top = -1;
	sp->arr = (char *)malloc(sp->size * sizeof(char));
	char popped_ch;
	for(int i =0; exp[i]!='\0'; i++){
		if(exp[i]== '(' || exp[i]== '{' || exp[i]== '['){
			push(sp, exp[i]);
		}
		else if(exp[i]==')'){
			if(isEmpty(sp)){
				return 0;
			}
			popped_ch = Pop(sp);
			if(!match(popped_ch,exp[i])){
				return 0;
			}
		}
	}
	if(isEmpty(sp)){
		return 1;
	}
	return 0;

}

int main()
{
	char * exp =  "(8[354{353}])";
	if(paranthisisMatch(exp)){
		printf("The paranthisis is matching");
	}
	else{
		printf("The paranthisis is not matching");
	}
	return 0;
}