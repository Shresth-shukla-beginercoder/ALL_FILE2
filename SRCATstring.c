# include<stdio.h>
# include<string.h>

int main (){
    
    char arr[199] = "my self gabar ";// size matter here if arr is smaller then _arr then error occur 
    char _arr[] = "my self bandar";
    
     strcat(arr, _arr);// concatenates yhe words withe each other
     puts(arr);



    return 0 ;
}