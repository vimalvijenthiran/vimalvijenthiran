#include<stdio.h>
    /* local variable definition*/
/*int a=10;
    /*do loop execution*/
   /* do{
        printf("value of a:%d\n",a);
        a=a+1;
    }while(a<20);
    return 0;
}*/
/*int main()
{
    int a;
    a=1;
    do{
        printf("%d\n",a+1);
        a++;
    }while(a<=5);
    return 0;
}*/
/*int main()
{
    int n,a;
    printf("enter number of order:");
    scanf("%d",&n);

    for(a=1;a<=n;a++){
        printf("%d\n",a+(a+1));
    }
    return 0;
}*/
/*int main()
{
    int i,j;
    i=5;

    while(i>=1){
    j=i;

    while(j>=1){
        printf("%d",j);
        j=j-1;
    }
    i=i-1;
    printf("\n");
    }
    return 0;
}*/
/*int main()
{
    int a=2;
     switch(a<3){
     case 1:
        printf("one\n");

     case 2:
        printf("two\n");

     default:
        printf("invalid");
     }
     return 0;
}*/
/*int main()
{
    int a,sum;
    sum=0;
    for(a=1;a<5;a++){
        sum=sum+a;
    }
     printf("%d\n",sum);
    return 0;
}*/
/*int main()
{
    int a,total;
    float average;

    average=0;
    total=0;

    for(a=1;a<5;a++){
        total=total+a;

    }

    printf("total is %d\n",total);
    average=total/4;
    printf("average is %.2f\n",average);
    return 0;

}*/
/*int main() {
int i, j;
for (i = 1; i < 3; i++) {

for (j = 1; j < 5; j++) {

if (j == 2){
continue;
}

printf("%d\n", j);
}

}
return 0;
}*/
/*int main()
{
    int a=1;
    printf("post increment:%d",a++);
    printf("\n%d",a);
    return 0;
}*/
/*int main()
{
    int a,b,c;
    printf("\nEnter the values A&B:\n");
    scanf("%d %d",&a,&b);

    c=a>b?a:b;
    printf("greater value is %d\n",c);
    return 0;
}*/
/*int main()
{
    int i=0;
    vic:
    printf("%d\n",i);
    i++;
    if(i<5){
        goto vic;
    }
    return 0;
}*/
/*int main()
{
    int i;
    for(i=1;i<=255;i++){
        printf("\n%d:%c\n",i,i);
    }
    return 0;
}*/
int main()
{
    int a[10]={1,2,3,4,5};

    printf("%d",a[3]);
    return 0;
}
