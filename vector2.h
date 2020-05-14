#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

class Vector2
{
public:
	Vector2(float _x, float _y);
	Vector2();

	virtual ~Vector2();

	float x;
	float y;

	//Operators
	Vector2& operator+=(const Vector2& rhs);
	Vector2 operator+(const Vector2& rhs) const;
	Vector2 operator*(const float rhs) const;
	Vector2 operator/(const float rhs) const;
	Vector2& operator-=(const Vector2& rhs);

private:
};
