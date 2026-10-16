#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double VISCOSITY = 0.009;    
  double DIAMETER = 1.91;      
  double CRITICAL_RE = 9.2e5;  
  double velocity;                  
  double reynoldsNumber;             
  double lambda;                   
  double velocities[] = { 1, 2, 5, 10, 20, 50, 100 };
  int velocityCount = sizeof(velocities) / sizeof(velocities[0]);

  for (int velocityIndex = 0; velocityIndex < velocityCount; velocityIndex++) {
  velocity = velocities[velocityIndex];

  reynoldsNumber = (velocity * DIAMETER) / VISCOSITY;

  if (reynoldsNumber > CRITICAL_RE) {
  lambda = 0.021 / pow(DIAMETER, 0.3);
}
  else {
  lambda = pow((1.5e-6 / DIAMETER + 1 / reynoldsNumber), 0.3);
}

  cout << velocity << "\t\t"
       << reynoldsNumber << "\t"
       << lambda << endl;
}

  return 0;
}