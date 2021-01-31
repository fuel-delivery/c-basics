#include <stdio.h>
void main(){
	float T[]={0.5,3.22,40,70,85,102,201,700,1000,2020};
	float x;
	int trouve,n=10;
	int sup,inf,mil;
	trouve=0;
	inf=0;
	sup=n-1;
	printf("enter la valeur rechercher :");
	scanf("%f",&x);
	while((inf<=sup) && (trouve==0)){
	mil=(inf+sup)/2;
	if(T[mil]==x){
	trouve=1;
	}else if(T[mil]>x){
	sup=mil-1;
	}else
	inf=mil+1;
}
	if(trouve==1)
	printf("%0.2f existe",x);
	else
	printf("%0.2f n'existe pas",x);	
}
