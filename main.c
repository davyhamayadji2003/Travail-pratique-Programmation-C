#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "library.c"


int main( void ) {
    int a,b,m,n,x,y,z;
    float s,t;
    char var1, var2;
 int result= power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
    Bonjour();
    inverserEntier(567);

    printf("Saisir deux reels\n");
    scanf("%f%f",&s,&t);
    Somme_Produit(s,t);

    printf("Saisir z\n");
    scanf("%d",&z);
    Parite(z);

    printf("Saisir a et b\n");
    scanf("%d%d",&a,&b);
    Comparaison(a,b);

    printf("Saisir x,y et z\n");
    scanf("%d%d%d",&x,&y,&z);
    croissant(x,y,z);

    printf("Entrez le premier caractere : \n");
    scanf(" %c", &var1);
    printf("Entrez le deuxieme caractere : \n");
    scanf(" %c", &var2);
    printf("Avant permutation : var1 = %c, var2 = %c\n", var1, var2);
    permuter(&var1, &var2);
    printf("Apres permutation : var1 = %c, var2 = %c\n", var1, var2);

    printf("Saisir m et n\n");
    scanf("%d%d",&m,&n);
    Addition(m,n);

 return EXIT_SUCCESS;
}

