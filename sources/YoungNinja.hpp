//
// Created by ofir on 5/1/23.
//

#ifndef EX4_CPP_YOUNGNINJA_HPP
#define EX4_CPP_YOUNGNINJA_HPP
#include <iostream>
#include "Ninja.hpp"
constexpr int YN_HIT_POINTS = 100;
constexpr int YN_SPEED = 14;



namespace ariel {
    class YoungNinja : public Ninja{
    public:
        YoungNinja(std::string name ,Point location) : Ninja(YN_HIT_POINTS, name, location, YN_SPEED){}

    };
}



#endif //EX4_CPP_YOUNGNINJA_HPP
