#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE open_file();
int close_file(FILE *file);

int main(void){
    char c_read_letter;
    char c_read_array[64];
    char c_write_array1[32] = {"Hello World with fputc!\n"};
    char c_write_array2[32] = {"Hello World with fputs!\n"};
    char c_write_array3[32] = {"Hello World with fprintf!\n"};



    FILE *datei = fopen("text_files/section_1_read.txt", "w+"); // oeffnet Datei; NULL bei Fehler; w+ -> lesen & schreiben, datei wird gelehrt und zur not erstellt
    if(datei == NULL) {
        printf("Error while opening File...\n-----------------------------------------");
        return 1;
    }
    else {
        printf("File opened successfully...\n-----------------------------------------");
    }


    
    printf("\nWriting with fputc...");
    rewind(datei);
    for(int i=0; c_write_array1[i] != '\0'; i++) {
        fputc(c_write_array1[i], datei);
    }
    printf("\n-----------------------------------------");



    printf("\nWriting with fputs...");
    fputs(c_write_array2, datei);
    printf("\n-----------------------------------------");



    printf("\nWriting with fprintf...");
    fprintf(datei, "%s", c_write_array3);
    printf("\n-----------------------------------------");



    printf("\nReading file with fgets:\n");
    rewind(datei);
    while(fgets(c_read_array, sizeof(c_read_array), datei) != NULL) {
        printf( "%s", c_read_array);
    }
    printf("\nEnd of file reached...\n-----------------------------------------");



    printf("\nReading file with fgetc:\n");
    rewind(datei);
    for(int i=0; ((c_read_letter = fgetc(datei)) != EOF); i++) {
        printf("%c", c_read_letter);
    }
    printf("\nEnd of file reached...\n-----------------------------------------");



    printf("\nReading file with fscanf:\n");
    rewind(datei);
    while(fscanf(datei, "%c", &c_read_letter) == 1) {
        printf("%c", c_read_letter);
    }
    printf("\nEnd of file reached...\n-----------------------------------------");



    int success = fclose(datei); // schließt Datei; 0 bei Erfolg, sonst -1
    if(success == 0) {
        printf("\nFile closed successfully...\n");
    }
    else {
        printf("\nError while closing file...\n");
    }


    
    return 0;
}