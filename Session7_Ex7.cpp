#include<stdio.h>
int main(){
	int n,arr[n],n2,length,k=0;
	printf("Nhap so phan cua mang:");
	scanf("%d",&n);
	printf("Nhap phan tu la so le:\n");
	for(;;){
		scanf("%d",&n2);
		if(n2%2==0){
			printf("Nhap lai phan tu do:");
		}else{
			arr[k]=n2;
			length++;
			k++;
		}
		if(length==n){
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
