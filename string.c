# include <stdio.h>

int main (){

 char _name[]= "AAKRITI";// \0 compiler automaticaly put atthe end 
for(int i =0 ; _name[i] != '\0';i++){

    printf("%c", _name[i]);

}

return 0 ;

}