// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  int gamma = 0;
  ifstream myfile ("diagnostic.txt");
  if (myfile.is_open()) {
    while (getline (myfile, line)) {

    }
    myfile.close();
  }
  cout << numIncreased << endl;
  return 0;
}
