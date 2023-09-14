# include<stdio.h>
float convertcelsius(float f);

int main (){
    float n;
convertcelsius(n);
    return 0 ;
   

} float convertcelsius(float f){
    float c;
    printf("enter celsius :");
    scanf("%f",&c);
     float fah = c * 9/5 + 32 ;
 printf("fahrenheit is:%f", fah);
    }