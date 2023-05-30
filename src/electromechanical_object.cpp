/*
 * File: electromechanical_object.cpp
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#include "electromechanical_object.h"
#include <iostream>

// Constructor for ElectroMechanicalObject
ElectroMechanicalObject::ElectroMechanicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, const ElectricalParameters& electricalParameters,
                               MechanicalProperty mechanicalProperty, ElectricalProperty electricalProperty)
    : MechanicalObject(name, mechanicalParameters, mechanicalProperty), ElectricalObject(name, electricalParameters, electricalProperty) {
}

// Destructor for ElectroMechanicalObject
ElectroMechanicalObject::~ElectroMechanicalObject() {
}

// Simulate the object by calling simulate() from both base classes
void ElectroMechanicalObject::simulate(double time) {
    MechanicalObject::simulate(time);
    ElectricalObject::simulate(time);
}