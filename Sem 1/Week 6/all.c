#include <stdio.h>
#include <stdlib.h>
#include <time.h>  


int main() {
    int n=7;
    int mass[n][n];
    srand(time(NULL)); //Генерация массива
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            mass[i][j] = rand() % 9 + 1;
            printf("%d ", mass[i][j]);
        }
        printf("\n");
    }
    printf("\n");printf("\n"); //главная диагональ
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                mass[i][j] = 0;
            }
            printf("%d ", mass[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");printf("\n"); //побочная диагональ
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            if (i+1==n-j){
                mass[i][j] = 0;
            }
            printf("%d ", mass[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");printf("\n"); //элементы под диагоналями
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            if (i+1>n-j && i>j){
                mass[i][j] = 1;
            }
            printf("%d ", mass[i][j]);
        }
        printf("\n");
    }
    
	// your code goes here

}

