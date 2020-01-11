#include <iostream>
#include "vector.hpp"

int main(int argc, const char * argv[]) {
	XEngine::XVector vector1(2,3,1);
	XEngine::XVector vector2(1,2,0);

	XEngine::XVector vector3 = vector1 + vector2;

	vector1 += vector2;

	return 0;
}
