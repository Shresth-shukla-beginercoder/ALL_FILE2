# include<stdio.h>

int main(){
    float price[3];

    printf("enter price 1 :");
    scanf("%f", &price[0]);
 printf("enter price 2 :");
    scanf("%f", &price[1]);
 printf("enter price 3 :");
    scanf("%f", &price[2]);
    
  printf("total price with gst 1 = %f\n", price[0]+(0.18 *price[0]));
  printf("total price with gst 2 = %f\n", price[1]+(0.18 *price[1]));
  printf("total price with gst 3= %f\n", price[2]+(0.18 *price[2]));  
float totalprice = price[0]+price[1]+price[2];
printf("total price of all item = :%f\n", totalprice);

float gst = totalprice +(0.18*totalprice);
printf("final price with gst:%f\n", gst);

return 0 ;
}
