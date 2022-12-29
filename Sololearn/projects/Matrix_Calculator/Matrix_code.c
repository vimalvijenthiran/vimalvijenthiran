
#include<stdio.h>

//here is function
//function calling
void add();
void sub();
void multi();

//main function start
int main(){

printf("Hii Guys!!! Here you can do matrices' addition, substraction, multipilication...");
printf("If you want an answers..\n Try and get...\n");

first:

printf("\t 1. If you want Addition click number\"1\" \n ");
printf("\t 2. If you want Substraction click number\"2\" \n ");
printf("\t 3. If you want multipilication click number\"3\" \n ");


int result;
printf("Enter your choice :");
scanf("%d",&result);

//control statement
switch(result){
 case 1:
     add();
     break;
 case 2:
     sub();
    break;
 case 3:
     multi();
    break;
 default:
    printf("Your choice is invalid..Try again\n");
}

int press;
printf("\n You want to try again..Press \' 0 \' \n");
scanf("%d",&press);

if(press==0){
    goto first;

}else{
    printf("Your choice is wrong..Thank You for your accessing\n");
}

return 0;
}
//main function finished


//Here is add function
void add(){

printf("Enter any size of matrix\n  but it should same size matrices!\n");

int n,m;
printf("Enter row number:");
scanf("%d",&n);
printf("Enter column number:");
scanf("%d",&m);

int i,j;
int arr[n][m],arr_1[n][m],arr_2[n][m];

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_1[i][j]);

    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr_1[i][j]);
    printf("\t");
    }
    printf("\n");
}
printf("Enter another matrices\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_2[i][j]);

    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr_2[i][j]);
    printf("\t");
    }
    printf("\n");

}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    arr[i][j]=arr_1[i][j]+arr_2[i][j];
    }
}

printf("The output is: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr[i][j]);
    printf("\t");
    }
    printf("\n");
}

}
//add function finished

//sub function start
void sub(){


printf("Enter any size of matrix\n  but it should same size matrices!\n");

int n,m;
printf("Enter row number:");
scanf("%d",&n);
printf("Enter column number:");
scanf("%d",&m);

int i,j;
int arr[n][m],arr_1[n][m],arr_2[n][m];

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_1[i][j]);

    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr_1[i][j]);
    printf("\t");
    }
    printf("\n");
}
printf("Enter another matrices\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_2[i][j]);

    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr_2[i][j]);
    printf("\t");
    }
    printf("\n");

}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    arr[i][j]=arr_1[i][j]- arr_2[i][j];
    }
}

printf("The output is: \n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr[i][j]);
    printf("\t");
    }
    printf("\n");
}

}
//sub function finished

//multi function start
void multi(){
printf("In multipilication, you should remember first matrics column number and second matrics row number same.\n ");
int n,m;
printf("Enter row number:");
scanf("%d",&n);
printf("Enter column number:");
scanf("%d",&m);

int i,j;
int arr_1[n][m];

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_1[i][j]);

    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){

    printf("%d",arr_1[i][j]);
    printf("\t");
    }
    printf("\n");
}

int n1,m1;
printf("Enter row number:");
scanf("%d",&n1);
printf("Enter column number:");
scanf("%d",&m1);

int arr_2[n1][m1];

printf("Enter another matrices\n");
for(i=0;i<n1;i++){
    for(j=0;j<m1;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_2[i][j]);

    }
    printf("\n");
}

for(i=0;i<n1;i++){
    for(j=0;j<m1;j++){

    printf("%d",arr_2[i][j]);
    printf("\t");
    }
    printf("\n");

}

int arr[n][m1];
if(m==n1){
    for(i=0;i<n;i++){
        for(j=0;j<m1;j++){

          if(i==0&&j==1){
            arr[i][j-1]=arr_1[i][j-1]*arr_2[i][j-1]+arr_1[i][j]* arr_2[i+1][j-1];
            arr[i][j]= arr_1[i][j-1] * arr_2[i][j]+ arr_1[i][j] * arr_2[i+1][j];
          }
          if(i==1&& j==0){
            arr[i][j]=arr_1[i][j]*arr_2[i-1][j]+arr_1[i][j+1]*arr_2[i][j];
            arr[i][j+1]=arr_1[i][j]*arr_2[i-1][j+1]+arr_1[i][j+1]*arr_2[i][j+1];
          }
    }
}

}
printf("The output is: \n");
for(i=0;i<n;i++){
    for(j=0;j<m1;j++){

    printf("%d",arr[i][j]);
    printf("\t");
    }
    printf("\n");
}

}
//multi function finished

/* finally code ended*/
