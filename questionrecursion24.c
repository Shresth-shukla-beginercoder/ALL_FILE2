#include<stdio.h>

int sum(int n);

int main(){
int n;
printf("enter number :");
scanf("%d",&n);
    printf("sum of number is :%d",sum(n));


    return 0 ;

}
//recursion fuction

int sum(int n){
    if(n==1){
        return 1;

    }
    int Sumnm1 = sum(n-1);
    int SumN = Sumnm1 + n;
return SumN;


}