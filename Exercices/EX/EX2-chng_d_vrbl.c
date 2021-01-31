#include <stdio.h>
void main() {
	int a,b,t; 
	printf("entrer deux variable a et b:");
	scanf("%d%d",&a,&b);
	t=a;a=b;b=t;
	printf("le valeur de a:%d\n",a);
	printf("le valeur de b:%d",b);
}
