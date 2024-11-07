#include <iostream>
#include <string>

using namespace std;



int main()
{





	unsigned char half_limit = 150;

	for (unsigned char i = 0; i < 2 * half_limit; ++i)
	{
		cout << "kuku";
	}


}




/*

If you said 300, you would have been correct if i had been declared as an int. However, since i was declared as an unsigned char, the corrct answer is that this code will result in an infinite loop.

Here’s why:

The expression 2 * half_limit will get promoted to an int (based on C++ conversion rules) and will have a value of 300. However, since i is an unsigned char, it is rerepsented by an 8-bit value which, after reaching 255, will overflow (so it will go back to 0) and the loop will therefore go on forever

*/














/*
The answer is not - 25. Rather, the answer(which will surprise many) is 4294967271, assuming 32 bit integers.Why ?

In C++, if the types of two operands differ from one another, then the operand with the “lower type” will be promoted to the type of the “higher type” operand, using the following type hierarchy(listed here from highest type to lowest type) : long double, double, float, unsigned long int, long int, unsigned int, int(lowest).

So when the two operands are, as in our example, 25u (unsigned int)and 50 (int), the 50 is promoted to also being an unsigned integer(i.e., 50u).

Moreover, the result of the operation will be of the type of the operands.Therefore, the result of 25u - 50u will itself be an unsigned integer as well.So the result of - 25 converts to 4294967271 when promoted to being an unsigned integer.
*/