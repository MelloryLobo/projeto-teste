#include <stdio.h>
#include <math.h>


float calcularDistancia (int  x1, int y1, int x2, int y2)
{
	return sqrt( pow (x2 - x1, 2) + pow(y2 - y1, 2));
}
//main

int main()
{
	int x1,x2,y1,y2;
	float distancia;
	
	printf("Informe as coordenadas para o primeiro ponto:");
	scanf("%i %i",&x1,y1);
	
	printf("Informe as coordenadas para o segundo ponto:");
	scanf("%i %i",&x2,y2);
	
	distancia =  calcularDistancia(x1,y1,x2,y2);
	
	printf("Distancia: %f",distancia);
}
#incluide <stdio.h>
#include <math.h>


float calcularDistancia (int  x1, int y1, int x2, int y2)
{
	return sqrt( pow (x2 - x1, 2) + pow(y2 - y1, 2));
}
//main

int main()
{
	
	int x1,x2,y1,y2;
	float distancia;
	
	printf("Informe a cordenada do ponto A");
	scanf("%i %i",&x1,&y1);
	printf("Informe a cordenada do pinto B");
	scanf("%i %i",&x2,&y2);
}
