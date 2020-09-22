#include <stdio.h>
int main(){
	int N;
	printf("Nhap N = ");
	scanf("%d",&N);
	int ary[N],i,min;
	for(int i=0;i<N;i++){
		printf("Nhap Phan Tu Thu %d: ",i);
		scanf("%d",&ary[i]);
		if(ary[i]>0){
			min = ary[i];
		}
	}
	for(int i=0;i<N;i++){
		if(ary[i]>0 && ary[i]<min)
		min = ary[i];
	}
	printf("So Luong Duong Nho Nhat La: %d",min);
}
