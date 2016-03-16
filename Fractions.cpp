#include <iostream>
using namespace std;

class Fraction{
public:
	void Fraction::InputNums()
	{
		float number1, number2, number3, number4;
		cout << "Enter the numerator and denomenator" << endl;
		cin >> number1 >> number2 >> number3 >> number4;
		setFraction(number1, number2, number3, number4);
	}
	Fraction::Fraction()
	{
		Numerator1 = 0;
		Denominator1 = 0;
		Numerator2 = 0;
		Denominator2 = 0;
	}
	float Fraction::getFract1()
	{
		return Numerator1 / Denominator1;
	}
	float Fraction::getFract2()
	{
		return Numerator2 / Denominator2;
	}
	void Fraction::setFraction(float num1, float num2, float num3, float num4)
	{
		Numerator1 = num1;
		Denominator1 = num2;
		Numerator2 = num3;
		Denominator2 = num4;
	}
	float Fraction::AdditionFracts()
	{
		return getFract1() + getFract2();
	}
	float Fraction::SubtractionFracts()
	{
		return getFract1() - getFract2();
	}
	float Fraction::MultiplicationFracts()
	{
		return getFract1() * getFract2();
	}
	float Fraction::DivisionFracts()
	{
		return getFract1() / getFract2();
	}

	void Fraction::DisplayFracts()
	{
		cout << "The Sum of the fractions is: " << AdditionFracts() << endl;
		cout << "The difference of the fractions is :" << SubtractionFracts() << endl;
		cout << "The products of the fractions is : " << MultiplicationFracts() << endl;
		cout << "The quotient of the fractions is : " << DivisionFracts() << endl;
	}

private:
	float Numerator1, Numerator2;
	float Denominator1, Denominator2;
};
int main()
{
	Fraction objFractions;
	objFractions.InputNums();
	objFractions.AdditionFracts();
	objFractions.SubtractionFracts();
	objFractions.MultiplicationFracts();
	objFractions.DivisionFracts();
	objFractions.DisplayFracts();
}