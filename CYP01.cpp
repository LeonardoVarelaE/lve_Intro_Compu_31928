
#include <stdio.h>

int main ()
{
    int ancho;
    int alto;
    int coordenada_x1;
    int coordenada_x2;
    int coordenada_y1;
    int coordenada_y2;
    float porcentaje_ancho;
    float porcentaje_alto;
    float porcentaje_x;
    float porcentaje_y;
    
    scanf("%i", &ancho);
    scanf("%i", &alto);
    scanf("%f", &porcentaje_x);
    scanf("%f", &porcentaje_y);
    scanf("%f", &porcentaje_ancho);
    scanf("%f", &porcentaje_alto);
 
    coordenada_x1 = porcentaje_x * ancho;
    coordenada_y1 = porcentaje_y * alto;
    coordenada_x2 = coordenada_x1 + ancho * porcentaje_ancho;
    coordenada_y2 = coordenada_y1 + alto * porcentaje_alto;
    
    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, porcentaje_x, porcentaje_y, porcentaje_ancho, porcentaje_alto, coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2);
  
}
