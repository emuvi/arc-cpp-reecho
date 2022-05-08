#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string name = argv[0];
  auto only_args = name.find("args") > -1;
  auto only_inputs = name.find("inputs") > -1;
  if (!only_inputs) {
    for (int i = 0; i < argc; i++) {
      std::cout << argv[i] << std::endl;
    }
  }
  if (!only_args) {
    std::string line;
    while (getline(std::cin, line)) {
      std::cout << line << std::endl;
    }
  }
}
