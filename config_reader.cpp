#include <iostream>
#include <fstream>
#include "reader.h"

namespace config_reader {

    using std::string;

    string* read_config(string config_file_path) {


    std::ifstream InputFile;
    InputFile.open(config_file_path);

    int line_count = 0;
    string file_line;

    while (getline(InputFile, file_line)) {
        line_count = line_count + 1;
    }

    InputFile.close();

    std::ifstream NewInputFile;
    NewInputFile.open(config_file_path);

    int i = 0;
    string file_contents[line_count];

    while(getline(NewInputFile, file_line)) {
        file_contents[i] = file_line;
        i = i++;
    }

    NewInputFile.close();
    return file_contents;
}

}