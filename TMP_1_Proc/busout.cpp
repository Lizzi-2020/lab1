#include "busout.h"
void Out(bus &r, std::ofstream &ofst) {
	ofst << "It is BUS: Size = " << r.size;
}