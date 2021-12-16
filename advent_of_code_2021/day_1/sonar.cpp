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
  int prev = stoi(line);
  if (myfile.is_open()) {
    while (getline (myfile,line)) {
      int curr = stoi(line);
      if (curr > prev)
        numIncreased++;
      prev = curr;
    }
    myfile.close();
  }
  cout << numIncreased << endl;
  return 0;
}
