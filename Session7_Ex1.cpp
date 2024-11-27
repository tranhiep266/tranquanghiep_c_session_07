#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Phan tu trong mang: ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\nDo dai cua mang: %d",length);
	return 0;
}
