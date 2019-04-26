#include "pch.h"
#include "Calculator.h"
#include <cmath>

Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}

#pragma region functions
float Calculator::Plus(float& a, float& b)
{
	return a + b;
}

float Calculator::Minus(float& a, float& b)
{
	return a - b;
}

float Calculator::Multiply(float& a, float& b)
{
	return a * b;
}

float Calculator::Divide(float& a, float& b)
{
	return a / b;
}

float Calculator::FModulo(float& a, float& b)
{
	// modulo a % b
	float c;
	c = floor(a/b);
	return a - b * c;
}

int Calculator::IModulo(int& a, int& b)
{
	return a - ((a/b) * b);
}

float Calculator::Square(float& a)
{
	return a * a;
}

float Calculator::SquareRoot(float& a)
{
	return sqrt(a);
}
#pragma endregion


