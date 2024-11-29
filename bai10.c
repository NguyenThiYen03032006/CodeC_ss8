#include<stdio.h>
int main(void){
    int arr[]={2,3,1,5,5,2,1,5,3,3,2};
    int num[50];
    int max_count=0, index=0;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        int count=0;
        for(int j=0;j<sizeof(arr)/sizeof(int); j++){
            if( arr[i]==arr[j]){
                count++;
            }
        }
        if(max_count<count){
            max_count=count;
        }
    }
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        int count=0;
        for(int j=0;j<sizeof(arr)/sizeof(int); j++){
            if( arr[i]==arr[j]){
                count++;
            }
        }
        if(max_count==count){
            int flag=-1;
            for(int k=0; k<50; k++){
                if(arr[i]==num[k]){
                    flag=1;
                    break;
                }
            }
            if( flag==-1){
                num[index]=arr[i];
                index++;
            }
            flag=-1;
        }
    }
    for(int i=0; i<index; i++){
        printf("phan tu xuat hien nhieu nhat la: %d\n", num[i]);
    }
    
    return 0;
}

