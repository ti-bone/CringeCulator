#include "maths.hpp"

int Maths::Add(int firstAdd, int secondAdd)
{
int result = firstAdd + secondAdd;
return result;
}

int Maths::Minus(int firstMinus, int secondMinus)
{
int result = firstMinus - secondMinus;
return result;
}

int Maths::Multiply(int firstMultiply, int secondMultiply)
{
int result = firstMultiply * secondMultiply;
return result;
}

int Maths::Divide(int firstDivide, int secondDivide)
{
if(secondDivide <= 0) {std::cout << "You are fucking idiot!\nCANNOT DIVIDE BY FUCKING ZERO!!!!1!1!1!\n"; exit(0);}
int result = firstDivide / secondDivide;
return result;
}       
