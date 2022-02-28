#include <stdio.h>

int num1;
int num2; //declarando variable

int main (){
    printf ("enter num1\n\tnum1");
    scanf("%d", &num1);
    printf ("enter num2\n\tnum2");
    scanf("%d", &num2);
    //procesos
    int sum = num1 + num2;
    printf("suma= %d\n" , sum);
    return 0;
}