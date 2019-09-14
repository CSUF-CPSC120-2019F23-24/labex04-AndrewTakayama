// Sales prediction

#include <iostream>

int main()
{
  const long COMPANYX2018 = 2103419277; //Sets up Company X's profit from 2018.
  const double PERCENTAGE = 0.18;
  std::cout << "Company X's sales in 2018 was " << COMPANYX2018 << " dollars" << std::endl;

  //Going to calculate Company X's profit in 2019.
  long nextyearsales = COMPANYX2018 * PERCENTAGE;
  long predictedsales = nextyearsales + COMPANYX2018;
  std::cout << "The predicted sales for 2019 are " << predictedsales << " dollars" << std::endl;

  return 0;
}
