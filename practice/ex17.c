#include<stdio.h>
int main()
{
    int a,rem;
    printf("enter a number:");
    scanf("%d",&a);
    rem=a%2;

    switch(a%2){
        case 0:
        printf("even number\n");
        break;

       default:
        printf("odd number\n");

    }
    return 0;
}

int main()
{
    int i=1,number=0;
    printf("enter  a number:");
    scanf("%d",&number);

    for(i=1;i<=10;++i){
        printf("%d\n",(number*i));
    }
    return 0;
}
int main()
{
    int i,j,k;
    for(i=0,j=0,k=0;i<4,k<8,j<10;i++){
        printf("%d %d %d\n",i,j,k);
        j+=2;
        k+=3;
    }

}
