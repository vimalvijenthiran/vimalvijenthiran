
#include <stdio.h>

char names[50][100];
int salaries[50];

int main()
{
	printf("Enter employees count: ");

	int employees;
	scanf("%d", &employees);

	int i, total = 0, max = 0;
	for (i = 0; i < employees; i++)
	{
		printf("Enter %d employee salary,name: ", i + 1);
		scanf("%d,%s", salaries + i, names + i);

		total += salaries[i];
		if(salaries[i] > max)
		{
			max = salaries[i];
		}
	}

	float average = (float) total / employees;
	printf("\nAverage salary is %.2f\n\n", average);
	printf("List of employees whose salary below the average :-\n\n");

	int belows = 1;
	for(i = 0;i < employees;i++)
	{
		if(salaries[i] < average)
		{
			printf("\t%d. %s - %d ;", belows++, names[i], salaries[i]);
			printf(" You have to work %d months to be a millionaire\n", 1000000 / salaries[i]);
		}
	}

	printf("\nHighest salarie is %d. List of highest salary paided employees.\n", max);
	belows = 1;
	for(i = 0;i < employees;i++)
	{
		if(salaries[i] == max)
		{
			printf("\t%d. %s\n", belows++, names[i]);
		}
	}
}
