
#include<stdio.h>
int A=0;
int B=13;
int main()
{
    printf("Try enter number 1<x<100\n");
    while (A!=B){
        printf("Enter new number\n");
        scanf("%d", &A);
    }
    printf("You win! Number was %d \n ",B);
    return 0;
}
