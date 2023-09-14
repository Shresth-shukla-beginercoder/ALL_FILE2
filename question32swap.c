#include<stdio.h>

int swapbycall(int a,int b);
int swapbyreference(int *a , int *b);

int main(){
int x , y;
printf("enter a :");
scanf("%d",&x);

printf("enter b:");
scanf("%d",&y);
swapbycall(x,y);
 printf("by call:%d\n by call b = %d\n", x, y);

swapbyreference(&x,&y);

 printf("by reference:%d\n by reference b = %d\n", x , y);

    return 0;
}
//by call 
int swapbycall(int a, int b){
    int t= a;
    a= b;
    b = t;

    printf("a = %d\n b = %d\n", a , b);
// by reference
}int swapbyreference(int *a ,int *b){
    int t = *a;
    *a = *b;
 *b = t;

    printf("-a = %d\n -b = %d\n",*a ,*b);

}