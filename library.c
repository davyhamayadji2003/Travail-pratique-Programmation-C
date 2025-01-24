#include "library.h"
#include <string.h>
#include <stdio.h>
#include <math.h>


unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}

int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
void Bonjour(){
    printf("Bonjour\n");
}
void inverserEntier() {
    int nombre, centaine, dizaine, unite, inverse;

    printf("Entrez un entier de 3 chiffres : \n");
    scanf("%d", &nombre);


    if (nombre < 100 || nombre > 999) {
        printf("L'entier doit être constitué de 3 chiffres.\n");
        return;
    }

    centaine = nombre / 100;
    dizaine = (nombre / 10) % 10;
    unite = nombre % 10;


    inverse = unite * 100 + dizaine * 10 + centaine;


    printf("L'inverse de %d est : %d\n", nombre, inverse);
}
float Somme_Produit(float a, float b){
    float Somme= a+b;
    float Produit=a*b;
    printf("La somme est %.3f\n",Somme);
    printf("Le produit est %.3f\n",Produit);
    return (Somme,Produit);
}
void Parite(int n){
    char P,I;

    if (n%2==0){
        printf("Entier pair\n");

    }
    else{
        printf("Entier impair\n");

    }
}
void Comparaison(int a, int b){
    if (a>b)
        printf("%d>%d\n",a,b);
    else
        if (a<b)
            printf("%d<%d\n",a,b);
        else
            printf("%d=%d\n",a,b);
}

void croissant(int a, int b, int c){
    if(a>b && a>c){
        if (b>c)
            printf("%d,%d,%d\n",c,b,a);
        else printf("%d,%d,%d\n",b,c,a);
    }
     if(c>b && c>a){
        if (b>a)
            printf("%d,%d,%d\n",a,b,c);
        else printf("%d,%d,%d\n",b,a,c);
    }
     if(b>a && b>c){
        if (a>c)
            printf("%d,%d,%d\n",c,a,b);
        else printf("%d,%d,%d\n",a,c,b);
    }

}
void permuter(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int Addition(int a,int b){
    return (a+b);
}
