#include <iostream>
using namespace std;

int main (){
	
	int P1, P2, bonus, puntos=0, i=0, P3[2];
	
	
	
	cout << "Pregunta 1	";
	cout << "¿7/4 es mayor o menir que 1?";
	cout << "1. Menor ";
	cout << "2. Mayor "
	cin >> P1;
	
	if (P1==1){
		
		cout << "Incorrecto, la respuesta correcta era 2.Mayor ";
		puntos  = 0;
		
	}else {
		
		cout << "Correcto!!";
		puntos = puntos + 100;
		cout << "Total "<<puntos;
	}
	
	
	cout << "Pregunta 2";
	cout << "¿Cual de los numeros decimales equivale a 6/9";
	cout << "1. 0.1";
	cout << "2. 0.9";
	cout << "3. 0.66";
	cout << "4. 0.8";
	cin >> P2;
	
	if (P2==3){
		
		cout << "Correcto!!";
		puntos = puntos + 100;
		cout << "Total "<<puntos;
		
	}else {
		
		cout << "Incorrecto, la respuesta correcat era 3. 0.66";
		puntos = 0 ;
		
	}
	
	
	cout << "Bonus de juego al azar !!"	;
	cout << "1.";
	cout << "2.";
	cout << "3.";
	cout << "4.";
	cout << "5.";
	cin >> bonus;
	
	switch (bonus){
		
		case 1:
			cout << "+200 puntos ";
			puntos = puntos - 200;
			cout << "Total "<<puntos;
			break;
			
		case 2:
			cout << "-50 puntos ";
			puntos = puntos + 50;
			cout << "Total "<<puntos;
			break;
			
		case 3:
			cout << "+100 puntos ";
			puntos = puntos + 200;
			cout << "Total "<<puntos;
			break;
			
		case 4:
			cout << "-200 Puntos ";
			puntos = puntos - 200;
			cout << "Total "<<puntos;
			break;
			
		case 5:
			cout << "+50 puntos ";
			puntos = puntos + 50;
			cout << "Total "<<puntos;
			break;
			
		
	}
	
	
	cout << "Pregunta 3 ";
	cout << "Complete la operacion:";
	cout << "([ ] x 2) + (33 x [ ]) = 167";
	
	for (i=0; i<2; i++){
		
		cout << "Respuesta: ";
		cin >> P3[i];
		
	}
	
	if (P3[1]==34){
		
		cout << "Correcto!!";
		puntos = puntos + 100;
		
	}else {
		
		cout << "Incorrecto, la respuesta correcta era 34";
	}
	
	if (P3[2]==33){
		
		cout << "Correcto !!";
		puntos = puntos + 100;
		
	}else {
		
		cout << "Incorrecto, la respuesta correcta era 33";
		
	}
	
	adaskdaskjdadjkadsjk
	
	
	
	
	
	
	
	
}
