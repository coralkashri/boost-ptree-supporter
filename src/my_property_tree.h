#ifndef BOOSTPTREESUPPORTER_MY_PROPERTY_TREE_H
#define BOOSTPTREESUPPORTER_MY_PROPERTY_TREE_H
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

class my_ptree : public boost::property_tree::ptree {
public:
    my_ptree();

    explicit my_ptree(boost::property_tree::ptree &ptree);

    boost::property_tree::ptree& get_base();

    explicit operator std::string();

    my_ptree operator[](const std::string &key);

private:
};

#endif