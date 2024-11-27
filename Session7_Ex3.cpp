#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int even=0;
	printf("Nhap 5 phan tu:\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
			even=1;
		}
	}
	if(!even){
		printf("Mang khong chua so chan");
	}
	return 0;
}
