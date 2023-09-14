#include<stdio.h>
int main (){
 int day ;

 printf("enter day(1-7) :");
 scanf("%d",&day);// for char use "%s"

 switch (day)
 {case 1: printf("monday");// for character use 'a'
 break;
 case 2: printf("tuesday");// use 'b' and so on 
 break;
 case 3: printf("wednesday");
 break;
 case 4: printf("thursday");
 break;
 case 5: printf("friday");
 break;
 case 6: printf("saturday");
 break;
 case 7: printf("sunday");
 break;
 default:printf("invalid day :(");

    break;
 }    

    return 0;
    
}