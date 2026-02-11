#include <stdio.h>

/*

int main(){
    float fOperand1 = 0;
    char cOperator = ' ';
    float fOperand2 = 0;
    float fResult = 0;

    do{
        printf("\nCalculation:\t");
        scanf("%f%c%f", &fOperand1, &cOperator, &fOperand2);

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
            if (fOperand2==0){
                printf("\nInvalid, Division by 0!!!\n");
                cOperator = ' ';
                break;
            }
            else{
                fResult = fOperand1/fOperand2;    
            }
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

*/

/*--------------------------------------------------------------------------------------------------------------------*/

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

/*--------------------------------------------------------------------------------------------------------------------*/

int main() {
    float fWertA = 0;
    float fWertB = 0;
    char cOperator = ' ';

    printf("\nWert 1: ");
    if(scanf("%f\n", &fWertA) != 1) {
        printf("\nUngueltiger Wert!!!");
    }

    printf("\nWert 2: ");
    if(scanf("%f\n", &fWertB) != 1) {
        printf("\nUngueltiger Wert!!!");
    }

    printf("\nOperation: ");
    if(scanf("%c\n", &cOperator) != 1) {
        printf("\nUngueltiger Operator!!!");
    }
    else if(cOperator != '+' && cOperator != '-' && cOperator != '*' && cOperator != '/') {
        printf("\nUngueltiger Operator!!!");
    }

    switch(cOperator) {
        case '+':
        printf("\n%f\n\n", addition(fWertA, fWertB));
        break;
        case '-':
        printf("\n%f\n\n", subtraction(fWertA, fWertB));
        break;
        case '*':
        printf("\n%f\n\n", multiplication(fWertA, fWertB));
        break;
        case '/':
        printf("\n%f\n\n", division(fWertA, fWertB));
        break;
        default:
        return 1;
        break;
    }

    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------*/

float addition(float a, float b) {
    return a+b;
}

float subtraction(float a, float b) {
    return a-b;
}

float multiplicaton(float a, float b) {
    return a*b;
}

float division(float a, float b) {
    return a/b;
}