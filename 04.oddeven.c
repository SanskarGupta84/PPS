#include <stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d,&num");
    if(num%2==0){
        printf("The number entered is even");
    }
    else{
        printf("The number entered is odd");
    }
}