#include <stdio.h>
void main() {
	int age;
	printf("entrer l'age de l'enfant:\n");
	scanf("%d",&age);
	if(age>=12){
		printf("Cat�gorie Cadet");
	}else if(age>=10){
		printf("Cat�gorie Minime");
	}else if(age>=8){
		printf("Cat�gorie Pupille");
	}else(age>=6)
	printf("Cat�gorie Poussin");	
}
