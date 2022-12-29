#include<stdio.h>
int main()
{
  int num1;
  printf("enter the number:");
  scanf("%d",&num1);

  int num2;
  printf("enter the number:");
  scanf("%d",&num2);


  int sum=num1+num2 ,sub=num1-num2, mul=num1*num2, div=num1/num2;


 printf("%d\n %d\n %d\n %d\n",sum,sub,mul,div);

  return 0;
}
#include<stdio.h>
int main()
{
    int age=18;
    int haveMoney=0;
    int haveCard=1;
    float thirst=0.31;
    int after=1;

    int result;

    result=age>=18&&(haveMoney|| haveCard)&&thirst>0.3&&after;
    printf("Result is %d",result);
    return 0;

}
#include<stdio.h>
int main()
{
    float radious;
    printf("enter a radius:");
    scanf("%f",&radious);


    float cirumference=2*3.14*radious;
    float area =3.14*radious*radious;


    printf("the circumference is %f\n",cirumference);
    printf("the area of circle is %f\n",area);

    return 0;
}
#include<stdio.h>
int main()
{
    int sub1;
    printf("enter a marks:");
    scanf("%d",&sub1);
    int sub2;
     printf("enter a marks:");
    scanf("%d",&sub2);
      int sub3;
      printf("enter a marks:");
      scanf("%d",&sub3);
    int sub4;
       printf("enter a marks:");
       scanf("%d",&sub4);
      int sub5;
        printf("enter a marks:");
        scanf("%d",&sub5);

    int total,average,percentage;

    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;

    printf("the total is %d\n",total);
    printf("the average is %d\n",average);
    return 0;
}
#include<stdio.h>
int main()
{
    char Name[100];
    printf("write your first name:");
    scanf("%s",Name);

    char name[100];
    printf("write your last name:");
    scanf("%s",name);

    printf(" %s",Name);
    printf(" %s",name);
    return 0;

}
