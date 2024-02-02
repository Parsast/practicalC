#include <stdio.h>

int lastFourBitsOn(int val){
    int masked = (val & 0xF);
    if (masked==0x7 || masked==0xB || masked==0xD || masked==0xE || masked==0XF){
        return 1;
    }
    return 0;
}

int reverse(int val){
    int reversed = ((val & 0xFF00)>> 8) | ((val&0x00FF) << 8);
    return reversed;

}

int main(){
    int val = 0xCAFE;
    if (lastFourBitsOn(val)){
        printf("At least three of the last 4 bits of %d is on \n", val);
    }

    int reversed = reverse(val);
    printf("The reversed form of %x is %x\n",val,reversed); 
    return 0;
}