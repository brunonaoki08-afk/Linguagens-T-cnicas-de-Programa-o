#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415192
int main(int argc,char*argv[]){
	float r, area_circulo, r2, area_trapezio, B, b, h ;
	printf("Insira o raio R do circulo"); scanf("%f",&r);
	printf("Insira o valor de B do trapézio"); scanf("%f", &B);
	printf("Insira o valor de b do Trapézio"); scanf("%f", &b);
	printf("Insira o valor de h do Trapézio"); scanf("%f", &h);
	r2=pow(r,2); r2=r*r; area_circulo=pi*r2;area_circulo=pi*(r*r);area_circulo=M_PI*pow(r,2);
	area_trapezio=(B+b)*h/2.0;
	printf("A area do Circulo de raio R %f =%f",r,area_circulo);
	printf("A area do Trapezio deu %f\n", area_trapezio);
	return 0;
	
	
}
