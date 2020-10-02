#include <stdio.h>
#include <cmath>

int main(){
	float a,b,d;
	int c;
	printf ("Nhap Tien Can Gui: ");
	scanf("%f",&a);
	printf("Nhap Tien Lai Hang Nam: ");
	scanf("%f",&b);
	printf("Nhap So Nam Gui: ");
	scanf("%d",&c);
	for(int i=1;i<=c;i++){
		d=a*b/100;
		a+=d;
		printf("Nam: \t");
		printf("Lai Suat: \t \t");
		printf("Von: \n");
		printf("%d \t \t %f \t %f \n",c,d,a);
	}
}

