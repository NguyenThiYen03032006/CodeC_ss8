#include<stdio.h>
int main(void){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n\n");
    }
    printf("cac phantu o duong cheo phu la ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(j==(3-i-1)){
                printf("%d ", arr[i][j]);
                sum+=arr[i][j];
            }
        }
    }
    printf("\ntong cac phan tu do la: %d\n", sum);
    return 0;
}
