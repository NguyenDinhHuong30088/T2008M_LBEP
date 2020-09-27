#include <stdio.h>
#include <math.h>
int DienTichTamGiac (int a, int b, int c){
		float S;
		float p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		return S;
}
int main(){
	int a,b,c;
	do{
	printf("Nhap canh a = ");
	scanf("%d",&a);
	printf("Nhap canh b = ");
	scanf("%d",&b);
	printf("Nhap canh c = ");
	scanf("%d",&c);
	if(a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || a+c<b ){
			printf("Nhap lai !\n");
		}
}while ( a<=0 || b<=0 || c<=0 || a+b<c || a+c<b || a+c<b );
	printf("Dien Tich Cua Tam Giac La : %d",DienTichTamGiac(a,b,c));
}
