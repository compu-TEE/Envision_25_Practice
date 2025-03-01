// Make sure program prints all even numbers from 1 to 40

#include <stdio.h>

int main(){
    int even;
    for(int i = 2; i <= 40; i+=2){
        even=i;
        printf("%d\t", even);
    }
    printf("\n");
    return 0;
}
