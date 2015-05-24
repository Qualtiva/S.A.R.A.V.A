/**
* Anai.cpp: define el punto de entrada de la aplicacion de consola.
* Sistema de asignacion y reservacion para asientos para vuelos aereos
*
* Codigos
* asiento vacio = 0
* asiento reservado = 1
* asiento confirmado = 2
*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

#ifdef _MSC_VER
#define getch() _getch()
#endif

using namespace std;
int main(void)
{
	int avion = 0, clase = 0, asiento = 0, m = 0, avion1[60], avion2[60], avion3[60], i;
	char opcion;
	for (i = 0; i<60; i++)
		avion1[i] = 0;
	for (i = 0; i<60; i++)
		avion2[i] = 0;
	for (i = 0; i<60; i++)
		avion3[i] = 0;
	cout << "TODOS LOS ASIENTOS ESTAN DISPONIBLES....";
	getch();//espera a que presiones una tecla y termina 
	do
	{
		system("cls");
		cout << "\n\n\t Seleccione Una Opcion Del Menu\n";
		cout << "\n\n\t 1. Reservar un Vuelo\n";
		cout << "\n\n\t 2. Confirmar Reserva\n";
		cout << "\n\n\t 3. Cancelar Reserva\n";
		cout << "\n\n\t 4. Estado del avion\n";
		cout << "\n\n\t 5. Salir\n";
		cout << "\nIntroduzca el Numero de la Opcion:";
		cin >> opcion;
		switch (opcion)
		{
		case '1':
			cout << "\nDesea Vijar En:""\n""avion 1""\n""avion 2""\n""avion 3""\n""Eliga el Numero Correspondiente al avion Deseado: ";
			cin >> avion;
			cout << "\nEn que Clase Desea Viajar: ""\n""1-Clase Ejecutiva""\n""2-Clase Economica\n";
			cin >> clase;
			if (clase == 1)
			{
				do {
					cout << "\nIntroduzca Un Numero De Asiento Entre 0 y 14: ";
					cin >> asiento;
					if ((asiento<0) || (asiento>14))
						cout << "\n Dato De Asiento No Valido....";
				} while ((asiento<0) || (asiento>14));
			}
			else
			{
				cout << "Elija Un Asiento Entre 15 y 60:";
				do {
					cout << "\nIntroduzca El Numero De Asiento: ";
					cin >> asiento;
					if ((asiento<15) || (asiento>60))
						cout << "\nDato De Asiento No Valido....";
				} while ((asiento<15) || (asiento>60));
			}
			if (avion == 1)
			{
				if (avion1[asiento] == 0)
				{
					avion1[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}
			if (avion == 2)
			{
				if (avion2[avion == 2] == 0)
				{
					avion2[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}
			if (avion == 3)
			{
				if (avion3[avion == 3] == 0)
				{
					avion3[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}

			break;
		case '2':
			cout << "\nPara Confirmar Su Reserva:""\n""Ingrese El Numero De avion En Que Reservo:";
			cin >> avion;
			cout << "\nIngrese El Numero De Asiento:";
			cin >> asiento;
			if (avion == 1)
			{
				if (avion1[asiento] == 1)
				{
					avion1[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun, Por Favor Reservelo Antes....";
			}
			if (avion == 2)
			{
				if (avion2[avion == 2] == 1)
				{
					avion2[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun, Por Favor Reservelo Antes....";
			}
			if (avion == 3)
			{
				if (avion3[avion == 3] == 1)
				{
					avion3[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun, Por Favor Reservelo Antes....";
			}


			break;
		case '3':
			cout << "\nPara Cancelar Su Reserva:""\n""Ingrese El Numero De avion En Que Reservo:";
			cin >> avion;
			cout << "\nIngrese El Numero De Asiento:";
			cin >> asiento;
			if (avion == 1)
			{
				if (avion1[asiento] == 0)
					cout << "\nEl Asiento No Ha Sido Reservado Aun, Por Favor Reservelo Antes....";
				{if (avion1[asiento] == 2)
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
				else
				{
					if (avion1[asiento] == 1)
						avion1[asiento] = 0;
					cout << "\nSu Reserva Ha Sido Cancelada.";
				}
				}
			}
			if (avion == 2)
			{
				if (avion2[avion == 2] == 2)
					avion2[asiento] = 0;
				else
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
			}
			if (avion == 3)
			{
				if (avion3[avion == 3] == 2)
					avion3[asiento] = 0;
				else
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
			}

			break;
		case '4':
			cout << "\nQue avion Desea Verificar avion 1, avion 2 o avion 3:";
			cin >> avion;
			cout << "\nQue Desea Verificar:""\n""1-Reservas""\n""2-Reservas Confirmadas""\n""3-Asientos Vacios""\n""Eliga La Opcion a Verificar: ";
			cin >> m;
			if ((avion == 1) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (avion1[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((avion == 1) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (avion1[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((avion == 1) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (avion1[i] == 0)
								cout << i << "-";
						}
					}
			if ((avion == 2) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (avion2[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((avion == 2) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (avion2[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((avion == 2) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (avion2[i] == 0)
								cout << i << "-";
						}
					}

			if ((avion == 3) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (avion3[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((avion == 3) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (avion3[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((avion == 3) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (avion3[i] == 0)
								cout << i << "-";
						}
					}
			break;
		case '5':
			break;
		default:
			cout << "\n  ";
		}
		getch();//espera a que presiones una tecla y termina 
	} while (opcion != '5');
	cout << "\nHa Decidido Salir Del Menu...";
	getch();//espera a que presiones una tecla y termina 
	return 0;
}
