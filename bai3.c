#include<stdio.h>
int main(void){
    int a;
    printf("moi ban nhap vao so hang va cot ");
    scanf("%d", &a);
    int arr[a][a];
    for (int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            arr[i][j]= j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
