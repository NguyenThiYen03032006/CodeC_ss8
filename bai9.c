#include<stdio.h>
int main(void){
    int arr[]={1,2,3,2,1,5,2};
    int max_count=0, b=0;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        int count=0;
        for(int j=0;j<sizeof(arr)/sizeof(int); j++){
            if( arr[i]==arr[j]){
                count++;
            }
        }
        if(max_count<count){
            max_count=count;
            b= arr[i];
        }
    }
    printf("phan tu xuat hien nhieu nhat trong mang la:%d\n", b);
    return 0;
}
