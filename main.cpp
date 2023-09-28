#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

int main(){
	BrazoRobotico x(1,-2,3, false);
	cout << "Brazo robótico en la posición " << x << " " << y << " " << z << " y sin objeto." << endl;
	
	cout << "Moviendo brazo..." << endl;
	x.mover(5,-1,2);
	cout << "Brazo robótico en la posición " << x << " " << y << " " << z " y sin objeto." << endl;
	
	cout << "Cogiendo objeto..." << endl;
	x.coger();
	cout << "Objeto cogido" << endl;

}
