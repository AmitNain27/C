// -> Given an array of integers arr[], move all the zeros to the end of the arra
// -> Maintain the relative order of all non-zero elements

#include<stdio.h>

void moveZeroToEnd(int *arr, int size){
    
    int count = 0;
    int tmp;
    for(int i=0; i<=size-1;i++){
        if(arr[i]!=0){
            tmp = arr[count];
            arr[count] = arr[i];
            arr[i] = tmp;
            count++;
        }
    }
}

int main(){
    int array[] = {0,1,4,5,2,0,3,0,0,0,6,7,0,8};
    int size = sizeof(array)/sizeof(int);
    moveZeroToEnd(array,size);
    
    for(int j=0;j<=size-1;j++){
        printf("%d ",array[j]);
    }
    return 0;
}