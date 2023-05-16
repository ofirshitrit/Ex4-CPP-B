//
// Created by ofir on 4/30/23.
//
#include <iostream>
#include "Team.hpp"

using namespace ariel;
using namespace std;




void Team::attack(Team* other) {
    if (other == nullptr) throw invalid_argument("cant attack nullptr");
}

int Team::stillAlive() {
    return this->fighters.size();
}

void Team::print() {
    for(unsigned int i = 0; i < this->fighters.size(); i++)
    {
       this->fighters[i]->print();
    }
}

void Team::add( Character* character) {
    if (this->fighters.size() == 10) throw runtime_error("The team cant be over 10 fighters");
    if (character->isBelongToTeam()) {
        this->fighters.pop_back(); //remove the character
        throw runtime_error("this character belong to other team");
    }
    character->setBelongToTeam(true);
    this->fighters.push_back(character);
}

Character *Team::getLeader() const {
    return _leader;
}

const std::vector<Character *> &Team::getFighters() const {
    return fighters;
}

Team::Team(Character *leader)  : _leader(leader) , fighters()
{
    if (leader->isBelongToTeam()) {
        this->fighters.pop_back(); //remove the leader
        throw runtime_error("this captain belong to other team");
    }
    fighters.push_back(leader);
    leader->setBelongToTeam(true);
}

