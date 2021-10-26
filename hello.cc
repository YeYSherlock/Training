
#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <sstream>
#include <iterator>

#define print(input) std::cout << input << std::endl; 

int main() {
  /**
   * Wondering how to give a shopping list to your pantry? Below is an
   * example utilizing an input string stream. Must include <sstream>
   * 
   * std::istringstream ss;
   * ss.str("1 bread\n1 apple\n");
   * my_pantry << ss;
   */ 

  std::map<std::string, int> map1;
  map1.insert(std::pair<std::string, int>("a", 12));
  print(map1.at("a"));
  map1["abc"]++;
  map1["abc"]++;
  print(map1.at("abc"));
  print(map1.count("none"));
  print(map1.count("abc"));
  // print(map1["none"]);
  // print(map1.begin());

  std::map<std::string, int>::iterator itr;

  print("----");

  for (itr = map1.begin(); itr != map1.end(); itr++) {
    std::cout << itr->first << " " << itr->second << std::endl;
  }





  // input stream learning
  // std::istringstream ss;
  // ss.str("1 bread\n1 apple\n");
  // my_pantry << ss;









}