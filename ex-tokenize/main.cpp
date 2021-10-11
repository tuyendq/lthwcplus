/**
 * Tokenize a string using stringstream
 */
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

int main() {

  string line = "Who is the author of C++?";

  vector<string> tokens;

  stringstream check1(line);

  string intermediate;
  
  while(getline(check1, intermediate, ' ')) {
    tokens.push_back(intermediate);
  }

  for (int i = 0; i < tokens.size(); i++) {
    cout << tokens[i] << '\n';
  }

  return 0;

} 