#include"Leauge.hpp"
#include<array>
#include<cmath>
namespace ariel
{
    string createName(int size) 
    {
        constexpr int num=26;
        array<char,num> arr = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
        string name;
        int i=0;
        while (i<size)
        {
            name+=arr.at(rand()%num);
            i++;
        }
        return name;
    
    }
    Team CreateTeam() 
    {
        int min=3;
        string name=createName(min + (rand() % (min+1)));
        const int t=1000;
        double level = round(((double)rand() / RAND_MAX) * t) / t;
        Team team{name, level};
        return team;
    }
    Leauge::Leauge()
    {
        const int size_leauge=20;
        for(int i=0;i<size_leauge;i++)
        {
            this->teams.push_back(CreateTeam());
        }
    }
    Leauge::Leauge(vector<Team> team)
    {
        const unsigned int size_leauge=20;
        for(unsigned int i=0;i<team.size();i++)
        {
            this->teams.push_back(team[i]);
        }
        if(team.size()<size_leauge)
        {
            unsigned int n=size_leauge-team.size()-1;
            for(unsigned int i=0;i<n;i++)
            {
                this->teams.push_back(CreateTeam());
            }
        }
    }

}
