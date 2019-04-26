#include "pch.h"
#include "StartCalc.h"
#include <iostream>
#include "Calculator.h"

void StartCalc::Calc()
{
	using namespace std;
	float _a;
	float _b;
	char opp;
	enum _operators
	{
		plus, minus, multiply, divide, modulo, square, squareroot
	};
	//enum?
	Calculator *myCalc = new Calculator();

	cout << "hello! this is a calculator \n";
	cout << "please enter the first number \n";
	cin >> _a;
	cout << "please select the operator (+, -, *, /, %, *S*quare, square*R*oot) \n";
	cin >> opp;
	cout << "please enter the second number \n";
	cin >> _b;
	cout << _a;
	cout << " ";
	cout << opp;
	cout << " ";
	cout << _b;
	cout << "= ";

	switch (opp)
	{
	case '+': cout << myCalc->Plus(_a, _b);
		break;
	case '-': cout << myCalc->Minus(_a, _b);
		break;
	case'*': cout << myCalc->Multiply(_a, _b);
		break;
	case'/': cout << myCalc->Divide(_a, _b);
		break;
	case'%': cout << myCalc->FModulo(_a, _b);
		break;
	case'S': cout << myCalc->Square(_a);
		break;
	case'R': cout << myCalc->SquareRoot(_a);
		break;
	default:
		break;
	}
}

StartCalc::StartCalc()
{
}

StartCalc::~StartCalc()
{
}
