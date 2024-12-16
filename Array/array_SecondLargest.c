#include<stdio.h>

int findSecondLargest(int *arr, int size){

    // assumption is that array contains positive numbers only
    int largest = -1;
    int secondlargest = -1;

    for(int i=0;i<size-1;i++){
        printf("Largest : %d, SecondLargest : %d, Current : %d\n",largest,secondlargest,arr[i]);

        if(arr[i]>secondlargest && arr[i]<largest){
            printf("Current element [%d] will be treated as Second largest!\n\n",arr[i]);
            secondlargest = arr[i];
        }else{
            printf("Current element [%d] will be treated as largest!\n\n",arr[i]);
            secondlargest = largest;
            largest = arr[i];
        }

    }
    return secondlargest; 

}

int main(){
    int sourceArray[10] = {5,4,1,6,2,0,3,18,19,7};
    int secondLargest = findSecondLargest(sourceArray,sizeof(sourceArray)/sizeof(int));
    printf("\nSecond Largest element is %d\n",secondLargest);
    return 0;
}