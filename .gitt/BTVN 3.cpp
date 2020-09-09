#include <stdio.h>
#include <cmath>
int main(){
	int a,b,c,p,S,P;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	if(a+b>c){
		//lan 1
		if(a+c>b){
			//lan 2
			if(b+c>a){
				//lan 3
				P=a+b+c;
				p=(a+b+c)/2;
				S=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("vay chu vi hinh tam giac la: %d",P);
				printf("vay dien tich hinh tam giac la: %d",S);
			}
		}
	}
}
