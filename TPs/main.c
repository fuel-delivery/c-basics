#include <stdio.h>
int main(){
	int a,b;
	printf("entrer a\n");
	scanf("%d",&a);
	printf("entrer b\n");
	scanf("%d",&b);
		if(a==b){
	printf("Egalité");
	}else if(a>b){
	printf("supériorité");
	}else
	printf("infériorité");
return 0;
}
