#include "Game.hpp"
namespace ariel
{
    Game::Game(Team &team1, Team &team2) : home(team1), out(team2)
    {
        this->home_score = 0;
        this->out_score = 0;
    }
    void Game::resulte()
    {
        const int min = 50;
        const int home_min = 55;
        const int max = 45;
        const int bonus = 10;
        int out_score = min + (rand() % min);
        int in_score = home_min + (rand() % max);

        this->home_score = in_score;
        this->out_score = out_score;

        if (this->home.level > this->out.level)
        {
            this->home_score += bonus;
        }
        else
        {
            this->out_score += bonus;
        }
        this->home.score_in = this->home_score;
        this->out.score_out = this->out_score;
        this->home.abs = this->out_score;
        this->out.abs = this->home_score;
    }
    Team Game::getwin()
    {
        if (this->home_score > this->out_score)
        {
            this->home.number_of_wins++;
            this->out.number_of_losses++;
            return this->home;
        }
        this->home.number_of_losses++;
        this->out.number_of_wins++;
        return this->out;
    }
}