#include<stdio.h>
int main(void){
    int array[5] = {1,2,3,4,5};
    for(int i=4; i>=0; i--){
        printf("%d ", array[i]);
    }
    return 0;
}
