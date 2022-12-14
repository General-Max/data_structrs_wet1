#ifndef EX1_Team_H
#define EX1_Team_H

#include "Player.h"
#include "AVLTree.h"
#include "sortingTreeMethods.h"

class Team{
    public:
        Team(int teamId, int points);
        ~Team() = default;
        int getTeamId() const;
        int getPoints() const;
        int getPlayedTogether() const;
        int getTotalPlayers() const;
        int getTotalGoals() const;
        int getTotalCards() const;

        void updatePoints(int points);
        void setPlayedTogether(int playedTogether);
        void setTotalPlayers(int totalPlayers);
        void setTotalGoals(int totalGoals);
        void setTotalCards(int totalCards);
        void insertPlayer(Player* player);

        bool isEmptyTeam() const;
    
    private:
        int m_teamId;
        int m_points;
        int m_playedTogether;
        int m_totalPlayers;
        int m_totalGoals;
        int m_totalCards;
        AVLTree<Player*, SortById> m_teamPlayersByID;
        AVLTree<Player*, SortByScore> m_teamPlayersByScore;
};

#endif //EX1_Team_H