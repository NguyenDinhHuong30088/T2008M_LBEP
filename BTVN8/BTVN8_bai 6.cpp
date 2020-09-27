#include <stdio.h>
int bcnn(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
		a = a - b;
        }else{
            b -= a;
        }
    }
    return a;
}
int main(){
    int a,b;
    printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	int tich=a*b;
	float bcnn = tich/a;
	printf("Boi Chung Nho Nhat Cua 2 So La: %2f\n",bcnn);
}
