#include "clear.h"
void Clear(List &c) {
	node *clear = c.head;
	node *time = new node;
	while (true)
	{
		time = clear->next;
		delete clear;
		clear = time;
		if (clear == NULL)
		{
			break;
		}
	}

}