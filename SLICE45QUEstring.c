#include<stdio.h>
#include<string.h>

int sclice(char str[],int n , int m);

int main (){
char sstr[]= "HELLOWORLD";
sclice(sstr,3,6);

    return 0 ;
}
int sclice(char str[], int n , int m){
    char Nstr[100];
    int j = 0;
    for(int i = n ; i <=m; i++,j++){
         Nstr[j] = str[i];
    }Nstr[j] = '\0';
    puts(Nstr);

}