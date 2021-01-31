#include<stdio.h>
#define Pi 3.14 //float pi=3.14; ou const pi=3.14;
float Circonference(float Rayon){
	float c;
	c=2*Pi*Rayon; 
	return c; //float c=2*Pi*Rayon return c;
}
float SurfaceCercle(float Rayon){
	return Pi*Rayon*Rayon;
}
float SurfaceDisque(float Rayon,float h){
	float Somme=0;
	Somme =2*SurfaceCercle(Rayon)+Circonference(Rayon)*h;
	return Somme;
}
float Menu(){
	int Choix;
	printf("<<<<<<<<<<<Calculateur Géometrique>>>>>>>>>>\n");
	printf("tapez 1 pour calculer Circonference\n");
	printf("tapez 2 pour calculer Surface du Cercle\n");
	printf("tapez 3 pour calculer SurfaceDisque\n");
	printf("Choisir : ");
	scanf("%d",&Choix);
	return Choix;
}
void main(){
	int Choix=Menu();
	float h=0;
	float Rayon=0;
	printf("Donner le rayon :");
	scanf("%f",&Rayon);
	if(Choix==1){
	printf("le Circonference est : %f",Circonference(Rayon));
	}
	else if(Choix==2){
		printf("le Surface du Cercle est : %f",SurfaceCercle(Rayon));
		}
		else if(Choix==3){
		printf("Donner le Hauteur du Disque : ");
		scanf("%f",&h);
		printf("le Surface du Disque est : %f", SurfaceDisque(Rayon,h));
		}
	}
 
 
