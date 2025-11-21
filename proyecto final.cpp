#include <iostream>
using namespace std;

int main (){
	
	setlocale (LC_ALL, """");
	
	int P1, P2, bonus, puntos=0, i=0, P3[2], correcto=0;
	string d;
	
	
 HEAD
	
	cout << "Pregunta 1	";
	cout << "¿7/4 es mayor o menir que 1?";
	cout << "1. Menor ";
	cout << "2. Mayor "

	cout << "Pregunta 1\n\n";
	cout << "�7/4 es mayor o menor que 1?\n\n";
	cout << "1.Menor\n";
	cout << "2.Mayor\n ";
 laura
	cin >> P1;
	
	if (P1==1){
		
		cout << "\nIncorrecto, la respuesta correcta era 2.Mayor\n";
		puntos = puntos - 50;
	    cout << "Total de puntos "<<puntos<<"\n\n";
		
	}else {
		
		if (P1==2){
		
		cout << "\nCorrecto!!\n";
		puntos = puntos + 100;
		cout << "Total de puntos "<<puntos<<"\n\n";
		correcto = correcto + 1;
	    }
    }
	
	if (P1<1 or P1>2){
		
	cout << "\n\nQuerido usuario, usted ingreso un dato no valido";
	
	return 0;
    }
	
	
<<<<<<< HEAD
	cout << "Pregunta 2";
	cout << "¿Cual de los numeros decimales equivale a 6/9";
	cout << "1. 0.1";
	cout << "2. 0.9";
	cout << "3. 0.66";
	cout << "4. 0.8";
=======
	
	
	cout << "\n\nPregunta 2\n\n";
	cout << "�Cual de los numeros decimales equivale a 6/9?\n\n";
	cout << "1. 0,1\n";
	cout << "2. 0,9\n";
	cout << "3. 0,66\n";
	cout << "4. 0,8\n ";
>>>>>>> laura
	cin >> P2;
	
	if (P2<1 or P2>4){
		
	cout << "\n\nQuerido usuario, usted ingreso un dato no valido";
	
	return 0;
    }
	
	if (P2==3){
		
		cout << "\nCorrecto!!\n";
		puntos = puntos + 100;
		cout << "Total de puntos "<<puntos<<"\n\n";
		correcto = correcto + 1;
		
	}else {
		
		cout << "\nIncorrecto, la respuesta correcta era 3. 0,66\n";
		puntos = puntos - 50 ;
		cout << "Total de puntos "<<puntos<<"\n\n";
	}
	
	
	
	
	cout << "\n\nBonus de juego al azar!!\n\n";
	cout << "Escoje un numero al azar y prueba tu suerte\n\n";
	cout << "1.\n";
	cout << "2.\n";
	cout << "3.\n";
	cout << "4.\n";
	cout << "5.\n ";
	cin >> bonus;
	
	switch (bonus){
		
		case 1:
			cout << "\n1. -200 puntos\n";
			puntos = puntos - 200;
			cout << "Total de puntos "<<puntos<<"\n\n";
			d = "si";
			break;
			
		case 2:
			cout << "\n2. +50 puntos\n";
			puntos = puntos + 50;
			cout << "Total de puntos "<<puntos<<"\n\n";
			d = "si";
			break;
			
		case 3:
			cout << "\n3. -100 puntos\n";
			puntos = puntos - 100;
			cout << "Total de puntos "<<puntos<<"\n\n";
			d = "si";
			break;
			
		case 4:
			cout << "\n4. +200 Puntos\n";
			puntos = puntos + 200;
			cout << "Total de puntos "<<puntos<<"\n\n";
			d = "si";
			break;
			
		case 5:
			cout << "\n5. -50 puntos\n";
			puntos = puntos - 50;
			cout << "Total de puntos "<<puntos<<"\n\n";
			d = "si";
			break;
			
		default :
			d = "no";
	}
	
	if (d=="no"){
		
		cout << "\nQuerido usuario, usted ingreso un dato no valido ";
		return 0;
	}
	
	
	
	
	cout << "\n\nPregunta 3\n\n";
	cout << "Complete la operacion escribiendo los digitos faltantes, solo se prmiten numeros del 0-9: ([ ] x 2) + (33 x [ ]) = 167\n\n";
	
	for (i=0; i<2; i++){
		
		cout << "Respuesta: ";
		cin >> P3[i];
		
	}
	
	if (P3[1]<0 or P3[1]>9){
		
		cout << "\n\nQuerido usuario, usted ingreso un dato no valido";
	
	    return 0;
	}
	
	if (P3[2]<0 or P3[2]>9){
		
		cout << "\n\nQuerido usuario, usted ingreso un dato no valido";
	
	    return 0;
	}
	
	if (P3[0]==1){
		
		cout << "\nCorrecto!!\n";
		puntos = puntos + 50;
		cout << "Total de puntos "<<puntos<<"\n\n";
		correcto = correcto + 1;
		
	}else {
		
		cout << "\nIncorrecto, la respuesta correcta era 1\n";
		puntos = puntos - 50;
	    cout << "Total de puntos "<<puntos<<"\n\n";
	}
	
	if (P3[1]==5){
		
		cout << "\n Y Correcto!!\n";
		puntos = puntos + 50;
		cout << "Total de puntos "<<puntos<<"\n\n";
		correcto = correcto + 1;
		
	}else {
		
		cout << "\nIncorrecto, la respuesta correcta era 5\n";
		puntos = puntos - 50;
	    cout << "Total de puntos "<<puntos<<"\n\n";
		
	}
	
	
	
	
	
	
	
	
	
	
}

