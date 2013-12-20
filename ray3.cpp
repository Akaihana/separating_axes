/*
*	Name:	Matthew Nguyen
*   Email:  masayuflame@gmail.com
*	Class:	CPSC 486 Game Programming
*	Asgt:	2 Seperating Axes
*	Due:	December 3rd, 2013
*	
*	Purpose: ray class cpp file
*/

#include "ray3.h"

//using namespace rayspace;
ray3::ray3()
{
}

ray3::ray3(const Vec3& origin, const Vec3& direction)
{
	Origin = origin;
	Direction = direction;
}

ray3::ray3(const ray3& input)
{
	Origin = input.Origin;
	Direction = input.Direction;
}