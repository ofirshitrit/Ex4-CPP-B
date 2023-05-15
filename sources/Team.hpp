//
// Created by ofir on 4/30/23.
//

#ifndef EX4_CPP_TEAM_HPP
#define EX4_CPP_TEAM_HPP

#include <iostream>
#include <vector>
#include <memory>
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Cowboy.hpp"


namespace ariel {

    class Team {
    private:
        Character* _leader;
        std::vector<Character*> fighters;
    public:
        Team(Character* leader) : _leader(leader) , fighters(){}

        ~Team() = default;

        void add(const Character* character);

        int stillAlive();

        virtual void attack(Team *other);

        virtual void print();

        Character *getLeader() const;

        const std::vector<Character *> &getFighters() const;

    };
}


#endif //EX4_CPP_TEAM_HPP
