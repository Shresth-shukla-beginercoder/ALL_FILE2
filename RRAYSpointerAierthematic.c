# include<stdio.h>
//pointer airthmatic
int main(){
int age ;// 4 bytes
float price;// 4 bytes
char any ;// 1 bytes

printf("enter age ;");
scanf("%d",&age);
printf("enter price ;");
scanf("%d",&price);
printf("enter any chracter;");
scanf("%d",&any);
int *ptr = &age;
float *ptrf = &price;
char *ptrc = &any;

printf("ptr = %u\n\n", ptr);

printf("ptrf = %u\n\n", ptrf);

printf("ptrc = %u\n\n", ptrc);
ptr++;
ptrf++;
ptrc++;
printf("ptr = %u\n\n", ptr);
printf("ptrf = %u\n\n", ptrf);
printf("ptrc = %u\n\n", ptrc);
 
ptr--;
ptrf--;
ptrc--;
printf("ptr = %u\n\n", ptr);
printf("ptrf = %u\n\n", ptrf);
printf("ptrc = %u\n\n", ptrc);

    return 0 ;
}