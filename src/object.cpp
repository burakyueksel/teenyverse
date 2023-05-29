#include "object.h"
#include <iostream>

// Constructor for MechanicalObject
MechanicalObject::MechanicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty)
    : name_(name), mechanicalParameters_(mechanicalParameters), mechanicalProperty_(mechanicalProperty) {
}

// Destructor for MechanicalObject
MechanicalObject::~MechanicalObject() {
}

// Getter for object name
std::string MechanicalObject::getName() const {
    return name_;
}

// Getter for mechanical parameters
MechanicalParameters MechanicalObject::getMechanicalParameters() const {
    return mechanicalParameters_;
}

// Getter for mechanical property
MechanicalProperty MechanicalObject::getMechanicalProperty() const {
    return mechanicalProperty_;
}

// Simulate the object for a given time based on its mechanical property
void MechanicalObject::simulate(double time) {
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

// Constructor for ElectricalObject
ElectricalObject::ElectricalObject(const std::string& name, const ElectricalParameters& electricalParameters, ElectricalProperty electricalProperty)
    : name_(name), electricalParameters_(electricalParameters), electricalProperty_(electricalProperty) {
}

// Destructor for ElectricalObject
ElectricalObject::~ElectricalObject() {
}

// Getter for object name
std::string ElectricalObject::getName() const {
    return name_;
}

// Getter for electrical parameters
ElectricalParameters ElectricalObject::getElectricalParameters() const {
    return electricalParameters_;
}

// Getter for electrical property
ElectricalProperty ElectricalObject::getElectricalProperty() const {
    return electricalProperty_;
}

// Simulate the object for a given time based on its electrical property
void ElectricalObject::simulate(double time) {
    if (electricalProperty_ == ElectricalProperty::CONDUCTIVE) {
        std::cout << "Simulating conductive object " << name_ << " for " << time << " seconds.\n";
        // Implement conductive simulation here
    } else if (electricalProperty_ == ElectricalProperty::INSULATING) {
        std::cout << "Simulating insulating object " << name_ << " for " << time << " seconds.\n";
        // Implement insulating simulation here
    }
}

// Constructor for PhysicalObject
PhysicalObject::PhysicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, const ElectricalParameters& electricalParameters,
                               MechanicalProperty mechanicalProperty, ElectricalProperty electricalProperty)
    : MechanicalObject(name, mechanicalParameters, mechanicalProperty), ElectricalObject(name, electricalParameters, electricalProperty) {
}

// Destructor for PhysicalObject
PhysicalObject::~PhysicalObject() {
}

// Simulate the object by calling simulate() from both base classes
void PhysicalObject::simulate(double time) {
    MechanicalObject::simulate(time);
    ElectricalObject::simulate(time);
}