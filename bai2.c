#include<stdio.h>
int main(void){
    int num[5]={1,2,3,4,5};
    int number;
    printf("moi ban nhap phan tu bat ky ");
    scanf("%d", &number);
    for(int i=0; i<5; i++){
        if(number == num[i]){
            printf("vi tri phan tu trong mang la: num[%d]\n", i);
            break;
        }
    }
    if(number != num[0] && number!=num[1] && number!=num[2] && number!=num[3] && number!=num[4]){
        printf("phan tu khong ton tai trong mang\n");
    }
    return 0;
}
