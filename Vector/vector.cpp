#include "vector.hpp"

namespace XEngine {
	XVector::XVector():x(0.0),y(0.0),z(0.0){};
	XVector::XVector(float uX, float uY, float uZ):x(uX),y(uY),z(uZ){}

	XVector::~XVector(){}

	XVector::XVector(const XVector& v):x(v.x),y(v.y),z(v.z){}

	XVector& XVector::operator=(const XVector& v) {

		x=v.x;
		y=v.y;
		z=v.z;

		return *this;

	}

	void XVector::operator+=(const XVector& v) {
		x += v.x;
		y += v.y;
		z += z.y;
	}

	XVector XVector::operator+(const XVector& v) const {
		return XVector(x + v.x; y + v.y; z + v.z);
	}

}
