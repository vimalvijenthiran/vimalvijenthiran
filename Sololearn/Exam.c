#include<stdio.h>

 int main(){

    /*int a,b,c;

    printf("enter a number:");
    scanf("%d",&a);
     printf("enter a number:");
    scanf("%d",&b);
     printf("enter a number:");
    scanf("%d",&c);*/

    /*if(a < b){
        if(a < c){
           printf("%d is a smaller number",a);
        }else{
            printf("%d is a smaller number",c);
        }
    }else{
         if(b < c){
            printf("%d is a smaller number",b);
         }else{
            printf("%d is a smaller number",c);
         }
    }*/

   /* if(a < b && a < c){
        printf("%d is a smaller number",a);
    }else if(b < a && b < c){
        printf("%d is a smaller number",b);
    }else{
        printf("%d is a smaller number",c);
    }*/
    char m = 'i';
     switch(m){
     case 'i':
        printf("I");

     case 'j':
        printf("J");
        break;
     case 'k':
        printf("K");

     default:
        printf("A");
     }

     return 0;
 }
