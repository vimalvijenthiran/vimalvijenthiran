#include<stdio.h>
int main(){

int i,j;
int arr[3][3],arr_1[3][3],arr_2[3][3];

printf("Enter a 3*3 matrices\n ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_1[i][j]);

    }
    printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

    printf("%d",arr_1[i][j]);
    printf("\t");
    }
    printf("\n");
}

printf("Enter another 3×3 matrices\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("arr[%d][%d]: ",i+1,j+1);
        scanf("%d",&arr_2[i][j]);

    }
    printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

    printf("%d",arr_2[i][j]);
    printf("\t");
    }
    printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    arr[i][j]=arr_1[i][j]+arr_2[i][j];
    }
}

printf("The output is: \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

    printf("%d",arr[i][j]);
    printf("\t");
    }
    printf("\n");
}

return 0;
}
