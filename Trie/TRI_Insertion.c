#include <stdio.h>
void main(){
	int i,j,tmp,n=5;
	int T[]={-11,25,200,-16,5};
	for(i=1;i<=n-1;i++){
	tmp=T[i];
	j=i;	
	while(j>0 && T[j-1]>tmp){
	T[j]=T[j-1];
			j=j-1;	
		}
	T[j]=tmp;	
	}
	for(i=0;i<=n-1;i++){

	printf("%d <",T[i]);
	}
	}

