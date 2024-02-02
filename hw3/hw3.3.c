#include <stdio.h>
int factorial(int n){
    int i = 1;
    int result = 1;
    while(i<= n){
        result *= i;
        i++;
    }
    return result;
}
int main(){
    int m =  factorial(8);
}