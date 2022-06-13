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
using namespace std;
namespace ariel
{
    class Game
    {
    public:
        Team home;
        Team out;
        int home_score;
        int out_score;
        Game(Team &team1,Team& team2);
        void resulte();
        Team getwin();
    };
}

