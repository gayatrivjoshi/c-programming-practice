#include<stdio.h>
int main(){
    int n1 , n2 , option;
    do
    {
        printf("\nChoose your option\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&option);
        // if(option==5)
        // {
        //     break;
        // }

    switch (option)
    { 
        case 1:
            printf("Enter two integers: ");
            scanf("%d %d", &n1 ,&n2 );
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;

        case 2:
            printf("Enter two integers: ");
            scanf("%d %d", &n1 ,&n2 );
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case 3:
            printf("Enter two integers: ");
            scanf("%d %d", &n1 ,&n2 );
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case 4:
            printf("Enter two integers: ");
            scanf("%d %d", &n1 ,&n2 );
            if (n2==0)
            {
                printf("Zero division error, denominator cannot be 0"); 
            }
            else
            {
                printf("%d / %d = %d",n1, n2, n1/n2);
            }
            break;

        default:
            printf("Error! option is not correct");
            break;

    }
    }while (option!=5);

    return 0;
}