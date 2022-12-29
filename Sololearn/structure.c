#include<stdio.h>

/*struct student
{
   char *name;
   int age;
   float per;
};

int main(){

struct student o;
//printf("\n Size of struct:%d",sizeof(o));
o.name="vimal";
o.age = 22;
o.per = 85.5;
printf("\n Name : %s",o.name);
printf("\n Age : %d",o.age);
printf("\n Percent : %f",o.per);
}*/

/*typedef struct student{
  char *name;
  int age;
  float per;
}Student;

int main(){

Student a;
a.name="Vimal";
a.age = 22;
a.per = 90;

printf("Name : %s\n",a.name);
}*/

//initializing & Accessing the structure

/*struct student
{
    char *name;
    int age;
    float per;
};

int main(){

struct student o = {"Vimal",22,90.5};
printf("\n Name : %s",o.name);
printf("\n Age : %d",o.age);
printf("\n Per : %f",o.per);
}*/

//Access  members of structure using pointer
/*struct student
{
    char *name;
    int age;
    float per;
};

int main(){

struct student o = {"Vimal",22,90.5};
struct student *ptr =&o;
printf("\n Name : %s",(*ptr).name);
printf("\n Age : %d",ptr->age);
printf("\n Per : %f",ptr->per);
}*/

//Structure as function arguments

/*struct student
{
    char *name;
    int age;
    float per;
};

void display(struct student o){
printf("\n Name : %s",o.name);
printf("\n Age : %d",o.age);
printf("\n Per : %f",o.per);
}
int main(){

struct student o = {"Vimal",22,90.5};

display(o);
}*/
//array structure

struct student
{
    char *name;
    int age;
    float per;
};

int main(){

struct student o[2];
o[0].name="Ram";
o[0].age=25;
o[0].per=75.25;

o[1].name="Praveen";
o[1].age=35;
o[1].per=85.6;

printf("\n Name : %s",o[0].name);
printf("\n Age : %d",o[0].age);
printf("\n Per : %f",o[0].per);

printf("\n Name : %s",o[1].name);
printf("\n Age : %d",o[1].age);
printf("\n Per : %f",o[1].per);


}
