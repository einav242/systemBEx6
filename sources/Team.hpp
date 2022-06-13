#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <type_traits>
#include <deque>
#include <iterator>
#include <iostream> 
#include <vector>
using namespace std;
#pragma once
namespace ariel
{
    class Team
    {
    public:
        string name;
        double level;
        int score_out;
        int score_in;
        int abs;
        int number_of_wins;
        int number_of_losses;
        Team(string &name,double l);
        bool operator==(const Team &other) const;
        bool operator!=(const Team &other) const;
    };
}
