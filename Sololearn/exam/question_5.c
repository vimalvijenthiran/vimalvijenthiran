#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int N,i;
    int *ptr = arr;
    printf("Enter size of array:");
    scanf("%d",&N);
    printf("Enter element in array:\n");
    for(i=0;i<N;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Array elements:");
    for(i=0;i<N;i++){
        printf("%d\n",i[ptr]);
    }
    return 0;

}
