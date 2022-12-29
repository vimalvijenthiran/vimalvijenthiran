#include<stdio.h>
#include<stdlib.h>

int main(){

/*int num;
FILE *fptr;
fptr =fopen("D:\c programming\Sololearn\programming.txt.txt","w");
if(fptr==NULL){
    printf("Error!");
    exit(1);
}
printf("Enter num");
scanf("%d",&num);
fprintf(fptr,"%d",num);
fprintf(fptr,"welcome dude");
fclose(fptr);
*/
int n;
int arr[n];
printf("Enter a value assign to array size:");
scanf("%d",&n);

for(int i=0; i<n;i++){
    printf("enter the marks:");
    scanf("%d",&arr[i]);
    printf("\n");
}
return 0;
}
