// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  int finalHoriz = 0;
  int finalDepth = 0;
  ifstream myfile ("instructions.txt");
  string instruction;
  int distance;
  if (myfile.is_open()) {
    while (myfile >> instruction >> distance) {
      // cout << instruction << " " << distance << endl;
      if (instruction == "forward") {
        finalHoriz += distance;
      } else if (instruction == "up") {
        finalDepth -= distance;
      } else {
        finalDepth += distance;
      }
    }
    myfile.close();
  }
  cout << (finalHoriz * finalDepth) << endl;
  return 0;
}
