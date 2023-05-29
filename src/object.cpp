#include "object.h"
#include <iostream>

Object::Object(const std::string& name, double mass, double volume, MechanicalProperty mechanicalProperty)
    : name_(name), mass_(mass), volume_(volume), mechanicalProperty_(mechanicalProperty) {
}

Object::~Object() {
}

std::string Object::getName() const {
    return name_;
}

double Object::getMass() const {
    return mass_;
}

double Object::getVolume() const {
    return volume_;
}

MechanicalProperty Object::getMechanicalProperty() const {
    return mechanicalProperty_;
}

void Object::simulate(double time) {
    // Perform simulation based on mechanical properties
    if (mechanicalProperty_ == MechanicalProperty::RIGID) {
        std::cout << "Simulating rigid object " << name_ << " for " << time << " seconds.\n";
        // Implement rigid body simulation here
    } else if (mechanicalProperty_ == MechanicalProperty::ELASTIC) {
        std::cout << "Simulating elastic object " << name_ << " for " << time << " seconds.\n";
        // Implement elastic body simulation here
    } else if (mechanicalProperty_ == MechanicalProperty::AERODYNAMIC) {
        std::cout << "Simulating aerodynamic object " << name_ << " for " << time << " seconds.\n";
        // Implement aerodynamic simulation here
    }
}