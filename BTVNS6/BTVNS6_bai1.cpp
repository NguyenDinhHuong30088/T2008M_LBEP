#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int ary[n],i,Sl;
	for(int i=0;i<n;i++){
		printf("Nhap Phan Tu Thu %d:",i);
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++){
		if(ary[i]%2 !=0){
			Sl += ary[i];
		}
	}
	printf("So Le Cuoi Cung La: %d",Sl);
}
