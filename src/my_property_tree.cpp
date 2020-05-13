#include "my_property_tree.h"

my_ptree::my_ptree() {

}

my_ptree::my_ptree(boost::property_tree::ptree &ptree) {
    this->get_base() = ptree;
}

my_ptree::operator std::string() {
    std::stringstream ss;
    boost::property_tree::write_json(ss, *this);
    return ss.str();
}

boost::property_tree::ptree &my_ptree::get_base() {
    return *this;
}

my_ptree my_ptree::operator[](const std::string &key) {
    return my_ptree(this->get_base().get_child(key));
}