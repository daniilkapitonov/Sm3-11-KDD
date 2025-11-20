#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


int main() {
    char names[5][20] = {"Pheoktist","Maxim","Gerda","Irina","Alex"};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (strcmp(names[j],names[j+1])>0){
                char cash[20];
                strcpy(cash,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],cash);
            }
        }
    }

    for (int i=0;i<5;i++){
        printf("%s ", names[i]);
    }
    return 0;
}