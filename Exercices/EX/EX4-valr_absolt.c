#include <stdio.h>
void main() {
float n;
printf("entrer un valeur:");
scanf("%f",&n);
if(n>=0){
	printf("|n|=%f",n);
}else{
	printf("|n|=%f",n*(-1));
}
}
