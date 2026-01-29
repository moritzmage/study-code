#include <stdio.h>

int main(){

    int iBoardSize = 8;

    do{
        printf("\nWie groß soll das Feld sein:\t");
        scanf("%d", &iBoardSize);
        if((iBoardSize <= 0) || (iBoardSize>26)){
            printf("\nUngueltiger Wert!!!\n");
        }
    } while((iBoardSize <= 0) || (iBoardSize>26));
    

    printf("    ");
    for(int c = 0; c < iBoardSize; c++){
        printf("%c   ", c+65);
    }

    for(int y = 0; y < iBoardSize; y ++){
        printf("\n  ");
        for(int c = 0; c < iBoardSize; c++){
            printf("+---");
        }
        printf("+\n%d ", y+1);


        for(int x = 0; x < iBoardSize; x++){
            printf("|");
            if((y+x)%2 == 0){
                printf("###");
            }
            else{
                printf("   ");
            }
        }
        printf("| %d", y+1);
    }

    printf("\n  ");
    for(int c = 0; c < iBoardSize; c++){
        printf("+---");
    }

    printf("+\n    ");
    for(int c = 0; c < iBoardSize; c++){
        printf("%c   ", c+65);
    }

    printf("\n\n");

    return 0;
}

// ctrl + f5 to run code