#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define SIZE 15

int main() {
    char text[200];
    int digits = 0, words=  0;
    printf("Enter words and digits");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text,"\n")] = '\0';

    for (int i=0; text[i]!='\0';i++){
        if (isdigit(text[i])) digits++;
    }

    int cash=0;
    for (int i=0; text[i]!='\0';i++){
        //if (text[i] == ' ' || text[i] == '.' ||text[i] == ','||isdigit(text[i])){
        //if (!isdigit(text[i])){ для поиска чисел
        if (!isalpha(text[i])){ //второй вариант для слов
            if (cash!=0){
                words++;
                cash =0;
                }
            }else{
                cash++;
            }
        }  
    if (cash!=0){
        words++;
        cash =0;
    }          
    printf("Digits - %d \n", digits);
    printf("Words - %d \n", words);
    
    return 0;
}