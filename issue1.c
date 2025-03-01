// Make sure the function reverse actually reverses the string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reverse(char* str){
    int size = strlen(str);
    char* rev = (char*)malloc(size+1);
    for(int i=0;i<size;i++){
        rev[i] = str[size-i-1];
    }
    rev[size]='\0';
    return rev;
}

int main(){
    char str[] = "Forward";
    char* reversedStr = reverse(str);
    printf("%s\n", reversedStr);
}
