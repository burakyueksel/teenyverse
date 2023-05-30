/*
 * File: physical_object.cpp
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#include "physical_object.h"
#include <iostream>

// Constructor for PhysicalObject
PhysicalObject::PhysicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty,
                               const ElectricalParameters& electricalParameters, ElectricalProperty electricalProperty,
                               const ChemicalParameters& chemicalParameters, ChemicalProperty chemicalProperty,
                               const BiologicalParameters& biologicalParameters, BiologicalProperty biologicalProperty)
    : MechanicalObject(name, mechanicalParameters, mechanicalProperty),
      ElectricalObject(name, electricalParameters, electricalProperty),
      ChemicalObject(name, chemicalParameters, chemicalProperty),
      BiologicalObject(name, biologicalParameters, biologicalProperty) {
}

// Destructor for PhysicalObject
PhysicalObject::~PhysicalObject() {
}

// Simulate the object by calling simulate() from all base classes
void PhysicalObject::simulate(double time) {
    MechanicalObject::simulate(time);
    ElectricalObject::simulate(time);
    ChemicalObject::simulate(time);
    BiologicalObject::simulate(time);
}