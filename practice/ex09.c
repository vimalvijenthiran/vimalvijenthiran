#include<stdio.h>
int main()
{
    int x;
    printf("enter the student 1 marks:");
    scanf("%d",&x);

    int y;
    printf("enter the student 2 marks:");
    scanf("%d",&y);

    if(x>y){
        printf("student 1 got highest marks\n");
    }
    else{
        printf("student 2 got highest marks\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the two numbers:");
    scanf("%d  %d",&num1,&num2);

    int sum=num1+num2;
    printf("the total value is %d\n",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int num1,num2,add,sub,multi,div;

    printf("Enter the first number:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    add=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    div=num1/num2;

    printf("the value of addition: %d\n",add);
    printf("the value of subtraction:%d\n",sub);
    printf("the value of multiplication:%d\n",multi);
    printf("the value of division:%d\n",div);

    return 0;
}
#include<stdio.h>
int main()
{
    int m;
    printf("enter the student's mark:");
    scanf("%d/n",&m);

    if(m<50){
    printf("Grade is:F");
    }
    else if(m>=50&&m<60){
     printf("Grade is:D");
    }
    else if(m>=60&&m<70){
        printf("Grade is:C");
    }
     else if(m>=70&&m<80){
        printf("Grade is:B");
    }
     else if(m>=80&&m<90){
        printf("Grade is:A");
    }
    else{
        printf("Grade is:A+");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int num=3;
    printf("%d",num+2);
    return 0;
}
#include<stdio.h>
int main()
{
     char let;
    printf("write a letter:");
    scanf("%c",&let);


    if(let>='a' && let<='z'||let>='A'&& let<='Z')
    {
            printf("ready to check vowal or cosonant ");
        //Nested if else
        if(let=='a'||let=='e'||let=='i'||let=='o'||let=='u'||let=='A'||let=='E'||let=='I'||let=='O'||let=='U')
        {
            printf("it is a vowal letter\n");
        }
        else
        {
            printf("it is a consonant letter\n");
        }
    else
    {

         printf("there is an error");
    }

    return 0;
}
