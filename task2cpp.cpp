//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	//Point();
//	Point(int a, int b) 
//	{
//		a = x;
//		b = y;
//	}
//	void setx(int );
//	void sety(int );
//	int getx();
//	int gety();
//
//	int distance( Point& other)
//	{
//		int newx = x - other.getx();
//		int newy = y - other.gety();
//		return sqrt((newx * newx) + (newy * newy));
//	}
//};
//void Point::setx(int a)
//{
//	a = x;
//}
//void Point::sety(int b)
//{
//	b = y;
//}
//int Point::getx()
//{
//	return x;
//}
//int Point::gety()
//{
//	return y;
//}
//
//int main() {
//	Point p1(6,10);
//	Point p2(4, 6);
//
//	cout << "Distance is " << p1.distance(p2);
//
//}