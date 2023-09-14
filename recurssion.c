# include<stdio.h>
void printHW(int count);

int main (){
printHW(7);

    return 0;
// recursive fuction 
} void printHW(int count){
    if(count == 0){
        return;

    }printf("hello sir ji\n");
    printHW(count-1);

}