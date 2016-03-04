#include <iostream>
#include <reader.h>

    using std::cout;
    using std::cin;
    using std::string;
    using std::endl;

    int main() {

        string file_path;
        cout << "Enter a config file path, if path unknown press enter." << endl;
        getline(cin, file_path);

        if(file_path == "") {
            file_path = "C:\\Users\\Erik Thompson\\.CLion12\\system\\cmake\\generated\\819ddf16\\819ddf16\\Debug\\config.cfg";
        }

        config_reader::read_config(file_path);
        return 0;
    }
