#include <stdio.h>
void main(){
	float T[]={0.5,3.2,40,70,45,102};
	float x;
	int i,trouve,n=10;
	i=0;
	trouve=0;
	printf("enter la valeur rechercher :");
	scanf("%f",&x);
	while(i<n && !trouve){
		if(T[i]==x)
		trouve=1;
		i++;
	}
	if(trouve)
	printf("%f exist",x);
	else
	printf("%f n'exist pas",x);
	
}
