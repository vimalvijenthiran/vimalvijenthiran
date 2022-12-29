#include<stdio.h>
int main()
{
    char let;
    printf("write a letter:");
    scanf("%c",&let);

    if(let>='a'&&let<='z'||let>='A'&& let<='Z'){
        printf("ready to check\n");

        if(let=='a'||(let=='e')||(let=='i')||(let=='o')||(let=='u')||(let=='A')||(let=='E')||(let=='I')||(let=='O')||(let=='U')){
                printf("it is vowel letter\n");
        }
        else{
            printf("it is a consonant letter\n");}
        }
    else{
            printf("result not found");
    }

    int x=5;
    float y=1.25;
    double z=1.2565;
    char f='a';
    char word[30]="vimal";

    printf("%d\n",x);
     printf("%f\n",y);
     printf("%lf\n",z);
     printf("%c\n",f);
     printf("%s\n",word);

     double x=2.12654897;
     printf("%.8f",x);
      char word[];
      scanf("%s",word);
      printf("%s\n",word);

      int num;
      printf("enter the number:");
      scanf("%d",&num);

      switch(num){
      case 0:
        printf("zero\n");
        break;
      case 1:
        printf("one\n");
        break;
      case 2:
        printf("two\n");
        break;
      case 3:
        printf("three\n");
        break;

        default:
        printf("greater than 3");*/

       int num=1;
        while(num<=6){
            printf("%d\n",num);
            num++;
        }

        char word;
        for(word='a';word<='d'; word++){
            printf("%c\n",word);
        }
        int num[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};

        printf("%d\n",num[0][1]);

       int num[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};

        int row,col;
        for(row=0;row<3;row++){
            for(col=0;col<3;col++){
                printf("%d ",num[row][col]);
            }
            printf("\n");
        }

        return 0;

}
int main()
{
    int a[3][3]={{1,2,3},
                  {4,5,6},
                  {7,8,9}};

     printf("%d",a[0][1]);

     return 0;

}
