
#include "outtransport.h"

void outtransport(transport* data, std::ofstream &ofst) {
	key k = data->k;
	switch (data->k)
	{
	case key::BUS:
		Out(data->b, ofst);

		break;
	case key::TRUCK:
		Out(data->t, ofst);
		break;
	default:
		ofst << "Incorrect figure!" << std::endl;
	}
	ofst << ", PowerEngine = " << data->powerEngine << std::endl;
}