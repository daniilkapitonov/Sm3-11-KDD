// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
int sum(int a,int b);
void cash();
int more(int a, int b);
int* p(int *x);

int global_var = 45;

int main()
{
    int res = sum(12,65);
    sum(1,0);
    cash();
    int *ptr = &res; //77
    p(ptr);
    printf("Result %d %d\n", res,more(43,32));
    printf("%d\n",global_var);
    return 0;
}

int* p(int *x){
    *x = 23;
    return x;
    printf("%d\n",global_var);
}

int more(int a,int b){
    printf("%d\n",global_var);
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int sum(int a,int b){
    printf("%d\n",global_var);
    printf("Summ nubers\n");
    //while for if
    return a+b;
}

void cash(){
    printf("Hello, i am someone\n");
}