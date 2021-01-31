#include <stdio.h>
#define MAX 100
void SaisirEleve(int code[],float note[],int position){
	printf("Entrer le code de l'etudiant : ",position);
	scanf("%d",&code[position]);
	printf("Entrer sa note : ");
	scanf("%f",&note[position]);	
}
void Affichage(int code[],float note[],int Taille){
	int i;
	printf("code\t note\n");
	for(i=0;i<Taille;i++){
		printf("%d\t %f\n",code[i],note[i]);
	}
}
float noteEtudiant(int codeEtd,int code[],float note[],int Taille){
	int i;
	float noteRech = -1.0;
	for(i=0;i<Taille;i++){
		if(code[i]==codeEtd){
			noteRech = note[i];
			break;
		}
	}
	return noteRech;
}
void ModifierNote(int codeEtd,float noteEtd,int code[],float note[],int Taille){
	int i;
	for(i=0;i<Taille;i++){
		if(code[i]==codeEtd){
			note[i]=noteEtd;
			break;
		}
	}
}
void main(){
	int code[MAX];
	float note[MAX],noteRech;
	int nbEtd = 5,i;
	int codeRech;
	for(i=0;i<nbEtd;i++){
	SaisirEleve(code,note,i);
		}
	Affichage(code,note,nbEtd);
	printf("entrer le code d'etudiant : ");
	scanf("%d",&codeRech);
	noteRech=noteEtudiant(codeRech,code,note,nbEtd);
	if(noteRech<0)
	printf("etudiant n'exist pas");
	else{
	printf("sa note est : %f\n",noteRech);
		}
		int CodeETD;
		float NoteETD;
	printf("entrer le code d'etudiant : ");
	scanf("%d",&CodeETD);
	printf("\n");
	printf("entrer Sa note : ");
	scanf("%f",&NoteETD);
	printf("\n");
	ModifierNote(CodeETD,NoteETD,code,note,nbEtd);
	Affichage(code,note,nbEtd);
}
