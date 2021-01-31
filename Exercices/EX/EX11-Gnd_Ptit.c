#include <stdio.h>
void main(){
	int n;
	printf("entrer un nombre:\n");
	scanf("%d",&n);
	while((n<10)||(n>20))
		if(n<10){
			printf("plus grand!\n");
		    scanf("%d",&n);
		}
		else if(n>20){
			printf("plus petit!\n");
			scanf("%d",&n);
			}
			else((n>10)&&(n<20));
			printf("correct");
}
