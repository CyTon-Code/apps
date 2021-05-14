#ifndef ant_check_file
#define ant_check_file

#include <fstream>

// Can I open this file?
bool check_file(char* _file){
    std::ifstream fin(_file); // I open the file

    bool result = int(fin.is_open()); // did we manage to open the file?

    fin.close();  // be sure to close the file

    return result; // I will say the result
}

#endif // ant_check_file
