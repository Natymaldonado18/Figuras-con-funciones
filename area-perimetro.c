#include <stdio.h>

// ....................CIRCULO ............................ //
void areacirculo(float radio){
    float area;
    area = 3.1416 *(radio*radio) ;
    printf ("El area del circulo es: %f\n", area);
}

void perimetrocirculo (float radio){
    float perimetro;
    perimetro = 3.1416 *(radio*2) ;
    printf ("El perimetro del circulo es: %f\n", perimetro);
}

void circulo(){
float area, perimetro, radio ;
int opc;
printf("\n");
printf("Figura: CIRCULO\n");
printf("Ingrese el radio del circulo\n");
scanf ("%f", &radio);
printf("Ingrese la opcion que desee escoger:\n");
printf("1.- Area del circulo\n");
printf("2.- Perimetro del circulo\n");
scanf("%d", &opc);
switch (opc){
    case 1:
    areacirculo (radio);
    break;
    case 2:
    perimetrocirculo (radio);
    break;
}
}

// ....................TRIANGULO ............................ //

void areatriangulo(float base, float altura){
    float area;
    printf ("Ingrese la base del triangulo:\n");
    scanf ("%f", &base);
    printf ("Ingrese la altura del triangulo:\n");
    scanf ("%f", &altura);
    area = ((base*altura)/2);
    printf ("El area del triangulo es: %f\n", area);
}

void perimetrotriangulo (float lado){
    float perimetro;
    printf ("Ingrese la medida del lado del triangulo:\n");
    scanf ("%f", &lado);
    perimetro = (lado*3);
    printf ("El perimetro del triangulo es: %f\n", perimetro);
}

void triangulo(){
int opc;
float base, altura, lado;
printf("\n");
printf("Figura: TRIANGULO\n");
printf("Ingrese la opcion que desee escoger:\n");
printf("1.- Area del triangulo:\n");
printf("2.- Perimetro del triangulo:\n");
scanf("%d", &opc);
switch (opc){
    case 1:
    areatriangulo (base, altura);
    break;
    case 2:
    perimetrotriangulo (lado);
    break;
}
}


// ......................RECTANGULO.......................... //

void arearectangulo (float base, float altura){
    float area;
    area = ((base*altura));
    printf ("El area del rectangulo es: %f\n", area);
}

void perimetrorectangulo (float base, float altura){
    float perimetro;
    perimetro = ((base+altura)*2);
    printf ("El perimetro del rectangulo es: %f\n", perimetro);
}

void rectangulo(){
int opc;
float base, altura, lado;
printf("\n");
printf("Figura: RECTANGULO\n");
printf ("Ingrese la base del rectangulo:\n");
scanf ("%f", &base);
printf ("Ingrese la altura del rectangulo:\n");
scanf ("%f", &altura);
printf("Ingrese la opcion que desee escoger:\n");
printf("1.- Area del rectangulo:\n");
printf("2.- Perimetro del rectangulo:\n");
scanf("%d", &opc);
switch (opc){
    case 1:
    arearectangulo (base, altura);
    break;
    case 2:
    perimetrorectangulo (base, altura);
    break;
}
}

// ......................CUADRADO........................ //

void areacuadrado (float lado){
    float area;
    area = lado*lado;
    printf ("El area del cuadrado es: %f\n", area);
}

void perimetrocuadrado (float lado){
    float perimetro;
    perimetro = (lado*lado*lado*lado);
    printf ("El perimetro del cuadrado es: %f\n", perimetro);
}

void cuadrado(){
int opc;
float lado;
printf("\n");
printf("Figura: CUADRADO\n");
printf ("Ingrese la medidada del lado del cuadrado\n:");
scanf ("%f", &lado);
printf("Ingrese la opcion que desee escoger:\n");
printf("1.- Area del cuadrado:\n");
printf("2.- Perimetro del cuadrado:\n");
scanf("%d", &opc);
switch (opc){
    case 1:
    areacuadrado (lado);
    break;
    case 2:
    perimetrocuadrado (lado);
    break;
}
}


// ......................TRAPECIO.......................... //

void areatrapecio (float base_mayor, float base_menor){
    float altura, area;
    printf ("Ingrese la altura del trapecio:\n");
    scanf ("%f", &altura);
    area = ((base_mayor+base_menor)/2)*altura;
    printf ("El area del trapecio es: %f\n", area);
}

void perimetrotrapecio (float base_mayor, float base_menor){
    float lado1, lado2, perimetro;
    printf ("Ingrese la medida del lado 1 del trapecio:\n");
    scanf ("%f", &lado1);
    printf ("Ingrese la medida del lado 2 del trapecio:\n");
    scanf ("%f", &lado2);
    perimetro = (base_mayor+base_menor+lado1+lado2);
    printf ("El perimetro del trapecio es: %f\n", perimetro);
}

void trapecio(){
int opc;
float base_mayor, base_menor;
printf("\n");
printf("Figura: TRAPECIO\n");
printf ("Ingrese la base mayor del trapecio:\n");
scanf ("%f", &base_mayor);
printf ("Ingrese la base menor del trapecio:\n");
scanf ("%f", &base_menor);
printf("Ingrese la opcion que desee escoger:\n");
printf("1.- Area del trapecio:\n");
printf("2.- Perimetro del trapecio:\n");
scanf("%d", &opc);
switch (opc){
    case 1:
    areatrapecio (base_menor, base_mayor);
    break;
    case 2:
    perimetrotrapecio (base_mayor, base_menor);
    break;
}
}

// ....................MENU DE OPCIONES ..................... //

int main (){
    int opcion;
    do{
 printf ("\n");
 printf ("Esciba el numero de la figura a elegir:\n");
 printf ("1.- Circulo\n");
 printf ("2.- Triangulo\n");
 printf ("3.- Rectangulo\n");
 printf ("4.- Cuadrado\n");
 printf ("5.- Trapecio\n");
 printf ("6.- Salir\n");
 scanf("%d", &opcion);

 switch (opcion){
    case 1:
    circulo();
    break;

    case 2:
    triangulo ();
    break;

    case 3:
    rectangulo ();
    break;

    case 4:
    cuadrado ();
    break;

    case 5:
    trapecio ();
    break;

    case 6:
    printf ("FIN DEL PROGRAMA");
    default:
    break;
}
} while (opcion!=6);
}
