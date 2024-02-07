#include<stdio.h>

void shift_element(int *pElement){
    while(pElement != NULL &&((pElement-1) != NULL) && (*(pElement-1) > *pElement)){
       
          int temp = *pElement;
            *pElement = *(pElement-1);
            *(pElement-1) = temp;
            pElement--;
        
        
    }
}
void InsertionSort(int *arr, int len){
    int *i;
    i = arr;
    while (i != NULL && i < arr + len)
    {
        if (*(i+1) < *i)
        {
            shift_element(i+1);
        }
        i++;
    }
    
    
}

int main(){
    int arr[4] = {1, 3, 4 , 2};
    InsertionSort(arr, 4);
    for(int i = 0; i < 4; i++){
        printf("%d, \n", arr[i]);
    }
    return 0;


}