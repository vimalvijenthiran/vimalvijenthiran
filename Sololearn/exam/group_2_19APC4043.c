#include <stdio.h>
//19APC4043-Nipun Wimalasooriya

void swap(int *a, int *b);
int prime(int n);
main(){
	/*
	//q1
	printf("Index number: 19APC4043\nName: Nipun Wimalasooriya\nAge:24\nAddress: 404/77,\nRantheti Uyana,\nBarandhana Hinadagolla.\n\n");\
	
	//q2
	float num1, num2, sum, sub;
	printf("Enter value 1: ");
	scanf("%f",&num1);
	
	printf("Enter value 2: ");
	scanf("%f",&num2);
	
	sum= num1+num2;
	sub= num1-num2;
	
	printf("Summation of %.2f and %.2f is %.2f \n", num1, num2, sum);
	printf("Substraction of %.2f and %.2f is %.2f \n\n", num1, num2, sub);
	
	//q3
	int a=100, b=150;
	
	if(a==b){
		printf("%d is equal to %d", a,b);
		
	}
	else if(a>b){
		printf("%d is grater to %d", a,b);
		
	}
	else{
		printf("%d is grater to %d", b,a);
	}
	
	//q4
	
	float hight, width, area;
	printf("Enter the height: ");
	scanf("%f", &hight);
	printf("Enter the widht: ");
	scanf("%f", &width );
	area=(hight*width)/2;
	printf("Area: %.2f \n", area);
	
	
	//q5
	
	float r=0, v=0;
	printf("Enter the radious: ");
	scanf("%f", &r);
	v = 4*3.1415*(r*r*r)/3;
	printf("Volume of the spere is: %f", v);
	
	
	//q6
	printf(":::::: Sri Lanka Vo ting Eligibilty Checker :::::: \n\n");
	int cage;
	printf("Enter your age: ");
	scanf("%d", &cage);
	if(cage>=18){
		printf("You are eligible for voting \n");
	}else{
		printf("You are not eligible for voting");
		printf("You can vote after %d \n",cage-18);
	}
	
	
	//q7
	int year;
	printf("Enter an year: ");
	scanf("%d", &year);
	if(year%400==0){
		printf("Year %d is a leap year \n\n", year);	
	}
	else if(year%100==0){
		printf("Year %d is not a leap year \n\n", year);
			
	}
	else if(year%4==0){
		printf("Year %d is a leap year \n\n", year);
	}
	else{
		printf("Year %d is not a leap year \n\n", year);
	}
	
	//q8
	printf("MAIN MENU\n------------- \n\n1-Add \n2-Subtract \n3-Multiply \n4-Divide \n\n-------------\n\n");
	int choise;
 	double n1, n2;

    	printf("Press the required number: ");
    	scanf("%d", &choise);
    	printf("Enter first number: ");
    	scanf("%lf",&n1);
    	printf("Enter second number: ");
    	scanf("%lf",&n2);

    	switch(choise){
        case 1:
            printf("%.2lf + %.2lf = %.2lf \n\n",n1, n2, n1+n2);
            break;

        case 2:
            printf("%.2lf - %.2lf = %.2lf \n\n",n1, n2, n1-n2);
            break;

        case 3:
            printf("%.2lf * %.2lf = %.2lf \n\n",n1, n2, n1*n2);
            break;

        case 4:
            printf("%.2lf / %.2lf = %.2lf \n\n",n1, n2, n1/n2);
            break;
        default:
            printf("Error! operator is not correct");
    }
    
	//q9
	int i=1,su=0;
	    
	do{
	    	su+= i;
	    	i++;
	}while(i<11);
	    
	printf("Sum of the first 10 natural numbers: %d \n", su);
    
	//q10
	double x, y, z;
	printf("Enter first number: ");
	scanf("%lf", &x);
	printf("Enter second number: ");
	scanf("%lf", &y);
	
	z = x;
	x = y;
	y = z;
	printf("\nAfter swapping, first number = %.2lf\n", x);
	printf("After swapping, second number = %.2lf\n", y);
	
	//q11
	
	int a=0, b=0;
	printf("Enter first number: ");
    	scanf("%d",&a);
    	printf("Enter second number: ");
    	scanf("%d",&b);
	printf("Before swapping: n1 = %d, n2 = %d \n",a,b);
	swap(&a,&b);
	printf("After swapping: n1 = %d, n2 = %d \n",a,b);
	
	//q12
	printf("Prime number checker\n\n");
	int n,res=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	res=prime(n);
	if(res==0)
		printf("%d is a prime number\n\n",n);
	else
		printf("%d is not a prime number\n\n",n);
	*/	
	//q13
	
return 0;
}
void swap(int *a, int *b){
	int tmp;
	tmp = *b; 
	*b=*a;    
	*a=tmp;
	}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
		continue;
		else
		return 1;
	}
	return 0;
}