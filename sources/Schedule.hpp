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
#include"Game.hpp"
#include"Leauge.hpp"
#pragma once
using namespace std;
namespace ariel
{
    class Schedule
    {
    private:
        vector<Team> teams;
        vector<Game> game;
        int round;
    public:
        Schedule(Leauge &leage);
        vector<Game> get_game()
        {
            return this->game;
        }
    };
}

