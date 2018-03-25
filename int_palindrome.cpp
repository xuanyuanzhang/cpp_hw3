#include "int_palindrome.h"

bool int_palindrome(int argv, char** args)
{
	stack<int> myStack;
	int i=0;
	for(; i<argv/2; i++)
	{
		myStack.push(atoi(*(args+i)));
	}
	if(argv%2==1)
		i++;
	while(i < argv)
	{
		if(atoi(*(args+i)) != myStack.top())
			return false;
		else
		{
			myStack.pop();
			i++;
		}
	}
	return true;
}

int main(int argv, char** args)
{
	cout << "the number of elements is: " << argv-1 << "\n";
	int i=1;
	while(i < argv)
	{
		cout << "element at index " << i << " is: " << atoi(*(args+i)) << "\n";
		i++;
	}
	cout << "the input is palindrome? " << int_palindrome(argv-1, args+1) << "\n";
}