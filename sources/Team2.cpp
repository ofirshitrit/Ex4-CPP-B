//
// Created by ofir on 5/11/23.
//

#include "Team2.hpp"
#include "Team.hpp"
using namespace ariel;
using namespace std;


void Team2::attack(Team* enemies) {
    if (this->stillAlive() == 0) {
        throw runtime_error("The team is dead!");
    }
    if (enemies == nullptr) {
        throw invalid_argument("Can't attack nullptr");
    }
    if (enemies->stillAlive() == 0) {
        throw runtime_error("Can't attack dead team!");
    }

    if (!this->getLeader()->isAlive()) {
        this->_leader = getNewLeader();
    }

    Character* victim = chooseVictim(enemies);

    for(Character* fighter : this->getFighters()) {
        if (Cowboy* cowboy = dynamic_cast<Cowboy*>(fighter))
        {
            cowboy->attack(victim);
        }
        else if (Ninja* ninja = dynamic_cast<Ninja*>(fighter))
        {
            ninja->attack(victim);
        }
        if (!victim->isAlive()) {
            if (enemies->stillAlive() == 0) {
                return;
            } else {
                victim = chooseVictim(enemies);
            }
        }
    }
}


void Team2::print() {
    for (Character* fighter : this->getFighters()) {
        fighter->print();
    }
}

void Team2::add(Character *character) {
    if (this->fighters.size() == 10) throw runtime_error("The team cant be over 10 fighters");
    if (character->isBelongToTeam()) {
        this->fighters.pop_back(); //remove the character
        throw runtime_error("This character belong to another team");
    }
    character->setBelongToTeam(true);
    this->getFighters().push_back(character);
}



