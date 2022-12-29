#include<stdio.h>
int main()
 {
     int a=9;
     int b=2;
     int c;
     c=a+b;
       printf("addition=%d\n",c);
     c=a-b;
      printf("subtraction=%d\n",c);
      c=a*b;
      printf("multiplication=%d\n",c);
      c=a/b;
      printf("division=%d\n",c);
      c=a%b;
    printf("reminder=%d\n",c);
    //float div=a/b;
    printf("division=%f\n",(float)a/b);

    return 0;
 }
 int main()
 {
     int a=5;
     int b=4;
     int c;
     c=a+b;
     printf("%d\n",c);
     c-=a;
     printf("%d\n",c);

  }

#include<stdio.h>
int main()
{
    double radius,area;
    radius=5;
    area=3.14*radius*radius;

        printf("area of the circle is %lf \n",area);
 return 0;
}
#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int a=11;
    int b=2;

    int add=a+b;
    int sub=a-b;
    int multi=a*b;
    int div=a/b;
    int rem=a%b;

    printf("addition: %d\n",add);
    printf("subtraction:%d\n",sub);
    printf("multiplication:%d\n",multi);
    printf("division:%d, remember:%d\n",div,rem);
    printf("division:%f\n",(float)div);
    return 0;
}
