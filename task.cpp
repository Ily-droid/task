
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

using namespace std;

int main() {
    string path = "/";
    string fname;

    ofstream fout;
    fout.open(path);
    char poshuk_array[100];
    
    

    cout << "Enter name of file";
    cin >> fname;

    std::vector<std::string> strings = { "stuff", "things", "misc" };
    for (auto& s : strings) {
        std::cout << s << std::endl;
    }
   /* for (const auto& file : directory_iterator(path))
        cout << file.path() << endl;*/

    return 0;//EXIT_SUCCESS;
}