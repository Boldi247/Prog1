/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

int main()
{
	using namespace Graph_lib;

	Simple_window win {Point{100, 100}, 1200, 700, "Canvas"};

	Rectangle rect1 {Point{450,100}, 100, 50};	//1
	rect1.set_color(Color::red);
	win.attach(rect1);

	Polygon poly;								
	poly.add(Point{600,100});
	poly.add(Point{700,100});
	poly.add(Point{700,150});
	poly.add(Point{600,150});
	poly.set_color(Color::blue);
	win.attach(poly);
	win.wait_for_button();

	Rectangle rect2 {Point{20,40}, 100, 30};	//2
	win.attach(rect2);

	Text t {Point(42, 60), "Howdy!"};
	win.attach(t);
	win.wait_for_button();

	Text initial1 {Point{295, 550}, "K"};		//3 hogyan tudnék vastag vonalakat szedni rá?
	Text initial2 {Point{330, 550}, "B"};
	initial1.set_font(Font::times_bold);
	initial2.set_font(Font::times_bold);
	initial1.set_font_size(40);
	initial2.set_font_size(40);
	initial1.set_color(Color::blue);
	initial2.set_color(Color::red);
	win.attach(initial1);
	win.attach(initial2);
	win.wait_for_button();

	//4 - 3x3 tic tac toe board
	Rectangle white_base {Point{800, 50}, 150, 150};
	white_base.set_fill_color(Color::white);
	win.attach(white_base);

	Rectangle red_sq_1 {Point{850, 50}, 50, 50};
	red_sq_1.set_fill_color(Color::red);
	Rectangle red_sq_2 {Point{800, 100}, 50, 50};
	red_sq_2.set_fill_color(Color::red);
	Rectangle red_sq_3 {Point{900, 100}, 50, 50};
	red_sq_3.set_fill_color(Color::red);
	Rectangle red_sq_4 {Point{850, 150}, 50, 50};
	red_sq_4.set_fill_color(Color::red);

	win.attach(red_sq_1);
	win.attach(red_sq_2);
	win.attach(red_sq_3);
	win.attach(red_sq_4);

	win.wait_for_button();

	//5

	//6

	//house - 7
	Rectangle house_chimney{Point{770,320}, 20, 100};
	house_chimney.set_fill_color(Color::dark_red);
	win.attach(house_chimney);
	
	Rectangle house_box{Point{600, 400}, 200, 200};
	win.attach(house_box);
	house_box.set_fill_color(Color::yellow);

	Polygon house_roof;
	house_roof.add(Point{600, 400});
	house_roof.add(Point{800, 400});
	house_roof.add(Point{700, 250});
	house_roof.set_fill_color(Color::red);
	win.attach(house_roof);

	Rectangle house_door{Point{675, 525}, 50, 75};
	house_door.set_fill_color(Color::dark_red);
	win.attach(house_door);

	Rectangle house_window1{Point{625, 460}, 40, 40};
	Rectangle house_window2{Point{735, 460}, 40, 40};
	house_window1.set_fill_color(Color::cyan);
	house_window2.set_fill_color(Color::cyan);
	win.attach(house_window1);
	win.attach(house_window2);

	

	win.wait_for_button();



	//olympic 5 rings
	Circle r1 {Point{100, 200}, 100};
	r1.set_color(Color::blue);
	Circle r2 {Point{350, 200}, 100};

	Circle r3 {Point{600, 200}, 100};
	r3.set_color(Color::red);
	Circle r4 {Point{225, 320}, 100};
	r4.set_color(Color::yellow);
	Circle r5 {Point{475, 320}, 100};
	r5.set_color(Color::green);

	r1.set_style(Line_style(Line_style::solid, 10));
	r2.set_style(Line_style(Line_style::solid, 10));
	r3.set_style(Line_style(Line_style::solid, 10));
	r4.set_style(Line_style(Line_style::solid, 10));
	r5.set_style(Line_style(Line_style::solid, 10));

	win.attach(r1);
	win.attach(r2);
	win.attach(r3);
	win.attach(r4);
	win.attach(r5);

	win.wait_for_button();



	
}