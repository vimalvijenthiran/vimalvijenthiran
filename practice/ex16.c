#include <stdio.h>
int main()
{
	const int September = 9;
	const int April = 4;
	const int June = 6;
	const int November = 11;
	const int February = 2;

	int month;

	printf("Enter number of month: ");
	scanf("%d", &month);

    switch(month){
       case 2:
       printf("28 or 29 days\n");
        break;

        case 4:
		printf("30 days\n");
		break;

       case 6:
		printf("30 days\n");
		break;

       case 9:
		printf("30 days\n");
		break;

		case 11:
		printf("30 days\n");
		break;

        default:
            printf("31 days");
 }
	return 0;
}

int main()
{
    int num;
    printf("enter an integer number:");
    scanf("%d",&num);

     if(num<0){
        printf("it is a negative integer number\n");
        }else if(num>0){
            printf("it is a positive integer number\n");
        }else{
            printf("number is zero");
        }
    return 0;
}
 int main()
 {
     int num1,num2,num3;
     printf("enter a number1:");
     scanf("%d",&num1);

     printf("enter a number2:");
     scanf("%d",&num2);

     printf("enter a number3:");
     scanf("%d",&num3);

     if(num1>num2&&num1>num3){
        printf("number 1 greater than number 2 and number 3\n");
     }
     else if(num2>num1&&num2>num3){
         printf("number 2 greater than number 1 and number 3\n");
     }
     else{
         printf("number 3 greater than number 2 and number 1\n");
     }
     return 0;

 }

