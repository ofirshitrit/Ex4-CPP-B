//
// Created by ofir on 4/30/23.
//
#include <iostream>
#include "Team.hpp"

using namespace ariel;


void Team::attack(Team* other) {

}

int Team::stillAlive() {
    return 0;
}

void Team::print() {

}

void Team::add( const Character* character) {

}

Character *Team::getLeader() const {
    return _leader;
}

const std::vector<std::unique_ptr<Character>> &Team::getFighters() const {
    return fighters;
}
