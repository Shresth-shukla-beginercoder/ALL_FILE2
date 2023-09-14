#include<stdio.h>

int main()
{
    int marks ;
    printf("enter your number (1-100):");
    scanf("%d", & marks);

    if (marks <= 30)

    {
      printf("FAIL");
      
    }else if (marks > 30 && marks <= 100)
    {
        printf("PASS");

    }else{
        printf(" wrong marks ");
        
    }
    
    
    return 0 ;

    
}