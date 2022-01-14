#include<stdio.h>
int linerSearch(int arr[], int size, int element){
	for (int i = 0; i < size; ++i)
	{
		if(arr[i]==element){
			return i;
		}

	}
	return -1;
}
int binarySearch(int arr[], int size, int elemant){
	int mid;
	int low =0;
	int high = size-1;

	while(low<high){
		mid = (low +high)/2;
		if (arr[mid]==elemant)
		{
			return mid;
		}
		if(arr[mid]<elemant)
		{
			low = mid +1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int main(){
	// unsorded arry for linner search
	// int arr[] = {1,2,2,3,6,9,5,7,9,45,685,635,6,15,54};
	// int size = sizeof(arr)/sizeof(int);


	int arr[] = {1,2,5,56,64,73,123,225,444,5657};
	int size = sizeof(arr)/sizeof(int);
	int elemant =2;
	int searchIndex = binarySearch(arr, size, elemant);
	printf("The elemant %d was found in index %d\n",elemant,searchIndex);
	 return 0;
}