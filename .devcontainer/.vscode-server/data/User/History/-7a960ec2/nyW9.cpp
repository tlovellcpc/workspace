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

int x = 123;
int y = 456;
if (x > y) {
  cout << "x is greater than y";
} 


  return 0;
}
