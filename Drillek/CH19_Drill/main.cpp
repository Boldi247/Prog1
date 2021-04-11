#include "std_lib_facilities.h"

template<typename T> struct S {
	S(T d) : val(d) {}
	
	T& get();
	const T& get() const;

	void set(const T& d);
	T& operator=(const T&);
private:
	T val; //creating a value that can be any type
};

//non-const getter
template<typename T> T& S<T>::get() { return val; }
//const getter
template<class T> const T& S<T>::get() const { return val; }

//setter
template<typename T> void S<T>::set(const T& d) { val = d; }

//'=' operator defining
template<class T> T& S<T>::operator=(const T& d)
{
	val = d;
	return val;
}

//reading values
template<class T> istream& operator>>(istream& is, S<T>& ss)
{
	T v;
	cin >> v;
	if (!is) return is;
	ss = v;
	return is;
}

template<class T> void read_val(T& v)
{
	cin >> v;
}

int main()
{
	
	//-------------------------------
	S<int> s_int(1400);
	S<char> s_char('a');
	S<double> s_double(3.16);
	S<string> s_string("asd");
	vector<int> vi;
	vi.push_back(2);
	vi.push_back(1);
	vi.push_back(9);
	vi.push_back(23);
	S< vector<int> > svi(vi);
	//-------------------------------
	
	/* public val
	cout << "Outputting values:" << endl; cout << endl;

	cout << "s_int = " << s_int.val << endl;
	cout << "s_char = " << s_char.val << endl;
	cout << "s_double = " << s_double.val << endl;
	cout << "s_string = " << s_string.val << endl;
	for (int i = 0; i < svi.val.size(); i++)
	{
		cout << "svi[" << i << "] = " << svi.val[i] << endl;
	}
	//-------------------------------
*/

	cout << "Outputting values:" << endl; cout << endl;

	cout << "s_int = " << s_int.get() << endl;
	cout << "s_char = " << s_char.get() << endl;
	cout << "s_double = " << s_double.get() << endl;
	cout << "s_string = " << s_string.get() << endl;
	for (int i = 0; i < svi.get().size(); i++)
	{
		cout << "svi[" << i << "] = " << svi.get()[i] << endl;
	} cout << endl;

	//-------------------------------
	//using set() to change values
	s_int.set(12);
	s_char.set('b');
	s_double.set(1.23);
	s_string.set("alma:)");
	vi[0] = 12421;
	vi[2] = 9;
	svi.set(vi);

	//outputting values after set()
	cout << "Outputting values - modified with set():" << endl; cout << endl;

	cout << "s_int = " << s_int.get() << endl;
	cout << "s_char = " << s_char.get() << endl;
	cout << "s_double = " << s_double.get() << endl;
	cout << "s_string = " << s_string.get() << endl;
	for (int i = 0; i < svi.get().size(); i++)
	{
		cout << "svi[" << i << "] = " << svi.get()[i] << endl;
	} cout << endl;

	//-------------------------------
	//using '=' operator to give new values
	s_int = 14;
	s_char = 'x';
	s_double = 742.2;
	s_string = "otl";
	vi[0] = 15;
	vi[1] = 242;
	svi = vi;

	//outputting values after '=' operator has been defined
	cout << "Outputting values: ('=' operator used to give the variables a value)" << endl; cout << endl;

	cout << "s_int = " << s_int.get() << endl;
	cout << "s_char = " << s_char.get() << endl;
	cout << "s_double = " << s_double.get() << endl;
	cout << "s_string = " << s_string.get() << endl;
	for (int i = 0; i < svi.get().size(); i++)
	{
		cout << "svi[" << i << "] = " << svi.get()[i] << endl;
	} cout << endl;

	//-------------------------------
	//reading in user defined values
	cout << "Reading user defined values" << endl; cout << endl;
	cout << "s_int = ";
	read_val(s_int);
	cout << "s_char = ";
	read_val(s_char);
	cout << "s_double = ";
	read_val(s_double);
	cout << "s_string = ";
	read_val(s_string);

	cout << endl;
	cout << "Outputting..." << endl;
	cout << "s_int = " << s_int.get() << endl;
	cout << "s_char = " << s_char.get() << endl;
	cout << "s_double = " << s_double.get() << endl;
	cout << "s_string = " << s_string.get() << endl;
}