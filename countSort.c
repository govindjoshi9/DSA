#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void pritnarr(int * A, int n){

    for(int i =0 ; i<n ; i++)
    {
        printf("%d\n",A[i]);
        
    }
}
int maximum(int A[], int n)
{
    int max = INT_MIN;
    for(int i =0; i<n; i++){
        if(max<A[i]){
            max = A[i];
        }
    }
    return max;
}
void countSort(int * A, int n){
    int i , j;
    //Find the maximum elemant of A
    int max = maximum(A,n);
    //Creating the count sort
    int * count = (int *)malloc((max+1)*sizeof(int));

    //Initalize the arrey elemant to 0
    for( i =0 ; i<max+1; i++){
        count[i] = 0;
    }

    //Incremant the corresponding array of elemant 
    for( i =0 ; i<n; i++){
        count[A[i]] =count[A[i]]+1;
    }
    i =0; //counter for count array
    j= 0; // countyer for giver=n array

    while(i<max){
        if(count[i]>0){
            A[j] = i;
            count[i] = count[i] -1;
            i++;
        }
    }

}

int  main()
{
    int A[] = {9,14,4,8,7,5,6};
    int n =7;
    pritnarr(A,n);
    countSort(A,n);
    printf("After appling Count  sort\n");
    pritnarr(A,n);
    return 0;
}