#include <iostream>
#include "BrazoRobotico.h"
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool obj){
	this->x = x;
	this->y = y;
	this->z = z;
	this->obj = obj;
}

double BrazoRobotico::get_x(){
	return x;
}

double BrazoRobotico::get_y(){
	return y;
}

double BrazoRobotico::get_z(){
	return z;
}

bool BrazoRobotico::get_obj(){
	return obj;
}

void BrazoRobotico::coger(){
	obj = true;
}

void BrazoRobotico::soltar(){
	obj = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}
