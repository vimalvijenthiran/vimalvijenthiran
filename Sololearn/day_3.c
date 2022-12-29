#include<stdio.h>

int main(){

int i,j;
int arr_1[2][2];


printf("You can create 2 × 2 matrices\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("arr_1[%d][%d]:",i,j);
        scanf("%d",&arr_1[i][j]);
        printf("\n");
    }
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d",arr_1[i][j]);
        printf("\t");
    }
    printf("\n");
}

int m,n;
int arr_2[2][2];

printf("Enter Another 2 × 2 matrices\n");

for(m=0;m<2;m++){
    for(n=0;n<2;n++){
        printf("arr_2[%d][%d]:",m,n);
        scanf("%d",&arr_2[m][n]);
    }
    printf("\n");
}

for(m=0;m<2;m++){
    for(n=0;n<2;n++){
        printf("%d",arr_2[m][n]);
        printf("\t");
    }
    printf("\n");
}

printf("\n");
int p,q;
int arr[2][2];
arr[0][0]=arr_1[0][0]+arr_2[0][0];
arr[0][1]=arr_1[0][1]+arr_2[0][1];
arr[1][0]=arr_1[1][0]+arr_2[1][0];
arr[1][1]=arr_1[1][1]+arr_2[1][1];


 printf("The Output is : \n");
for(p=0;p<2;p++){
    for(q=0; q<2;q++){

        printf("%d",arr[p][q]);
        printf("\t");
    }
    printf("\n");
}

return 0;
}
