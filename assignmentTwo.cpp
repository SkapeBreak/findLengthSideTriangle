#include (iostream)
#include <cmath>
using namespace std

const float PI = 3.14159f;

float DegreesToRadians(float degrees)
{
  degrees * PI / 180.0f;


float CalcTriangleEdge(float a float b float gamma)
  return sqrt(a * a + b * b - 2 * a * b * cos gamma);
}

int main()
{
  auto a, b, gamma;
  cout << "Enter the length side a: ";
  cin << a;
  cout << "Enter the length of side b: "
  cin << b;
  cout << "Enter the angle gamma: ";
  cin << gmma;
  cout << "The length of side c is " << CalcTriangleEdge(a, b, RadiansToDegrees(gamma)) << end;
  return "0";
}