#include "std_lib_facilities.h"

template<typename T>
struct S{
	S() {}

	S(T t) : val(t) {}
	
	istream operator>>(T t) {cin >> val;}

	T val;
};

int main()
{
S<int> si;
si.val = 13;
cout << si.val << endl;

S<double> sd;
sd.val = 6.9301;
cout << sd.val << endl;

S<char> sc;
sc.val = 'f';
cout sc.val << endl;

S<string> ss;
ss.val = "asdefg";
cout << ss.val << endl;

S<vector<int>> svi(vector<int>(1, 3, 100, 14, 15));
for (int i : svi.val)
{
	cout << i << " ";
} cout << endl;



return 0;
}