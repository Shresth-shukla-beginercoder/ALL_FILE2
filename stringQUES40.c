# include<stdio.h>
int printstring(char arr[]);

int main(){
    char _name[]= "shresth shukla";

char name[] = "student of the years";
printstring(_name);

printstring(name);
    return 0 ;

}int printstring(char arr[]){
for(int i = 0 ; arr[i] != '\0'; i++){
    printf("%c", arr[i]);
}
printf("\n");

}
