#include <iostream>
#include "my_property_tree.cpp"

int main() {
    my_ptree pt;
    boost::property_tree::read_json("../test_sources/source_a.json", pt.get_base());
    std::cout << (std::string)pt << std::endl;

    return EXIT_SUCCESS;
}