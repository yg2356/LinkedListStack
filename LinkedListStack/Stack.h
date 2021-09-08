#pragma once

class Stack
{	
public:
	Stack()
		:
		pArray(new int[100])
	{}
	Stack(const Stack& source)
	{
		*this = source;
	}
	Stack& operator= (const Stack& source)
	{
		delete pArray;
		pArray = nullptr;
		pArray = new int[100];
		index = source.index;
		for (int i = 0; i < index;i++)
		{
			pArray[i] = source.pArray[i];
		}
		return *this;
	}
	~Stack()
	{
		delete pArray;
		pArray = nullptr;
	}
public:
	void Push( int val );
	int Pop();
	int Size() const;
	bool Empty() const;
private:
	int* pArray = nullptr;
	int index = -1;
};