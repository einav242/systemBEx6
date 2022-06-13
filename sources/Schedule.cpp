#include"Schedule.hpp"
namespace ariel
{
    Schedule::Schedule(Leauge &leage)
    {
        this->round=1;
        this->teams=leage.teams;
        vector<Team> g1;
        vector<Team> g2;
        const unsigned int groupSize=20;
        unsigned int count=0;
        cout<<"start:\n";
        for (unsigned int i = 1; i < groupSize; i++) {
            cout << "*round num: " << this->round<< "\ngroup1: \n";
            const unsigned int h=groupSize / 2;
            unsigned int j=0;
            while (j<0)
            {
                cout << this->teams.at(j).name << " ";
                g1.push_back(teams.at(j));
                j++;
            }
            cout << "\ngroup2: \n";
            unsigned int k=groupSize - 1;
            while (k>=h)
            {
                cout << this->teams.at(k).name << " ";
                g2.push_back(teams.at(k));
                k--;
            }
            cout << "\n";
            Team tmp = this->teams.at(groupSize - 1);
            j=groupSize - 1;
            while (j>0)
            {
                this->teams.at(j) = this->teams.at(j - 1);
                j--;
            }
            this->teams.at(1) = tmp;
            this->round++;
        }
        for (unsigned int i = 0; i <g1.size() ; ++i) {
            Game current {g1.at(count), g2.at(count)};
            current.resulte();
            count++;
            this->game.push_back(current);
        }
    }
}