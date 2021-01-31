#include <stdio.h>
void main(){
	int sec, h, m, s;
	printf("Entrer les seconds: ");
	scanf("%d", &sec);
	h=(sec/3600); 
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h)-(m*60));
	printf("%d heures, %d minutes et %d seconds\n",h,m,s);
}
