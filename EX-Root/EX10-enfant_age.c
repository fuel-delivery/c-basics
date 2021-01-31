#include <stdio.h>
void main() {
	int age;
	printf("entrer l'age de l'enfant:\n");
	scanf("%d",&age);
	if(age>=12){
		printf("Catégorie Cadet");
	}else if(age>=10){
		printf("Catégorie Minime");
	}else if(age>=8){
		printf("Catégorie Pupille");
	}else(age>=6)
	printf("Catégorie Poussin");	
}
