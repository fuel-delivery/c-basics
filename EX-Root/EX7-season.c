#include <stdio.h>
void main() {
	int n;
	printf("entrer un nombre du mois:\n");
	scanf("%d",&n);
	while((n<1)||(n>12)){
		if(n>12)
			printf("c'est pas un mois\n");
		else if(n<1)
		printf("c'est pas un mois!");
		scanf("%d\n",&n);
		}
	switch(n){
		break;
		case 1:
		case 2:
		case 3:
			printf("la saison est l'hiver");
		break;
		case 4:
		case 5:
			printf("la saison est le printemps");
		break;
		case 6:
		case 7:
		case 8:
			printf("la saison est l'ete");
		break;
		case 9:
		case 10:
		case 11:
		case 12:
			printf("la saison est l'automne");
			}
}
