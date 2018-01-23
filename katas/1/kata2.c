#include <stdio.h>

void anagram(int arr1[],int arr2[],int size){
    int array[size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                array[i]=j;
            }
        }
    }
    printf("[");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("]\n");
}

int main(){
    int A[5] = {12, 28, 46, 32, 50};  
    int B[5]= {50, 12, 32, 46, 28};
    int size = sizeof(A)/sizeof(int);
    anagram(A,B,size);
    return 0;
}