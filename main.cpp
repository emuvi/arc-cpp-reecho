#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  auto only_args = strncmp(argv[0], "reargs", 4) == 0;
  auto only_inputs = strncmp(argv[0], "reinputs", 6) == 0;
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
