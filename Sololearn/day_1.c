#include<stdio.h>

int main(){
    int i;
   // char a = '*';
   int arr[5];
    for(i=0;i<5;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);

    }

  return 0;
}

