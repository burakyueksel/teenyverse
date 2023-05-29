#include "object.h"
#include "../parameters/mechanical_parameters.h"
#include <iostream>

Object::Object(const std::string& name, const MechanicalParameters& parameters, MechanicalProperty mechanicalProperty)
    : name_(name), parameters_(parameters), mechanicalProperty_(mechanicalProperty) {
}

Object::~Object() {
}

std::string Object::getName() const {
    return name_;
}

MechanicalParameters Object::getParameters() const {
    return parameters_;
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