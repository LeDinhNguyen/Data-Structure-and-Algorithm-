#include <iostream>
using namespace std;

class arrayBasedStack
{
	int size;
	int array[size];
	int top;
	arrayBasedStack(int number)
	{
		size = number;
	}
};

void createEmptyStack(arrayBasedStack *&stack)
{
	stack->top = -1;
}

bool isEmpty(arrayBasedStack *&stack)
{
	if (stack->top = -1)
		return 1;
	else
		return 0;
}
int main()
{

	return 0;
}