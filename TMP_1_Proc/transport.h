#pragma once
#include "bus.h"
#include "truck.h"
#include <fstream>
enum key { BUS, TRUCK };
struct transport {
	key k; // ����
	int powerEngine;
	union { // ���������� ������ ���������
		bus b;
		truck t;
	};
};