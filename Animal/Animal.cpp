#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:

	Animal()
	{
		cout <<"Animal ������ ȣ��" << endl;
	}

	virtual void makesound() = 0;

	virtual ~Animal()
	{
		cout << "Animal �Ҹ��� ȣ��" << endl;
	}

};

class Dog : public Animal
{
public:
	Dog()
	{
		cout << "Dog ������ ȣ��" << endl;
	}

	void makesound()
	{
		cout << "Dog: Woooooof!" << endl;
	}

	~Dog()
	{
		cout << "Dog �Ҹ��� ȣ��" << endl;
	}

private:

};

class Cat : public Animal
{
public:
	Cat()
	{
		cout << "Cat ������ ȣ��" << endl;
	}

	void makesound()
	{
		cout << "Cat: Meowoooow!" << endl;
	}

	~Cat()
	{
		cout << "Cat �Ҹ��� ȣ��" << endl;
	}

private:

};

class Cow : public Animal
{
public:
	Cow()
	{
		cout << "Cow ������ ȣ��" << endl;
	}

	void makesound()
	{
		cout << "Cow: Mooooo" << endl;
	}

	~Cow()
	{
		cout << "Cow �Ҹ��� ȣ��" << endl;
	}

private:

};

int main()
{
	Animal* myAnimals[3];
	myAnimals[0] = new Dog;
	myAnimals[1] = new Cat;
	myAnimals[2] = new Cow;

	for (int i = 0; i <= 2; i++) {
		myAnimals[i]->makesound();
	}

	for (int i = 0; i <= 2; i++) {
		delete myAnimals[i];
	}
	return 0;
}