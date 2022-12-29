
//Write a c program to check prime number.

/*#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("Number is not prime");
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime");
return 0;
 }*/

// Even number between 1 to 100
/*#include<stdio.h>
int main(){
int a=1;
while(a<100){
    if(a%2==0){
        printf("%d\n",a);
    }
    a++;
}
return 0;
}
*/
// sum of natural numbers
/*#include<stdio.h>
int main(){
int i,sum=0,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum+=i;
}
printf("Sum of the numbers: %d\n",sum);
return 0;
}
*/
//reverse numbers of naturals
/*#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);

    for(i=a;i>=1;i--){
    printf("%d\n",i);
}

return 0;
}*/
//a to z
/*#include<stdio.h>
int main(){

int n=97;
while(n<123){
    printf("%c\n",n);
    n++;
}
return 0;
}*/
//last and first digit
/*#include<stdio.h>
int main(){

int no;
int first;
int last;
printf("Enter no:");
scanf("%d",&no);
last=no%10;
printf("last digit:%d\n",last);
first=no;
while(1){
    if(first<10){
        break;
    }
    first=first/10;
}
printf("first digit:%d\n",first);
return 0;
}*/

/*#include<stdio.h>
int main(){
int arr[10];

for(int i=0;i<10;i++){
    printf("Enter numbers %d:",i+1);
    scanf("%d",&arr[i]);
    printf("\n");
}

for(int i=0;i<10;i++){
    printf("%d\n",arr[i]);
}

//printf("%d\n",arr[0]);
return 0;
}*/
//swap the numbers with value
/*#include<stdio.h>
int main(){
int a,b,c;
a=10;
b=5;
 c=a;
 a=b;
 b=c;
 printf("value of a:%d\n",a);
 printf("value of b: %d\n",b);

return 0;
}*/
//swap the numbers with address
#include<stdio.h>
int main(){
int a,b,*temp;
a=5;b=10;
temp=&a;
a=b;
b=*temp;

printf("value of a:%d\n",a);
printf("value of b :%d\n",*temp);

}
