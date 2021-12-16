// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  int numIncreased = 0;
  ifstream myfile ("levels.txt");
  getline(myfile, line);
  int one = stoi(line);
  getline(myfile, line);
  int two = stoi(line);
  getline(myfile, line);
  int three = stoi(line);
  if (myfile.is_open()) {
    while (getline (myfile,line)) {
      int curr = stoi(line);
      if (curr > one)
        numIncreased++;
      one = two;
      two = three;
      three = curr;
    }
    myfile.close();
  }
  cout << numIncreased << endl;
  return 0;
}
