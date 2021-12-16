// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  long finalHoriz = 0;
  long finalDepth = 0;
  long aim = 0;
  ifstream myfile ("instructions.txt");
  string instruction;
  int distance;
  if (myfile.is_open()) {
    while (myfile >> instruction >> distance) {
      // cout << instruction << " " << distance << endl;
      if (instruction == "forward") {
        finalHoriz += distance;
        finalDepth += distance * aim;
      } else if (instruction == "up") {
        aim -= distance;
      } else {
        aim += distance;
      }
    }
    myfile.close();
  }
  cout << (finalHoriz * finalDepth) << endl;
  return 0;
}
