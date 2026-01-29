#include <stdio.h>

int main(){
    float fOperand1 = 0;
    char cOperator = ' ';
    float fOperand2 = 0;
    float fResult = 0;

    do{
        printf("\nCalculation:\t");
        scanf("%f", &fOperand1);
        scanf("%c", &cOperator);
        scanf("%f", &fOperand2);

        switch(cOperator){
            case '+':
            fResult = fOperand1+fOperand2;
            break;
            case '-':
            fResult = fOperand1-fOperand2;
            break;
            case '*':
            fResult = fOperand1*fOperand2;
            break;
            case '/':
            fResult = fOperand1/fOperand2;
            break;
            case '%':
            fResult = (int)fOperand1%(int)fOperand2;
            break;
            default:
            printf("\nInvalid Operation!!!\n");
            break;
        }
    }while (cOperator!='+' && cOperator!='-' && cOperator!='*' && cOperator!='/' && cOperator!='%');

    printf("\n%f %c %f = %f\n\n", fOperand1, cOperator, fOperand2, fResult);

    return 0;
}