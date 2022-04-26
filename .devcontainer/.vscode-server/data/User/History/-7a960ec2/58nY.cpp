#include <iostream>
#include <vector>

int
main ()
{
  std::vector<int> v;
  for (int i : {6, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, World!" << std::endl;

  if (456 > 123) {
    cout << "456 is greater than 123";
    
  
  return 0;
}
