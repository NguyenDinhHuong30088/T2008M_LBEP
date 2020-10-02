#include<stdio.h>
int fibonacci(int n){
    int F0=0;
    int F1=1;
    int Fi=1;
    int i;
    if(n<0){
        return 0;
    }else if(n == 0 || n == 1){
        return n;
    }else {
        for(i=2;i<n;i++){
            F0=F1;
            F1=Fi;
            Fi=F0+F1;
        }
    }
    return Fi;
}
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
 	int i;
    printf("Program shows fibonacci sequence from 1 to 100 : \n");
    for(i=0;i<12;i++){
        printf("%d ",fibonacci(i));
    }
}
