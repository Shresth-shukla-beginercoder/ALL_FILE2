#include<stdio.h>
int main (){
int marks;
  printf("enter number (1-100):");
  scanf("%d",&marks);
if (marks == 0 || marks <=30)
{
    printf(" FAIL");
}


   else if ( marks < 40)
   {
    printf("C ");
    
   }else if (marks >=40 && marks < 70)
    {
        printf(" B");
       
    }else if (70 <= marks && marks < 90)
    {
        printf(" A");

    }else{
        printf("A+");

    }
    
    return 0;
    
}