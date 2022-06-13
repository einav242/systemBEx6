#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <type_traits>
#include <deque>
#include <iterator>
#include <iostream> 
#include <vector>
#include"Team.hpp"
#pragma once
using namespace std;
namespace ariel
{
    class Leauge
    {
    public:
       vector<Team> teams;
        Leauge();
        Leauge(vector<Team> team);
    };
}

