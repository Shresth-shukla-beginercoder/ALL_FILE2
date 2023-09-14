#include<stdio.h>
// true or false 
int main (){
int x;

printf("enter number for checking true or false :");
scanf("%d",&x);

printf("1(true) or 0(false): %d", x > 9 && x < 100 );
    return 0;
    
}