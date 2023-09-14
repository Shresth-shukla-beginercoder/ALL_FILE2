#include<stdio.h>
int main (){
int n;
do{
    printf("  enter number :");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n% 2 !=0){
        break;
    }
}while (1);
 printf(" heheh odd number:game over lol");
    
    return 0;
    
}
/*
if(n% 7 == 0){
    break;
}*/