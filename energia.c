#include <stdio.h>
#include <stdlib.h>
int scelta;
float m, h, u, vk, vm, k;
int main() {
	printf("-----------------------------------------------------\n");
	printf("-       Calcolo energia potenziale / cinetica       -\n");
	printf("-                  by LukeStarGeek                  -\n");
	printf("-----------------------------------------------------\n");
	printf("1. Energia potenziale\n");
	printf("2. Energia cinetica\n");
	printf("Calcolo: ");
	scanf("%d", &scelta);
	printf("\nInserisci la massa: ");
	scanf("%f", &m);
	if (scelta == 1) {
		printf("\nInserisci l'altezza: ");
		scanf("%f", &h);
		u = m * 9.81 * h;
		printf("Energia potenziale: %f J", u);
	} else if (scelta == 2) {
		printf("\nInserisci la velocità: ");
		scanf("%f", &vk);
		vm = vk / 3.6;
		k = 0.5 * m * vm * vm;
		printf("Energia cinetica: %f J", k);
	}
}
