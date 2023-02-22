#include "figure.h"
#include <iostream>
#include <cmath>
using namespace std;

void figure::define(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
{
	x1 = X1;
	x2 = X2;
	x3 = X3;
	x4 = X4;
	y1 = Y1;
	y2 = Y2;
	y3 = Y3;
	y4 = Y4;

	P = dist(X1, Y1, X2, Y2) + dist(X2, Y2, X3, Y3) + dist(X3, Y3, X4, Y4) + dist(X4, Y4, X1, Y1);
	S = 0.5 * sin(angleBP(X1, Y1, X3, Y3, X2, Y2, X4, Y4) / (180 / PI)) * dist(X1, Y1, X3, Y3) * dist(X2, Y2, X4, Y4);
}

void figure::show()
{
	cout << "(" << x1 << " " << y1 << ")(" << x2 << " " << y2 << ")(" << x3 << " " << y3 << ")(" << x4 << " " << y4 << ") P = " << P << " S = " << S << "\n";
}
bool figure::is_prug()
{
	return (angleBP(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
		angleBP(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
		angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
		angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 90);
}
bool figure::is_square()
{
	return ((angleBP(x1, y1, x2, y2, x1, y1, x4, y4) == 90 &&
		angleBP(x2, y2, x1, y1, x2, y2, x3, y3) == 90 &&
		angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 90 &&
		angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 90) &&

		(dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
			dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
			dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1))
		);
}
bool figure::is_romb()
{
	return ((dist(x1, y1, x2, y2) == dist(x2, y2, x3, y3) &&
		dist(x1, y1, x2, y2) == dist(x3, y3, x4, y4) &&
		dist(x1, y1, x2, y2) == dist(x4, y4, x1, y1)));
}
bool figure::is_in_circle()
{
	return (dist(x1, y1, x2, y2) + dist(x3, y3, x4, y4) == dist(x2, y2, x3, y3) + dist(x4, y4, x1, y1));
}
bool figure::is_out_circle()
{
	return ((angleBP(x1, y1, x2, y2, x1, y1, x4, y4) + angleBP(x3, y3, x2, y2, x3, y3, x4, y4) == 180) &&
		(angleBP(x2, y2, x1, y1, x2, y2, x3, y3) + angleBP(x4, y4, x1, y1, x4, y4, x3, y3) == 180));
}
