# include<stdio.h>
int tables(int arr[][10], int n, int m , int number);
int main(){
int table[2][10];

tables(table ,0 ,10 , 2);
tables(table , 1,10,3);
for(int i= 0;i <= 10;i++){
    printf("%d\t\n",table[0][i]);
   }
    for(int i= 0;i <= 10;i++){
        printf("%d\t\n",table[1][i]);
   } 


    return 0 ;
}int tables(int arr[][10],int n , int m, int number){
for(int i= 0;i <m;i++){
    arr[n][i]= number * (i+1); 
}
}