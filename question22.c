# include<stdio.h>
//perfection achive:))))
void printhello();
int main(){
printhello();
    return 0 ;

}void printhello(){
    printf("enter your nationality i india or f  french:");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        printf("Nmaste"); 
    }else if (ch == 'f') {
       printf("bonjour");
    }
    else{
        printf("invalid Error");

    }
}