#include"Team.hpp"

namespace ariel
{
    Team::Team(string& name,double l)
    {
        this->name=name;
        this->level=l;
        this->abs=0;
        this->score_in=0;
        this->score_out=0;
        this->number_of_losses=0;
        this->number_of_wins=0;
    }
    bool Team::operator==(const Team &other) const
    {
        return this->name== other.name;
    }
    bool Team::operator!=(const Team &other) const
    {
        return this->name!= other.name;
    }
    
}