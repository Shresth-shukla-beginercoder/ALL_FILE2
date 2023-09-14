# include<stdio.h>
int oddnumbers(int arr[], int n);

int main(){int n; 
printf("enter number :");
scanf("%d",&n);

int arr[n];

 printf("number of odd number is :%d", oddnumbers(arr,n));
    return 0 ; 
}
int oddnumbers(int arr[],int n){
    int count = 0;

for(int i = 0 ; i <=n ; i ++){
    if(arr[i] % 2 != 0){
       count++;
    }
    
}return count;
}