
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int main() {
  std::string usr;
  std::string usr2;
  std::vector<std::string> lizzo;

  std::cout << "Commands: ADD, PRINT, REMOVE, QUIT" << std::endl;
  while (true)
  {
    std::cin >> usr;
    if(usr == "ADD") {
      std::cin >> usr2;
      lizzo.push_back(usr2);
    }
    if(usr == "REMOVE") {
      lizzo.pop_back();
    }
    if(usr == "PRINT") {
      if(!lizzo.size()){ continue; }
      for(int x = 0; x < lizzo.size(); x++){
        std::cout << lizzo[x] << std::endl;
      }
    }
    if(usr == "QUIT") {
      break;
    }
    std::cout << "number of names in vector:\n" << lizzo.size() << std::endl;
  }
}