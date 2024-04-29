#include <string>
#include <fstream>
#include <sstream>

std::string read_file_to_string(const std::string& filepath) {
    std::ifstream file(filepath);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
