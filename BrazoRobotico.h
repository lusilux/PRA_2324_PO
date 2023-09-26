#include <iostream>
using namespace std;

class BrazoRobotico {
	private:
		double x, y, z;
		bool obj;
	public:
		BrazoRobotico(double x, double y, double z, bool obj);
		double get_x();
		double get_y();
		double get_z();
		bool get_obj();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
};
