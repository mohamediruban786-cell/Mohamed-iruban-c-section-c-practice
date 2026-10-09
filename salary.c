#include<stdio.h>
int main(){
    float salary, bonus;
    scanf("%f %f",&salary, &bonus);
    printf("Final salary=%.2f",salary+salary*bonus/100);
    return 0;
}

