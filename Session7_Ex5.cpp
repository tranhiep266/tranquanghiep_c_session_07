#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int max=arr[0],min=arr[0];
	for(int i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("Phan tu lon nhat:%d\n",max);
	printf("Phan tu nho nhat:%d",min);
	return 0;
}
