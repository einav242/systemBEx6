#include "Schedule.hpp"
#include "Team.hpp"
#include "Leauge.hpp"
#include "vector"
#include <iostream>
#include "algorithm"
using namespace std;
namespace ariel
{
    class statistics
    {
    private:
        Leauge league;
        Schedule schedule;
        vector<Team> slim_difference;
        vector<Team> winers;

    public:
        statistics(Leauge &league, Schedule &schedule);
        vector<Team> LeadingTeams(int number);
        int max_sequence_of_wins();
        int max_sequence_of_losess();
        int score_more_than_absorbed();
        int diff(unsigned int game);
        int more_score(int game);
    };
};