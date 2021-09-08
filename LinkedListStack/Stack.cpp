#include "Stack.h"

void Stack::Push(int val)
{
	if (Size() < 100)
		pArray[++index] = val;
}

int Stack::Pop()
{
	if (!Empty())
		return (pArray[index--]);
}

int Stack::Size() const
{
	return index + 1;
}

bool Stack::Empty() const
{
	return (index < 0);
}
