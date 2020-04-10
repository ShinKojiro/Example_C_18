#include <iostream>
#include <vector>

//didn't go over vectors in college

using namespace std;

int main()
{

	//Format: vector<DataType> nameOfVector
	//myVector.push_back(value) ==> adds and element to the END of the vector (also resizes it)
	//myVector.at(index) ==> return element at specified number
	//myVector.size() ==> returns an unsigned int equal to the number of elements
	//myVector.begin() ==> reads vector from first element (index 0)

	//myVector.insert(myVector.begin() + integer, new value) ==> adds element BEFORE specified index number
	//myVector.erase(myVector.begin() + integer) ==> removes element AT specified index number
	//myVector.clear() ==> removes all elements in vector
	//myVector.empty() ==> returns boolean value if wheter vector is empty

	vector<int> myVector;

	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(4);
	myVector.push_back(12);
	myVector.push_back(9);

	cout << "Vector: ";

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	cout << endl;

	cout << "Vector: ";

	myVector.insert(myVector.begin(), 5);

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	cout << endl;

	cout << "Vector: ";

	myVector.erase(myVector.begin() + 4);

	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}

	if (myVector.empty())
	{
		cout << endl << "Is Empty!";
	}
	else
	{
		cout << endl << "Is Not Empty";
	}

	myVector.clear();

	if (myVector.empty())
	{
		cout << endl << "Is Empty!";
	}
	else
	{
		cout << endl << "Is Not Empty";
	}

	cout << endl;

	return 0;
}