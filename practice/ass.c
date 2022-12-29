
#include <stdio.h>

int main()
{
    int num,i;
    double avrg = 0.0;
    char name[50][100];
    int sal[50];
    double sum = 0;
    num=0;
    i = 0;

    printf("Enter the number of Employees (maximum number of employees should be 50):-");
    scanf(" %d", &num);


        if(num>0&&num<=50){

            printf("Enter names of all employees\n");
            for(i = 0; i<num;i++){
                printf("employees %d :- ",i+1);
                scanf("%s",&name[i]);
            }

            printf("Please! Enter the salaries of all employees\n");

            for(i = 0; i<num; i ++){
                printf("employees %d :- ",i+1);
                scanf("%d",&sal[i]);
            }

            for(i = 0; i<num; i++){
                sum = sum + sal[i];
            }

            avrg = sum/num;    //Average of the  employees salaries equation

            printf("The average of salaries = %.2f", avrg);


            printf("\n employees whose salaries are below the average\n");

            for(i = 0; i<num;i++){
                if(sal[i]<avrg){
                    printf("%s - %d\n",name[i],sal[i]);
                }
            }
            printf("----They performance are in poor-----\n");

            printf("\n The high salaries of employees\n");

            for (i = 0; i < num; i++){

            if (avrg < sal[i]) {

               printf("%s- %d\n",name[i],sal[i]);

            }
        }
        }else{
            printf("Enter again the number of Employees (maximum number of employees should be 50):-");

        }


    return 0;
}
