#include "std_lib_facilities.h"

template<typename> T
struct S {
	explicit S(T vv = 0) : val{vv} {}

	S& operator=(const T&);

	T& get();
	const T& get() const;

private:
	T val;
};

template<typename T>
T& S<T>::get()
{
	return val;
}

template<typename T>
const T& S<T>::get() const
{
	return val;
}


int main()
{

}