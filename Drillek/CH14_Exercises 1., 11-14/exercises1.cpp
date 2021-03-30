/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

class Smiley : public Circle
{
public:
	using Circle::Circle;
	void draw_lines() const;
};

class Frowny : public Circle
{
public:
	using Circle::Circle;
	void draw_lines() const;
};

int main()
{
	constexpr int win_width = 600, win_height = 400;
	constexpr int win_x = 100, win_y = 100;
	const Point win_tl{ win_x, win_y };
	Simple_window win{ win_tl, win_width, win_height, "Smiley and Frowny" };

	constexpr int emoticon_radius = 100;
	Smiley smiley{ Point{ win_width / 2 - 150, win_height / 2 }, emoticon_radius };
	Frowny frowny{ Point{ win_width / 2 + 150, win_height / 2 }, emoticon_radius };

	smiley.set_color(Color::black);
	frowny.set_color(Color::black);

	win.attach(smiley);
	win.attach(frowny);
	win.wait_for_button();
}

void Smiley::draw_lines() const
{
	// the eyes
	fl_arc(point(0).x + radius() / 2, 
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	fl_arc(point(0).x + radius() * 1.3, 
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	// draw the mouth
	fl_arc(point(0).x + radius() / 1.3, 
		point(0).y + radius(), radius() / 2, radius() / 2, 240, 300);

	// for drawing the face
	Circle::draw_lines();
}

void Frowny::draw_lines() const
{
	// the eyes
	fl_arc(point(0).x + radius() / 2,
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	fl_arc(point(0).x + radius() * 1.3,
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	// draw the mouth
	fl_arc(point(0).x + radius() / 1.3,
		point(0).y + radius() * 1.5, radius() / 2, radius() / 2, 45, 135);

	// for drawing the face
	Circle::draw_lines();
}