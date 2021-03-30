/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

int fac(int n) {return n>1 ? n*fac(n-1) : 1;}

int main()
try{
	for (int i = 0; i <= 20; ++i)
	{
		cout << i << "! = " << fac(i) << endl;
	}
	//----------------------------------------


	
}
catch(exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch(...){
	cerr << "exception" << endl;
}