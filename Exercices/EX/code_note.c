#include <stdio.h>
#define MAX 100
void SaisirEleve(int code[MAX],float note[MAX],int position) {
	printf("entrer le code du position %d :",position);
	scanf("%d",& code[position]);
		printf("entrer la note du position %d :",position);
	scanf("%d",& note[position]);
}
void Affichage(int code[],float note[],int Taille){
	int i;
	for(i=0;i<Taille;i++){
		printf("%d :",code[i]);
		printf(" %d \n",note[i]);
	}
}
void main(){
	int Taille = 30;
	float note[MAX];
	int code[MAX];
	int position;
	int i;
	for(i=0;i<Taille;i++){
	printf("entrer la position");
	scanf("%d",position);
	SaisirEleve(code,note,position);
	}
	Affichage(code,note,Taille);
}
