#include<stdio.h>
void display(int arr[], int n)
{
	for (int i= 0; i< n; i++)
	{
		printf("%d\n",arr[i]);
	}
}
int indInsertion(int arr[],int size,int elemant,int capacity,int index){
	if(size>=capacity){
		return -1;

	}
	for (int i = size-1; i >= index; --i)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = elemant;
	return 1;
}
int main()
{
	int arr[100] = {7,8,12,27,88};
	int size = 5, elemant = 45, index = 1;
	display(arr,size);
	indInsertion(arr,size,elemant,100,index);
	size +=1;
	display(arr,size);
	return 0;

}