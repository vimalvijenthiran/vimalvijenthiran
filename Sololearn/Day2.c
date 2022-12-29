
#include<stdio.h>
#include<math.h>

//2019 past paper question

/*int main(){

int n,sum=0;
printf("enter which n number of sum you want:");
scanf("%d",&n);

for(int i=0; i<=n;i++){
    if(i%2==1){
        sum+=i;
    }
}

printf("Sum of the number is %d\n",sum);
 return 0;

}*/
// end of the question

//calculating sum and average to the array numbers

/*int main(){

int n ,arr[n];
int sum =0;

printf("Enter which number you want to array:");
scanf("%d",&n);

for(int i=0; i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
    printf("\n");
}

for(int i=0; i< n; i++){
     sum = sum + arr[i];
}

printf("Sum of array numbers is %d \n",sum);
printf("Average of the array numbers %.3f \n",(float)sum/(float)n);



return 0;
}*/

/* write a function definition in C language to pass the values
 of two sides of a rectangle,calculate the area and perimeter*/

void rectangle(int a ,int b);

int main(){
int a,b;
printf("Enter a number for a:");
scanf("%d",&a);
printf("Enter a number for b:");
scanf("%d",&b);
rectangle(a,b);
return 0;
}
void rectangle(int a, int b){

 int area = a*b;
 int perimeter= 2*a+2*b;

 printf("Area of rectangle: %d\n",area);
 printf("Perimeter of rectangle: %d\n",perimeter);

}
