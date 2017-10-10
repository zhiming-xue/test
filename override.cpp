#include <iostream>
#include <memory>
#include <cstdio>

using std::cout; using std::endl;
using std::shared_ptr;
using std::make_shared;

class Base {

public:
	virtual Base* getInstance() {
		cout << "Base::getInstance()" << endl;
		return this;
	}
};

class Base2{

public:
	virtual void print() const
	{
		cout << "Base2 :: print()" << endl;
	}

};

class Derived :public Base , public Base2{

public:
	Derived* getInstance() override
	{
		cout << "Derived::getInstance()" << endl;
		return this;
	}
};
int main()
{
	//shared_ptr<Base> p = make_shared<Base>(new Base);	
	auto p = make_shared<Base>();
	p->getInstance();
//	p = make_shared<Derived>(new Derived);	
	p = make_shared<Derived>();
	p->getInstance();
	Derived b;
	Base *p1 = &b;
	Base2 *p2 =  &b;

	printf("p1 :0x%x\n", p1);
	printf("p2 :0x%x\n", p2);
	return 0;
}
