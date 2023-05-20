//
// Created by ofir on 5/1/23.
//

#ifndef EX4_CPP_CHARACTER_HPP
#define EX4_CPP_CHARACTER_HPP

#include "Point.hpp"
#include <iostream>


namespace ariel {
    class Character {
    protected:
        Point _location;
        int _hitPoints;
        std::string _name;
        bool belongToTeam = false;
    public:
        Character(int hitPoints, std::string name, Point location) : _hitPoints(hitPoints), _name(name), _location(location) {}

        virtual ~Character()  = default;

        bool isAlive();

        double distance(Character* other);

        void hit(int num);

        virtual std::string print();

        std::string getName();

        Point& getLocation();

        int getHitPoints() const;

        bool isBelongToTeam() const;

        void setBelongToTeam(bool belongToTeam);

        virtual void attack(Character* victim) = 0;


    };

}


#endif //EX4_CPP_CHARACTER_HPP
