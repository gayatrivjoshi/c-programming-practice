// this program adds up two numbers by taking input from user
#include<stdio.h>

int main(){
    int a , b , sum;
    printf("Enter an integer\n");
    scanf("%d",&a);
    printf("Enter another integer\n");
    scanf("%d",&b);
    sum = a + b;
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;
}
