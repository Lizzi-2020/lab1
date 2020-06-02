#pragma once
#include "transport.h"
struct node
{
	transport* data;
	node *next; //указатель на следующий элемент
};