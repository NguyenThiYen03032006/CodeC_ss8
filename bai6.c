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
    printf("cac phan tu o duong cheo chinh la :");
    for(int i=0; i<3; i++){
        printf("%d ", arr[i][i]);
        sum+=arr[i][i];
    }
    printf("\nTong cac phan tu do la: %d", sum);
    return 0;
}
