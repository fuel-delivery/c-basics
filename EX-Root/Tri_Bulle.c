#include <stdio.h>
void main(){
	int T[]={-1,0,1,2,-4};
	int Taille=5;
	int tmp,i;
	int echange;
	do{
		echange=0;
		for(i=0;i<=Taille-2;i++){
			if(T[i]>T[i+1]){
				echange = 1;
				tmp=T[i];
				T[i]=T[i+1];
				T[i+1]=tmp;
				
			}
		}
	}while(echange);
	for(i=0;i<Taille;i++)
	printf("%d ",T[i]);
}
