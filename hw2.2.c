#include <stdio.h>

int isLower(char chr){
    if (chr >= 'a' && chr <= 'z'){
        return 1;
    }

    return 0;
}

int isUpper(char chr){
    if (chr >= 'A' && chr <= 'Z'){
        return 1;
    }

    return 0;
}

int isDigit(char chr){
    if (chr >= '1' && chr <= '9'){
        return 1;
    }

    return 0;
}

int isWhitespace(char chr){
    if (chr == '\n' || chr <= '\t' || chr == ' '){
        return 1;
    }

    return 0;
}

int main(){
    char chr;
    printf("please enter one charachter: \n");
    scanf("%c", &chr);
    if (isLower(chr)){
        printf("%c is lower case\n", chr);
        printf("addres of the %c is %p.\n", chr, (void *)&chr);
    }
    else if(isUpper(chr)){
        printf("%c is upper case,\n", chr);
        printf("addres of the %c is %p.\n", chr, (void *)&chr);
    
    }else if(isDigit(chr)){
        printf("%c is digit,\n", chr);
        printf("addres of the %c is %p.\n", chr, (void *)&chr);
    
    }else if(isWhitespace(chr)){
        printf("%c is white space,\n", chr);
        printf("addres of the %c is %p.\n", chr, (void *)&chr);
    
    }else{
        printf("it's another charachter");
    }

}