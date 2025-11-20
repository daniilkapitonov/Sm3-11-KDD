#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int *start = arr;
    int *end = arr+6;

    while(start<end){
        int cash = *start;
        *start = *end;
        *end = cash;

        start++;
        end--;
    }

    for (int i=0;i<7;i++){
        printf("%d ", arr[i]);
    }
   
    
   return 0;
}