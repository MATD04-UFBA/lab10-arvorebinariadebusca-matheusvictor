#include <iostream>
#include <ctime>
#include <cstdlib>

#include "cNode.h"
#include "cABB.h"
  
// ***********************************************
// ***********************************************
// ***********************************************

int main(int argv, char** argc) {
	
std::vector<int> v = { 70, 40, 1, 90, 25, 34, 12, 100, 76, 23 };

  cABB t(v);

  std::cout << "====== POS ======" << std::endl;
  t.posOrderTraversal();
  std::cout << "=================" << std::endl;

  std::cout << "====== IN ======" << std::endl;
  t.inOrderTraversal();
  std::cout << "=================" << std::endl;

  std::cout << "====== PRE ======" << std::endl;
  t.preOrderTraversal();
  std::cout << "=================" << std::endl;
    
  srand (time(NULL));

  for (int i = 0 ; i < 20 ; i++) {
    int n = rand() % 100 + 1;
    std::cout << "[ " << n << " ] ";

    if (t.searchValue(n))
      std::cout << "encontrado!" << std::endl;
    else
      std::cout << "não encontrado!" << std::endl;
    }    
}
