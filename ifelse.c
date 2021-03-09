#include<stdio.h>

int main(){
    int x;
    printf("Which subjects did you pass\n");
    printf("if passed maths enter the value 1\n");
    printf("if passed science enter the value 2\n");
    printf("if passed maths and science enter the value 3\n");
    scanf("%d",&x);
    if (x==1){
        printf("You won 15 rupees\n");
        printf("Congratulations on winning!!");
    }
    else if (x==2){
        printf("You won 15 rupees\n");
        printf("Congratulations on winning!!");       
    }
    else if (x==3){
        printf("You won 45 rupees\n");
        printf("Congratulations on winning!!");
    }
    else{
        printf("Please enter the correct value");
    }
    return 0;
}

