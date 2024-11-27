#include<stdio.h>
int main(){
	int n,arr[n],i,k;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	printf("Nhung phan tu co trong mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Nhung phan tu trong mang la so nguyen to la:\n");
	for(k=0;k<n;k++){
		int temp=0;
		for(i=1;i<=n;i++){
		if(arr[k]%i==0){
			temp +=1;
		}
	    }if(temp>2 || arr[k] <2){
		printf(" ");
    	}else{
		printf("%d ", arr[k]);
	}
	}
	return 0;
}
