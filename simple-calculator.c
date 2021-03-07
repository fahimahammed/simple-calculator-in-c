///simple calculator in C.
#include<stdio.h>
int main(){
    int choice;
    double firstNum, secondNum, result;
    printf("========= Simple Calculator =========\n\n");
    printf("You have following choices:\n");
    printf("-------------------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("-------------------------------------\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    printf("\n-------------------------------------\n");
    if(choice > 4){
        printf("\nYou have entered a wrong choice.\n\n");
        printf("-------------------------------------\n");
    }
    else{
        printf("\nEnter your first number: ");
        scanf("%lf",&firstNum);
        printf("\nEnter your second number: ");
        scanf("%lf",&secondNum);
        printf("\n-------------------------------------\n");
    switch(choice){
    case 1:
        result = firstNum + secondNum;
        break;
    case 2:
        result = firstNum - secondNum;
        break;
    case 3:
        result = firstNum * secondNum;
        break;
    case 4:
        if(secondNum == 0){
            printf("\nDivision is not possible\n");
            break;
        }
        else{
            result = firstNum / secondNum;
            break;
            }
        }
        printf("\nResult: %.2lf\n",result);
        printf("\n-------------------------------------\n");
    }

    return 0;
}
