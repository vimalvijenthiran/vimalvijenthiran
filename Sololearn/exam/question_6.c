#include<stdio.h>
int fact(int);
int main()
{

    /*int arr[10];
    int count1=0,count2=0;
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("Numbers of odd: %d\n",count2);
     printf("Numbers of even: %d\n",count1);*/
     int num,result;
     printf("enter the number:");
     scanf("%d",&num);
     printf("\n");
     result=fact(num);
     printf("result: %d\n",result);
     return 0;
}
int fact(int n){
if(n==1){
    return 1;
}
else{
    return n*fact(n-1);
}

}
