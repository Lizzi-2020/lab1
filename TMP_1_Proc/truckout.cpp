#include"truckout.h"
void Out(truck &t, std::ofstream &ofst) {
	ofst << "It is TRUCK: Power = "
		<< t.power;
}