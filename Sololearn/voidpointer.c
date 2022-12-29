#include<stdio.h>
int main(){
/*
int a=5;
int *ptr;
ptr=&a;
printf("*ptr=%d\n",*ptr);
printf("ptr=%p\n",ptr);
return 0;

int x=33;
float y =12.4;
char c='a';
void *ptr;

ptr =&x;
printf("void ptr points to %d \n", *((int *)ptr));

ptr =&y;
printf("void ptr points to %f \n", *((float *)ptr));

ptr =&c;
printf("void ptr points to %c \n", *((char *)ptr));
*/
int i,j;
for(i=1;i<=5;i++)
{
    for(j=i;j>=1;j--)
    {
        printf("%d ",i);
    }
    printf("\n");
}
return 0;
}
