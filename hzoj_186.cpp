#include <stdio.h>
#include <string.h>

int f(int n,int pos,int *arr){
	if(pos>arr[0]) return 0;
	if(arr[pos]>=n) return 1;
	return f(n-arr[pos],pos+arr[pos],arr)+1;
}

int main(void){
	int n=0;
	scanf("%d",&n);
	int arr[n+5];
	memset(arr,0,sizeof(int)*(n+5));
	arr[0]=n;
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
	printf("%d",f(n,1,arr));
	return 0;
}
