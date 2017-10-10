#include <iostream>

using std::cout; using std::endl;


class A {
public:
	A() {cout << "A()"<< endl;}
	A(int i) {cout << "A()" << i << endl;}
};

class B {
public:
	B(){cout << "B()" << endl;}
};
class C {
public:
	C() {cout << "C()" << endl;}
};
class D {
public:
	D() {cout << "D()" << endl;}
	D(int i) {cout << "D(int i): " << i << endl;}
};

class Base{
public:
	Base() {cout << "Base()" << endl;}
private:
	static A a;
	B b;
};

class Derived : public Base {
public:
	Derived(): Derived(5) {cout << "Derived()" << endl;}
	Derived(int i) : d(6)
	{
		cout << "Derived(int i)" << i << endl;
	}
private:
	static C c; 
	D d = D(3);

};
int main()
{
	cout << "main in" << endl;
	Derived derived;	
		
	return 0;
}
