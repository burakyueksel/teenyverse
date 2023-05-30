/*
 * File: object.h
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#pragma once

#include <string>
#include "object.h"

// Derived class for objects with all known object properties
class PhysicalObject : public MechanicalObject, public ElectricalObject, public ChemicalObject, public BiologicalObject {
public:
    // Constructor
    PhysicalObject(const std::string& name,
                   const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty,
                   const ElectricalParameters& electricalParameters, ElectricalProperty electricalProperty,
                   const ChemicalParameters& chemicalParameters, ChemicalProperty chemicalProperty,
                   const BiologicalParameters& biologicalParameters, BiologicalProperty biologicalProperty);

    // Destructor
    ~PhysicalObject();

    // Simulate the object for a given time
    void simulate(double time);
};