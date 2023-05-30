/*
 * File: object.cpp
 * Author: Burak Yueksel
 * Date: 2023-05-29
 */

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

// Constructor for ChemicalObject
ChemicalObject::ChemicalObject(const std::string& name, const ChemicalParameters& chemicalParameters, ChemicalProperty chemicalProperty)
    : name_(name), chemicalParameters_(chemicalParameters), chemicalProperty_(chemicalProperty) {
}

// Destructor for ChemicalObject
ChemicalObject::~ChemicalObject() {
}

// Getter for object name
std::string ChemicalObject::getName() const {
    return name_;
}

// Getter for chemical parameters
ChemicalParameters ChemicalObject::getChemicalParameters() const {
    return chemicalParameters_;
}

// Getter for chemical property
ChemicalProperty ChemicalObject::getChemicalProperty() const {
    return chemicalProperty_;
}

// Simulate the object for a given time based on its chemical property
void ChemicalObject::simulate(double time) {
    if (chemicalProperty_ == ChemicalProperty::REACTIVE) {
        std::cout << "Simulating reactive object " << name_ << " for " << time << " seconds.\n";
        // Implement reactive simulation here
    } else if (chemicalProperty_ == ChemicalProperty::STABLE) {
        std::cout << "Simulating stable object " << name_ << " for " << time << " seconds.\n";
        // Implement stable simulation here
    }
}

// Constructor for BiologicalObject
BiologicalObject::BiologicalObject(const std::string& name, const BiologicalParameters& biologicalParameters, BiologicalProperty biologicalProperty)
    : name_(name), biologicalParameters_(biologicalParameters), biologicalProperty_(biologicalProperty) {
}

// Destructor for BiologicalObject
BiologicalObject::~BiologicalObject() {
}

// Getter for object name
std::string BiologicalObject::getName() const {
    return name_;
}

// Getter for biological parameters
BiologicalParameters BiologicalObject::getBiologicalParameters() const {
    return biologicalParameters_;
}

// Getter for biological property
BiologicalProperty BiologicalObject::getBiologicalProperty() const {
    return biologicalProperty_;
}

// Simulate the object for a given time based on its biological property
void BiologicalObject::simulate(double time) {
    if (biologicalProperty_ == BiologicalProperty::LIVING) {
        std::cout << "Simulating living object " << name_ << " for " << time << " seconds.\n";
        // Implement living simulation here
    } else if (biologicalProperty_ == BiologicalProperty::NON_LIVING) {
        std::cout << "Simulating non-living object " << name_ << " for " << time << " seconds.\n";
        // Implement non-living simulation here
    }
}