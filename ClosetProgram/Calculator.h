#pragma once
class Calculator
{
public:
	//constructor
	Calculator();
	//deconstructor
	~Calculator();

	float Plus(float& a, float& b);
	float Minus(float& a, float& b);
	float Multiply(float& a, float& b);
	float Divide(float& a, float& b);
	float FModulo(float& a, float& b);
	int IModulo(int& a, int& b);
	float Square(float& a);
	float SquareRoot(float& a);
};

