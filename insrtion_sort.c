#include<stdio.h>
#include<stdlib.h>
void pritnarr(int * A, int n){
    for(int i =0 ; i<n ; i++){
        printf("%d\n",A[i]);
    }
}
void inserstionSort(int *A,int n){
    //Loop for passes
    int key ,j;
    for(int i =0; i <= n-1; i++){
        //Loop for each pass
    key = A[i];
    j = i-1;
    while(j>=0 && A[j] > key){
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = key;

    }
}



int main()
{
    int A[] = {12,54,65,7,23,9};
    int n =6;
    
    inserstionSort(A,n);
    pritnarr(A,n);
    return 0;
}