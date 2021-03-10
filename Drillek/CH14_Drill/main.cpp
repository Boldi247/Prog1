#include "std_lib_facilities.h"

struct A {
	virtual void pvf() const = 0;
}

struct B1 : A {
	virtual void vf() {cout << "B1::vf()\n";}
	void f() {cout << "B1::f()\n";}
	void pvf() {cout << "B::pvf()\n";}
};

struct D1 : B1 {
	void vf() override {cout << "D1::vf()\n";}
	void f() {cout << "D1::f()\n";}
};

struct D2 : D1 {
	void pvf() override {cout << "D2::pvf()\n";}
};

int main()
{
	B1 b1;
	b1.vf();
	b1.f();

	D1 d1;
	d1.vf();
	d1.f();
	
	B1& b1ref = d1; //"r" as reference
	b1ref.vf();
	b1ref.f();

	D2 d2;
	d2.vf();
	d2.f();
	d2.pvf();

	return 0;
}