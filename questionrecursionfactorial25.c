# include<stdio.h>
 int fact(int n);
 int main(){

    int n;
    printf("enter number :");
    scanf("%d",&n);

    printf("factorial of number is :%d\n",fact(n));
    return 0 ;

 }
 // recursion fuction 
 int fact(int n){
    if (n == 1){
        return 1;
    }
    int factn1 = fact(n-1);
    int factn = factn1*n;
    return factn;

 }