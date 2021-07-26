#include <stdlib.h>
#include <stdio.h>

unsigned long long int fatt;
int input, prec, num;

int main() {
    printf("Inserisci numero: ");
    scanf("%d", &num);
    input = num;
    fatt = input;
    if (input <= 20)
    {
        for (int i = num; i > 1 ; i--){
         prec = num-1;
         fatt *= prec;
         num = prec;
        }
        printf("Il fattoriale di %d è %lld\n", input, fatt);
    } else
    printf("Il numero deve essere minore o uguale a 20!\n");
    
    
    
}