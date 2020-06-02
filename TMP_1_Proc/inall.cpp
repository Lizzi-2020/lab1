#include "inall.h"
void In(List &c, std::ifstream &ifst) {
	while (!ifst.eof()) {
		c.data++;
		transport* x = Ina(ifst);
		node* a = new node;
		if (c.head == NULL)
		{
			c.head = a;
		}
		else
		{
			node * e = c.endList;
			e->next = a;
		}
		a->next = NULL;
		c.endList = a;
		a->data = x;
	}
}