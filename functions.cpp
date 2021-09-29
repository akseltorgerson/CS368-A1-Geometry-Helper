#define _USE_MATH_DEFINES

#include <math.h>
using namespace std;

float AreaOfCircle(const float& radius) {
  return (M_PI * (pow(radius, 2)));
}

float AreaOfTriangle(const float& width, const float& height) {
  return (0.5 * width * height);
}

float AreaOfRectangle(const float& width, const float& height) {
  return (width * height);
}

float VolumeOfSphere(const float& radius) {
  return ((float)(4/3 * M_PI * (pow(radius, 3))));
}

float VolumeOfCone(const float& radius, const float& height) {
  return ((1/3) * M_PI * (pow(radius, 3)) * height);
}

float VolumeOfBox(const float& width, const float& height, const float& length) {
  return (width * height * length);
}

