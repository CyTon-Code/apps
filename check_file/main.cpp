#include <fstream>

// Can I open this file?
int main(int length, char* args[]){
    std::ifstream fin(args[1]); // I open the file

    int result = int(fin.is_open()); // did we manage to open the file?

    fin.close();  // be sure to close the file

    return result; // I will say the result
}
