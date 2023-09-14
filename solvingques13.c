#include<stdio.h>
int main (){
int n;
printf("enter number :");
scanf("%d",&n);
int sum=0;
// for(int i = 1,j=n;i<=n&&j>=0;i++,j--){
// sum = sum +i;
// printf("%d\n",j);

// }
for(int j=n;j>=0;j--){
sum = sum +j;
printf("%d\n",j);

}
 printf("sum of number :%d\n", sum);
   

    return 0;
    
}