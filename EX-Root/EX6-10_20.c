#include <stdio.h>
void main() {
	int n;
	printf("saisir un nombre:");
	scanf("%d",&n);
	while((n<10)||(n>20)){
		if(n<10){
		
			printf("plus grand!");
			}else if(n>20)
			printf("plus petit!");
	
	scanf("%d",&n);
	}	
printf("correct");

}
