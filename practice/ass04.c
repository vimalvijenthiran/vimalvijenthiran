/*#include<stdio.h>

int main()
{
  int salary[5],i;
    char name[5][100];
    int max =0;
 double sum=0,avg;

    for(i=0;i<5;i++){
printf("name :");
scanf("%s",&name[i]);
printf("salary of employee :");
scanf("%d",&salary[i]);
printf("\n");
    }
    for(i=0;i<5;i++){
        sum=sum+salary[i];
      if(salary[i] > max)
		{
			max = salary[i];
		}
    }
    avg=sum/5;
    printf("\naverage salary :%.2f\n",avg);
    printf("BELOW SALARY AND NAME LIST OF EMPLOYEES\n\n");



	for(i = 0;i < 5;i++)
	{
		if(salary[i] < avg)
		{
			printf("employee name:%s\n ",name[i]);
			printf("employee salary :%d\n",salary[i]);
			printf("You have to work hard\n");
		}
	}
    printf("\nHighest salary List of highest salary paided employee.\n");
	for(i = 0;i < 5;i++)
	{
		if(salary[i]>max)
		{
            max=salary[i];
		}

    }
    printf("\nHighest salary is %d.\n", max);

	for(i = 0;i < 5;i++)
	{
		if(salary[i]==max)
		{
            printf("%s\n",name[i]);
		}

    }

return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,employess,total_salary=0,max=0;
    char name[50];
    int salary[50];
    float average_salary;
    printf("enter employees count:");
    scanf("%d",&employess);
    printf("**employess name and salary list**\n");
    for(i=1;i<=employess;i++)
    {
        printf("%d.name & salary:",i);
        scanf("%s\t%d",&name[i],&salary[i]);

    }
    printf("\n*Average Salary*\n");
    for(i=1;i<=employess;i++)
    {
        total_salary+=salary[i];
    }
    average_salary=(float)total_salary/employess;
    printf("Avarage salary is %.2f\n",average_salary);
    printf("\n*Names of all employees whose salaries are below the average, with an appropriate message*\n");
    for(i=1;i<=employess;i++)
    {
        if(salary[i]<average_salary)
        {
            printf("%s - %d\n",name[i],salary[i]);
            printf("*If you want to become a millionaire, you have to work %d months\n",1000000/salary[i]);
        }
    }
    printf("\n*Highest salaries*\n");
    for(i=1;i<=employess;i++)
    {
        if(salary[i]>max)
        {
            max=salary[i];
        }
    }
    printf("Highest salary is %d\n",max);
    printf("\n*The name of all employees having the highest salary. *\n");
    for(i=1;i<=employess;i++)
    {
        if(max==salary[i])
        {
            printf("%s get high salary\n",name[i]);
        }
    }
    return 0;
}
