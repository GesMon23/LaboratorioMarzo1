#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	float NotFin, Coleg, Desc, DescFin, TotalPago;
	Coleg= 610;
	printf("NOTAS MAYORES A 90 TENDRAN 25% DE DESCUENTO \n");
	printf("NOTAS ENTRE 80 Y 89 TENDRAN 20% DE DESCUENTO \n");
	printf("NOTAS ENTRE 70 Y 79 TENDRAN 15% DE DESCUENTO \n");
	printf("NOTAS ENTRE 61 Y 69 TENDRAN 10% DE DESCUENTO \n");
	printf("NOTAS MENORES A 61 NO TENDRAN DESCUENTO \n");
	printf("\n");
	printf("INGRESE LA NOTA FINAL DEL ESTUDIANTE: ");scanf("%f", &NotFin);
	if (NotFin>=90){
		Desc=0.25;
	}
	else{
		if(NotFin>=80 && NotFin<90){
			Desc=0.20;
		}
		else{
			if(NotFin>=70 && NotFin<80){
				Desc=0.15;			
			}
			else{
				if(NotFin>=61 && NotFin<70){
					Desc=0.10;
				}
				else{
					Desc=0;
				}
			}
		}
	}
	TotalPago=Coleg-(Coleg*Desc);
	printf("EL TOTAL A PAGAR ES DE: Q%.2f", TotalPago);
	printf("\n");
	system("pause");
}
