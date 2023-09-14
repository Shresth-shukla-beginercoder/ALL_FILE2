# include<stdio.h>
#include<string.h>
int main (){
char str[1000];
char  ch;
int i = 0 ;
// this all program down here is works like fegts
while(ch != '\n'){
    scanf("%c",&ch);
str[i] = ch;
i++;
}
str[i] = '\0';
puts(str);


    return 0 ;
}