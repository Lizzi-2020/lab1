#pragma once
#include "node.h"
struct List //описание узла списка
{
	node *head = NULL; //указатель на первый элемент списка
	node *endList = NULL; //указатель 
	int data = 0; //информационное поле
};