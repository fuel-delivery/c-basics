#include <stdio.h>
void main() {
	int i,s,n;
	printf("donner la valeur de n:");
	scanf("%d,&n");
	s=0;
	for(i=1;i<n;){
		s=s+i;
		i=i+1;
	}
	printf("la somme des %d, premiersentier est %d",n,s);
}
