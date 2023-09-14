# include<stdio.h>
// marks with percentage only 5 subject 
int totalmarksper(int subject);
int main (){
    int a;
totalmarksper(a);
    return 0 ;

}
int totalmarksper(int subject){
    int subject1;
    printf("enter marks in subject 1:");
    scanf("%d",&subject1);
int subject2;
    printf("enter marks in subject 2:");
    scanf("%d",&subject2);
int subject3;
    printf("enter marks in subject 3:");
    scanf("%d",&subject3);
int subject4;
    printf("enter marks in subject 4 :");
    scanf("%d",&subject4);
int subject5;
    printf("enter marks in subject 5:");
    scanf("%d",&subject5);
int totalmarks = subject1+subject2+subject3+subject4+subject5;
printf("total number :%d\n", totalmarks);

int percentage = totalmarks/5;
printf("percentage is :%d\n", percentage);


}

   

