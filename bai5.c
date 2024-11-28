#include<stdio.h>
int main(void){
    int row, col, sum=0;
    printf("moi ban nhap vao so hang ");
    scanf("%d", &row);
    printf("moi ban nhap vao so cot ");
    scanf("%d", &col);
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("moi ban nhap phan tu trong hang %d cot %d:", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for( int i=0;i< row; i++){
        for(int j= 0; j<col; j++){
                if(i==0 || i==(row -1)){
                printf("%d ", arr[i][j]);
                    sum+= arr[i][j];
                }else{
                    if (j==0 || j==(col-1)){
                        printf("%d ", arr[i][j]);
                        sum+= arr[i][j];
                    }else{
                        printf("  ");
                    }
                }
        }
        printf("\n");
    }
    printf("tong cac phan tu o bien la: %d\n", sum);
    return 0;
}


