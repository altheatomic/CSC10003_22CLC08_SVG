#ifndef __READ_FILE__
#define __READ_FILE__
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include "../libraries/rapidxml.hpp"

using namespace rapidxml;
using namespace std;

struct Entity
{
    string entity_type = "";
    unordered_map<string, string> attributes;
    string content = "";
};
#endif