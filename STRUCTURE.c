# include<stdio.h>
# include<string.h>
// user define structure
struct student
{ char name[100];
int roll_no;
float cgpa;   
};

int main(){
struct student s1;
strcpy(s1.name,"AAKRITISHRESTHSHUKLA");
s1.roll_no = 7;
s1.cgpa= 9.9;

printf("student name = %s\n", s1.name);
printf("student roll no. = %d\n", s1.roll_no);
printf("student cgpa = %f\n", s1.cgpa);

return 0 ;
}
