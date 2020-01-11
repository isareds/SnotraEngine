#ifndef vector_hpp
#define vector_hpp

#include <stdio.h>
#include <cmath>
#include <iostream>

namespace XEngine {
	class XVector {
		private:

		public:
			float x;
			float y;
			float z;

			// Constructors
			XVector();
			XVector(float uX, float uY, float uZ);
			
			// Destructors
			~XVector();

			// Copy constructors
			XVector( const XVector& v);
			XVector& operator=(const XVector& v);
	};
}
#endif /* R4DVector3n_hpp */
