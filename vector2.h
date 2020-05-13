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

	Vector2 moveTowards(Vector2 _from, Vector2 _to, float _speed);
	Vector2 addForce(Vector2 force);
	float distancePoints(Vector2 _a, Vector2 _b);

	float x;
	float y;

	Vector2& operator+=(const Vector2& rhs);
	Vector2 operator+(const Vector2& rhs) const;
	Vector2 operator*(const float rhs) const;
	Vector2 operator/(const float rhs) const;
	Vector2& operator-=(const Vector2& rhs);

private:
};
