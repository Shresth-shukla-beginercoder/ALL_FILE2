#include<stdio.h>
// sum of counting number
int main (){
int n;
printf("enter number :");
scanf("%d",&n);
int sum=0;
for(int i = 1;i<=n;i++){
sum = sum +i;
} printf("sum of number :%d\n", sum);
for(int i = sum;i>=0;i--){
    printf("%d\n",i);
}
    return 0;
    
}