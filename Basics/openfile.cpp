#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

   ifstream my_file("example.txt");
    if (my_file.is_open()) {
       string line;
        while (getline(my_file, line)) {
            cout << line << endl;
        }
        my_file.close();
    } else {
     cerr << "Error opening the file." << endl;
    }
    return 0;
}

