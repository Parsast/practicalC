#include<stdio.h>

void shift_element_by_gap( unsigned int gap, int *pElement){

    for (int *j=pElement; *(pElement) < *(pElement-gap); j=j-gap){
        int temp  = *(j-gap);
        *(j-gap) = *j;
        *j = temp;

    }
}

int main(){
    int arr[5] = {1,5,3,4,2};
    int *pElement = &arr[4];
    shift_element_by_gap(3, pElement);
    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
        printf("\n");
    }
}