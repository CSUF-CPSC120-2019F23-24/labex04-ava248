// Sales prediction

#include <iostream>

int main()
{
  //Show the total sales
  const long TOTAL_SALES = 2103419277;
  const long long TODAYS_SALES = TOTAL_SALES * 1.18;


  std::cout << "Last year's sales were $" << TOTAL_SALES << std::endl;
  std::cout << "This year's sales prediction: $" << TODAYS_SALES << std::endl;




  return 0;
}
