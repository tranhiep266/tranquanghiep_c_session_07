#include <stdio.h>
int main(){
    int arr[5];
    printf("Nhap 5 phan tu:\n");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Phan tu trong mang: \n");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

