
#include<stdio.h>
int fac(int i)
{
    if(i<=1){
        return 1;
    }
    return i*fac(i-1);
}
int main()
{
    printf("%d\n",fac(5));
    return 0;
}

