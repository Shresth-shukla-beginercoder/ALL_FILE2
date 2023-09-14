# include <stdio.h>
// by call 
int printaddress(int n);
// by reference
 int _printaddress(int *n);

int main (){

    int n;
    printf("enter number :");
scanf("%d",&n);

printaddress(n);
 printf("addresss of 1b:%u\n",&n);
_printaddress(&n);
        printf("addresss of 1r :%u\n",&n);
    return 0 ;

}int printaddress(int n){
    printf("addresss of 2b:%u\n",&n);

}int _printaddress(int *n){
        printf("addresss of 2r :%u\n", n);}