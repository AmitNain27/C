/*
-> Given an array arr[], the task is to find the top three largest distinct integers 
-> If there are less than three distinct elements in the array, 
   then return the available distinct numbers in descending order
*/

#include<stdio.h>

void find3Largest(int *arr, int size){
    int first,second,third; 
    first = second = third= -1;

    for(int i=0;i<size-1;i++){
        // Current element is largest 
        int tmp = arr[i];
        
        if (tmp>=first){
            third = second;
            second = first;
            first = tmp;
        }
        else if(tmp>second && tmp!=first){
            third = second;
            second = tmp;
        }
        else if(tmp>third && tmp!=first && tmp!=second){
            third = tmp;
        }

    }

    printf("First Largest Element : %d\n",first);
    printf("Second Largest Element : %d\n",second);
    printf("Third Largest Element : %d\n",third);
}

int main(){
    int arr[] = {102, 13, 3, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    find3Largest(arr,n);
    return 0;
}