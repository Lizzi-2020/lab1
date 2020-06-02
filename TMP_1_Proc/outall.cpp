// ¬ывод содержимого контейнера в указанный поток
#include "outall.h"
void Out(List &c, std::ofstream &ofst) {
	ofst << "Container contains " << c.data
		<< " elements." << std::endl;
	node* nod = c.head;
	key k;
	while (0 < c.data)
	{
		outtransport(nod->data, ofst);
		nod = nod->next;
		c.data--;
	}
}