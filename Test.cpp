#include "doctest.h"
#include "iostream"
#include "vector"
#include "Schedule.hpp"
#include "Team.hpp"
#include "statistics.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("Good input")
{
    Leauge leauge1{};
    const unsigned int m=10;
    for(unsigned int i=0;i<m;i++)
    {
        CHECK(leauge1.teams[i].name !=leauge1.teams[i + 10].name);
    }
    for(unsigned int i=0;i<leauge1.teams.size()-1;i++)
    {
        Game game{leauge1.teams.at(i),leauge1.teams.at(i+1)};
        game.resulte();
        int s1=game.home.score_in;
        int s2=game.out.score_out;
        if(s1>s2)
        {
            CHECK(game.getwin()==game.home);
        }
    }

    Leauge leauge2{};
    for(unsigned int i=0;i<m;i++)
    {
        CHECK(leauge2.teams[i].name !=leauge2.teams[i + 10].name);
    }
    for(unsigned int i=0;i<leauge2.teams.size()-1;i++)
    {
        Game game{leauge2.teams.at(i),leauge2.teams.at(i+1)};
        game.resulte();
        int s1=game.home.score_in;
        int s2=game.out.score_out;
        if(s1>s2)
        {
            CHECK(game.getwin()==game.home);
        }
    }

    Leauge leauge3{};
    for(unsigned int i=0;i<m;i++)
    {
        CHECK(leauge3.teams[i].name !=leauge3.teams[i + 10].name);
    }
    for(unsigned int i=0;i<leauge3.teams.size()-1;i++)
    {
        Game game{leauge3.teams[i],leauge3.teams[i+1]};
        game.resulte();
        int s1=game.home.score_in;
        int s2=game.out.score_out;
        if(s1>s2)
        {
            CHECK(game.getwin()==game.home);
        }
    }
    
}