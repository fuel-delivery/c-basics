#include <stdio.h>
void main(){
float n;
printf("enter un note:");
scanf("%f",&n);
if(n<10){
printf("la mention est faible");
}
else
if(n<12){
   	printf("la mention est passable");}
	else
	if(n<14){
		printf("la mention est bien");}
		else
		if(n<18){
			printf("la mention est trez bien");}
			else{
	printf("la mention est exellent");}
}
