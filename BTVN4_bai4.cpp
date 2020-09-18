#include <stdio.h>
# include <math.h>
int main(){
	int a,b,c,s,p;	
	do{		
		printf ("Nhap vao canh a: ");
		scanf ("%d",&a);

		printf ("Nhap vao canh b: ");
		scanf ("%d",&b);
	
		printf ("Nhap vao canh c: ");
		scanf ("%d",&c);
			
		if (a+b<c || a+c<b || c+b<a || a<1 || b<1 || c<1 ) {
			
				printf ("Ban da nhap sai, vui long nhap lai!" );
		}
	}
	while (a+b<c || a+c<b || c+b<a || a<1 || b<1 || c<1 );
	
		p = a+b+c;
		int p2 = p/2 ;
		s = sqrt (p*(p*a)*(p*b)*(p*c));
		printf ("Chu vi cua tam giac la: %d \n Dien tich cua tam giac la: %d",p,s);
	
}
