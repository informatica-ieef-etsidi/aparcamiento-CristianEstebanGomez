#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int p1 = 0, p2 = 0;
	char opcion, matricula1[8], matricula2[8],opcion2;

	

	while (1) {
		
		printf("Elige opcion del parking: \n");
		printf("Pulse 'R' para reservar plaza\n");
		printf("Pulse 'A' para abandonar plaza\n");
		printf("Pulse 'E' para ver el estado de aparcamiento\n");
		scanf_s("%c", &opcion, 1);
		getchar();
		system("cls");

		switch (opcion) {
		case 'r':
		case 'R':
			printf(" opcion reservar plaza\n");
			system("pause");
			system("cls");
			if (p1 == 0) {
				printf("Has reservado la plaza 1\n");
				printf("Para registrarlo, introduce tu matricula:\n");
				scanf_s("%s", matricula1, 8);
				getchar();

				
				
					p1 = p1 + 1;
				
			}
			else if (p2 == 0) {
				printf("Has reservado la plaza 2\n");
				printf("Para registrarlo, introduce tu matricula:\n");
				scanf_s("%s", matricula2, 8);
				getchar();

				
				
				
					p2 = p2 + 1;
				
			}
			else {
				printf("no quedan plazas libres, lo sentimos.\n");
			}
			break;
		case 'a':
		case 'A':
			if (p1 == 1 || p2 == 1) {
				printf("¿En que plaza estaba, 1(A) o 2(B)?\n");
				scanf_s("%c", &opcion2);
				getchar();

				switch (opcion2) {
				case 'a':
				case 'A':
					if (p1 == 1) {
						printf("La plaza 1 queda libre.\n");
						p1 = 0;

					}
					else {
						printf("Usted no estaba en esa plaza.\n");
					}
					system("PAUSE");
					system("cls");
					break;
				case 'b':
				case 'B':
					if (p2 == 1) {
						printf("La plaza 2 queda libre\n");
						p2 = 0;
					}
					else {
						printf("Usted no estaba en esa plaza.\n");
					}
					system("PAUSE");
					system("cls");
					break;
				default:
					printf("Esa plaza no existe.\n");
					system("PAUSE");
					system("cls");
					break;

				}

			}
			else {
				printf("No hay plazas ocupadas.\n");
				system("pause");
				system("cls");
			}

		case 'e':
		case 'E':
			printf("Has elegido la opcion estado de aparcamiento\n");
			system("pause");
			system("cls");
			printf("A continuacion se le mostrara un listado de las plazas del garaje:\n");
			printf("Plaza 1 - ");
			if (p1 == 0) {
				printf("Libre\n");
			}
			else {
				printf("Ocupada - matricula: %s\n", matricula1);
			}
			printf("Plaza 2 - ");
			if (p2 == 0) {
				printf("Libre\n");
			}
			else {
				printf("Ocupada - matricula: %s\n", matricula2);
			}
			break;
		default:
			printf("Lo siento, te has equivocado de opcion\n");
		}

		system("pause");
	}

}

