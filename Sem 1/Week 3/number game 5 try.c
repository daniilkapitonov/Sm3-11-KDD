
#include<stdio.h>
int A=0;
int B=13;
int C=5;
int main()
{
    printf("Try enter number 1<x<100\n");
    printf("You got 5 try\n");
    while (A!=B && C!=0){
        printf("Enter new number\n");
        scanf("%d", &A);
        C=C-1;
    }
    printf("Number was %d your number %d \n",B,A);
    printf("You use %d try \n",5-C);
    return 0;
}
