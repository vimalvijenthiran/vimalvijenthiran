#include<stdio.h>
int main()
{
    int w;
    printf("write a number:");
    scanf("%d",&w);

    switch(w){
        case 1:
        printf("there is a monday\n");
        break;

        case 2:
        printf("there is a tuesday\n");
        break;

        case 3:
        printf("there is a wednesday\n");
        break;

        case 4:
        printf("there is a thursday\n");
        break;

        case 5:
        printf("there is a friday\n");
        break;

        case 6:
        printf("there is a satursday\n");
        break;

        case 7:
        printf("there is a sunday\n");
        break;

        default:
            printf("there is not a weekday");
    }
    return 0;
}
int main()
{

    int a,b;
    printf("enter a number 1:\n");
    scanf("%d",&a);

    printf("enter a number 2:\n");
    scanf("%d",&b);

    switch(a>b){
       case 1:
        printf("%d > %d",a,b);
        break;

        default:
        printf("%d >%d",b,a);

    }
    return 0;
}
int main()
{
    int a;
    printf("write a number:");
    scanf("%d",&a);


    while(a%2==0){
        printf("%d\n",a);
        printf("enter a number:");
        scanf("%d",&a);

    }
    return 0;
}
int main()
{
   int a=1;

   while(a<20){

    printf("%d\n",a);
    a=a+2;

   }

   return 0;
}
int main()
{
    int a=1;

    while(a<20){
       if(a%2==1){
        printf("%d\n",a);
       }
       a++;
    }
    return 0;
}
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

     while(a<7){
        printf("%d\n",a);
        a=a+2;

    }

    return 0;
}
int main()
{
    int a=1;
     while(a<20&& a%2==1){
        printf("%d\n",a);
        a=a+2;
     }
     return 0;
}
int main()
{
    unsigned int i=65000;
    while()
}


