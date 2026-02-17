#include <stdio.h> 

int f(int pos,int n,int *arr){
	if(pos>=n) return 0;
	return f(pos+arr[pos],n,arr)+1;
}

int main(void){
	int n=0;
	scanf("%d",&n);
	int arr[n+5];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",f(0,n,arr));
	return 0;
}
