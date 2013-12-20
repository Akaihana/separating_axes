/*
*	Name:	Matthew Nguyen
*   Email:  masayuflame@gmail.com
*	Class:	CPSC 486 Game Programming
*	Asgt:	2 Seperating Axes
*	Due:	December 3rd, 2013
*	
*	Purpose: ray class header file
*/
#ifndef _RAY_
#define _RAY_

#include "vector.h"

class ray3
{
public:
	Vec3 Origin;
	Vec3 Direction;
	ray3();
	ray3(const Vec3& origin, const Vec3& direction);
	ray3(const ray3& input);

	inline ray3& operator= (const ray3& input);
};

inline ray3& ray3::operator= (const ray3& input)
{
	Origin = input.Origin;
	Direction = input.Direction;
	return *this;
}

#endif