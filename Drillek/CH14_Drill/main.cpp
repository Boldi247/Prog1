#include "std_lib_facilities.h"

struct A{
	virtual void pvf() = 0;
};

struct B1 : A{
	virtual void vf() {cout << "B1::vf()\n";}
	void f() {cout << "B1::f()\n";}
	void pvf() {cout << "B1::pfv()\n";}
};

struct D1 : B1{
	void vf() override {cout << "D1::vf()\n";}
	void f() {cout << "D1::f()\n";}
};

struct D2 : D1{
	void pvf() override {cout << "D2::pvf()\n";}
};

int main()
{
	B1 b1;
	b1.vf();
	b1.f();
	b1.pvf();
	cout << endl;

	D1 d1;
	d1.vf();
	d1.f();
	d1.pvf();
	cout << endl;

	B1& b1_ref {d1};
	b1_ref.vf();
	b1_ref.f();
	b1_ref.pvf();
	cout << endl;

	D2 d2;
	d2.vf();
	d2.f();
	d2.pvf();

	return 0;
}