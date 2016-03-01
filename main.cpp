#include <iostream>
#include <fstream>
#include "reader.h"

using std::string;

namespace config_reader {

}

int main() {

    string file_line;
    std::ifstream InputFile;
    InputFile.open("C:\\Users\\Erik Thompson\\.CLion12\\system\\cmake\\generated\\819ddf16\\819ddf16\\Debug\\config.cfg");

    int line_count = 0;


    while (getline(InputFile, file_line)) {
        line_count = line_count + 1;
    }
    
    std::cout << line_count << std::endl;

    int i = 0;
    string file_contents[line_count];
    while(getline(InputFile, file_line)) {
        file_contents[i] = file_line;
        i = i + 1;
    }
    for(i = 0; i < line_count; i++) {
        std::cout << file_contents[i];
    }


    InputFile.close();
    return 0;
}

string* read_config(string config_file_path);