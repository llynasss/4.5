
// Lab_04_4.cpp
// Хмиз Магдалина
// Лабораторна робота № 4.5
//«Попадання» у плоску фігуру
// Варіант 21

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
 double x, y, R;

 cout << "R = "; cin >> R;

 srand((unsigned)time(NULL));

 for (int i = 0; i < 10; i++)
 {
  cout << "x = "; cin >> x;
  cout << "y = "; cin >> y;

  if ((x > 0 && y > 0 && x * x + y * y <= R * R && y >= x)
   || (x < 0 && y < 0 && x * x + y * y <= R * R && y <= x))
   cout << "yes" << endl;
  else
   cout << "no" << endl;
 }

 cout << endl << fixed;

 for (int i = 0; i < 10; i++)
 {
  x = (R + R) * rand() / RAND_MAX - R;
  y = (R + R) * rand() / RAND_MAX - R;

  if ((x > 0 && y > 0 && x * x + y * y <= R * R && y >= x)
   || (x < 0 && y < 0 && x * x + y * y <= R * R && y <= x))
   cout << setw(8) << setprecision(4) << x << "   "
   << setw(8) << setprecision(4) << y << "   " << "yes" << endl;
  else
   cout << setw(8) << setprecision(4) << x << "   "
   << setw(8) << setprecision(4) << y << "   " << "no" << endl;
 }
 return 0;
}
