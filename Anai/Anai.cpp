/*********************************************************************
Anai.cpp: define el punto de entrada de la aplicación de consola.
Sistema de asignación y reservación para asientos para vuelos aéreos
@Autor: Anai
*********************************************************************/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

// codigos
// asiento vacio = 0
// asiento reservado = 1
// asiento confirmado = 2

using namespace std;
int main()
{
	int av = 0, c = 0, asiento = 0, m = 0, av1[60], av2[60], av3[60], i;
	char opcion;
	for (i = 0; i<60; i++)
		av1[i] = 0;
	for (i = 0; i<60; i++)
		av2[i] = 0;
	for (i = 0; i<60; i++)
		av3[i] = 0;
	cout << "TODOS LOS ASIENTOS ESTAN DISPONIBLES....";
	system("pause");//espera a que presiones una tecla y termina 
	do
	{
		system("cls");
		cout << "\n\n\t Seleccione Una Opcion Del Menu\n";
		cout << "\n\n\t 1. Reservar un Vuelo\n";
		cout << "\n\n\t 2. Confirmar Reserva\n";
		cout << "\n\n\t 3. Cancelar Reserva\n";
		cout << "\n\n\t 4. Estado del Avion\n";
		cout << "\n\n\t 5. Salir\n";
		cout << "\nIntroduzca el Numero de la Opcion:";
		cin >> opcion;
		switch (opcion)
		{
		case '1':
			cout << "\nDesea Vijar En:""\n""Avion 1""\n""Avion 2""\n""Avion 3""\n""Eliga el Numero Correspondiente al Avion Deseado: ";
			cin >> av;
			cout << "\nEn que Clase Desea Viajar: ""\n""1-Clase Ejecutiva""\n""2-Clase Economica\n";
			cin >> c;
			if (c == 1)
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
			if (av == 1)
			{
				if (av1[asiento] == 0)
				{
					av1[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}
			if (av == 2)
			{
				if (av2[av == 2] == 0)
				{
					av2[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}
			if (av == 3)
			{
				if (av3[av == 3] == 0)
				{
					av3[asiento] = 1;
					cout << "su operacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Esta Disponible....";
			}

			break;
		case '2':
			cout << "\nPara Confirmar Su Reserva:""\n""Ingrese El Numero De Avion En Que Reservo:";
			cin >> av;
			cout << "\nIngrese El Numero De Asiento:";
			cin >> asiento;
			if (av == 1)
			{
				if (av1[asiento] == 1)
				{
					av1[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun Por Favor Reservelo Antes....";
			}
			if (av == 2)
			{
				if (av2[av == 2] == 1)
				{
					av2[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun por Favor Reservelo Antes....";
			}
			if (av == 3)
			{
				if (av3[av == 3] == 1)
				{
					av3[asiento] = 2;
					cout << "su confirmacion se realizo con exito...";
				}
				else
					cout << "El Asiento No Ha Sido Reservado Aun por Favor Reservelo Antes....";
			}


			break;
		case '3':
			cout << "\nPara Cancelar Su Reserva:""\n""Ingrese El Numero De Avion En Que Reservo:";
			cin >> av;
			cout << "\nIngrese El Numero De Asiento:";
			cin >> asiento;
			if (av == 1)
			{
				if (av1[asiento] == 0)
					cout << "\nEl Asiento No Ha Sido Reservado Aun Por Favor Reservelo Antes....";
				{if (av1[asiento] == 2)
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
				else
				{
					if (av1[asiento] == 1)
						av1[asiento] = 0;
					cout << "\nSu Reserva Ha Sido Cancelada.";
				}
				}
			}
			if (av == 2)
			{
				if (av2[av == 2] == 2)
					av2[asiento] = 0;
				else
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
			}
			if (av == 3)
			{
				if (av3[av == 3] == 2)
					av3[asiento] = 0;
				else
					cout << "El Asiento Ya No Se Puede Cancelar Gracias....";
			}

			break;
		case '4':
			cout << "\nQue avion Desea Verificar Avion 1, Avion 2 o Avion 3:";
			cin >> av;
			cout << "\nQue Desea Veriaficar:""\n""1-Reservas""\n""2-Reservas Confirmadas""\n""3-Asientos Vacios""\n""Eliga La Opcion a Verificaar: ";
			cin >> m;
			if ((av == 1) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (av1[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((av == 1) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (av1[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((av == 1) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (av1[i] == 0)
								cout << i << "-";
						}
					}
			if ((av == 2) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (av2[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((av == 2) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (av2[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((av == 2) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (av2[i] == 0)
								cout << i << "-";
						}
					}

			if ((av == 3) && (m == 1))
			{
				cout << "Los Asientos Reservados Son: \n";
				for (i = 0; i <= 60; i++)
				{
					if (av3[i] == 1)
						cout << i << "-";
				}
			}
			else
				if ((av == 3) && (m == 2))
				{
					cout << "Los Asientos Confirmados Son: \n";
					for (i = 0; i <= 60; i++)
					{
						if (av3[i] == 2)
							cout << i << "-";
					}
				}
				else
					if ((av == 3) && (m == 3))
					{
						cout << "Los Asientos Vacios Son: \n";
						for (i = 0; i <= 60; i++)
						{
							if (av3[i] == 0)
								cout << i << "-";
						}
					}
			break;
		case '5':
			break;
		default:
			cout << "\n  ";
		}
		system("pause");//espera a que presiones una tecla y termina 
	} while (opcion != '5');
	cout << "\nHa Decidido Salir Del Menu...";
	system("pause");//espera a que presiones una tecla y termina 
	return 0;
}


