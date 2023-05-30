/*
 * File: object.h
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#pragma once

#include <string>
#include "object.h"

// Derived class for objects with both mechanical and electrical properties
class ElectroMechanicalObject : public MechanicalObject, public ElectricalObject {
public:
    // Constructor
    ElectroMechanicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, const ElectricalParameters& electricalParameters,
                   MechanicalProperty mechanicalProperty, ElectricalProperty electricalProperty);
    
    // Destructor
    ~ElectroMechanicalObject();

    // Simulate the object for a given time
    void simulate(double time);
};