#include<stdio.h>

void pritnarr(int * A, int n){
    for(int i =0 ; i<n ; i++){
        printf("%d\n",A[i]);
    }
    
}

void selectionSort(int * A, int n){
    int indexOfMin, temp;
    printf("Running selction sort....\n");
    for(int i = 0; i <n-1; i++)
    {
        indexOfMin = i;
        for(int j = i+1 ; j<n; j++){
           if(A[j] < A[indexOfMin]){
               indexOfMin = j;
           }
        }
        //Swap A[i] and indexofmin
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main(){
    int A[] = {3,90,45,32,76,44,24};
    int n =7;
    pritnarr(A,n);
    selectionSort(A,n);
    pritnarr(A,n);
    return 0;
}