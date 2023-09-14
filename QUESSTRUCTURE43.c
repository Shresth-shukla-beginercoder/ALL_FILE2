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
printf("student name 1 = %s\n", s1.name);
printf("student roll no.1 = %d\n", s1.roll_no);
printf("student cgpa 1= %f\n", s1.cgpa);

struct student s2;
strcpy(s2.name,"aashreya");
s2.roll_no = 8;
s2.cgpa= 9.8;
printf("student name 2 = %s\n", s2.name);
printf("student roll no. 2= %d\n", s2.roll_no);
printf("student cgpa 2= %f\n", s2.cgpa);

struct student s3;
strcpy(s3.name,"shreyansh");
s3.roll_no = 9;
s3.cgpa= 8.9;
printf("student name 3= %s\n", s3.name);
printf("student roll no. 3= %d\n", s3.roll_no);
printf("student cgpa 3= %f\n", s3.cgpa);


return 0 ;
}
