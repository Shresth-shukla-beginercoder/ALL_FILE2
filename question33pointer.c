# include <stdio.h>

int equate(int a , int b ,int *sum  ,int *prod , int* avg);

 int main (){
int a , b; int sum , prod , avg;
printf("enter a :");
scanf("%d", &a);
printf("enter b:");
scanf("%d", &b);
    equate( a , b ,&sum  ,&prod , &avg);

    printf("sum = %d \n prod = %d \n avg = %d \n", sum , prod , avg);
    
 


    return 0 ;

 }int equate(int a , int b ,int *sum  ,int *prod , int* avg){
    *sum = a +b;
    *prod = a*b;
*avg = (a=+b)/2;

 }