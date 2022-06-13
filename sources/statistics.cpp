
#include "statistics.hpp"

namespace ariel
{

    statistics::statistics(Leauge &league1, Schedule &schedule1):league(league1), schedule(schedule1)
    {
        unsigned int i=0;
        while (i<this->league.teams.size())
        {
            this->winers.push_back(league.teams.at(i));
            slim_difference.push_back(league.teams.at(i));
            i++;
        }
        sort(slim_difference.begin(), slim_difference.end(), [](Team const &one, Team  const &two){
            return ((one.score_out+one.score_in)-one.abs) < ((two.score_out+two.score_in)- two.abs);
        });
    }

    vector<Team > statistics::LeadingTeams(int number) 
    {
        sort(winers.end(), winers.end(), [](Team const &team1, Team const &two)
        {
            return (team1.number_of_wins/team1.number_of_losses)<(two.number_of_wins/two.number_of_losses);
        });
        vector<Team>teams(this->winers.begin(), this->winers.begin()+number);
        return teams;
    }

    int statistics::max_sequence_of_wins() 
    {
        int max = 0;
        int counter=0;
        unsigned int i=0;
        while (i<this->league.teams.size())
        {
            counter=0;
            for(unsigned int j=0;j<this->schedule.get_game().size();j++)
            {
                if(this->league.teams.at(i)==this->schedule.get_game().at(i).getwin())
                {
                    counter++;
                }
                else
                {
                    counter=0;
                }
            }
            if(counter>max)
            {
                max=counter;
            }
            i++;
        }
        return max;
    }

    int statistics::max_sequence_of_losess() 
    {
        int max = 0;
        int counter=0;
        unsigned int i=0;
        while (i<this->league.teams.size())
        {
            counter=0;
            for(unsigned int j=0;j<this->schedule.get_game().size();j++)
            {
                if(this->league.teams.at(i)!=this->schedule.get_game().at(i).getwin())
                {
                    counter++;
                }
                else
                {
                    counter=0;
                }
            }
            if(counter>max)
            {
                max=counter;
            }
            i++;
        }
        return max;
    }

    int statistics::score_more_than_absorbed(){
        int ans =0;
        unsigned int i=0;
        while(i<this->league.teams.size())
        {
            int out=this->league.teams.at(i).score_out;
            int in=this->league.teams.at(i).score_in;
            int abs=this->league.teams.at(i).abs;
            if(in+out>abs)
            {
                ans++;
            }
            i++;
        }
        return ans;
    }

    int statistics::diff(unsigned int game) 
    {
        int home=this->schedule.get_game().at(game).home_score;
        int out=this->schedule.get_game().at(game).out_score;
        int ans=home-out;
        if(ans>0)
        {
            return ans;
        }
        return -ans;
    }
   
    int statistics::more_score(int game) {
        int home=(int)this->schedule.get_game().at((unsigned int)game).home_score;
        int out=(int)this->schedule.get_game().at((unsigned int)game).out_score;
        int ans=home-out;
        if(ans>0)
        {
            return home;
        }
        return out;
    }
}