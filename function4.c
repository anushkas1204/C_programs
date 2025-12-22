//function with parameter and with return 
#include<stdio.h>

int square(int num){
    return num * num;
}

int Max(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int num, result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = square(num);
    printf("Square = %d\n", result);

    int maxResult = Max(145, 56);
    printf("Maximum number : %d\n", maxResult);

    return 0;
}

