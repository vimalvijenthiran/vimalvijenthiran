#include<stdio.h>
int main(){

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


return 0;
}

