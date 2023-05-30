/*
 * File: main.cpp
 * Author: Burak Yueksel
 * Date: 2023-05-29
 */

#include <iostream>
#include "electromechanical_object.h"
#include "physical_object.h"
#include "simplest_point_quadrotor.h"

int main() {
    // Create mechanical and electrical parameters
    MechanicalParameters mechanicalParameters{10.0, 20.0};
    ElectricalParameters electricalParameters{100.0, 50.0};
    ChemicalParameters chemicalParams = { 7.0, 3.0 };  // Acidity: 7, Toxicity: 3
    BiologicalParameters biologicalParams = { 5, "Human" };  // Age: 5, Species: Human

    // Create a PhysicalObject with both mechanical and electrical properties
    ElectroMechanicalObject obj("ElectroMechanicalObj", mechanicalParameters, electricalParameters, MechanicalProperty::RIGID, ElectricalProperty::CONDUCTIVE);

    // Print the object name
    std::cout << "Object Name: " << obj.MechanicalObject::getName() << std::endl;

    // Access and print the mechanical parameters
    MechanicalParameters mechanicalParams = obj.getMechanicalParameters();
    std::cout << "Mechanical Parameters - Mass: " << mechanicalParams.mass << ", Moment of Inertia: " << mechanicalParams.momentOfInertia << std::endl;

    // Access and print the electrical parameters
    ElectricalParameters electricalParams = obj.getElectricalParameters();
    std::cout << "Electrical Parameters - Resistance: " << electricalParams.resistance << ", Capacitance: " << electricalParams.capacitance << std::endl;

    // Simulate the object
    obj.simulate(10.0);

    // let us create a full physical object there too
    PhysicalObject physicalObject("PhysicalObj", mechanicalParams, MechanicalProperty::ELASTIC,
                                  electricalParams, ElectricalProperty::INSULATING,
                                  chemicalParams, ChemicalProperty::REACTIVE,
                                  biologicalParams, BiologicalProperty::LIVING);

    physicalObject.simulate(10.0);

    // let us create a simple quadrotor obj purely mechanical

    Quadrotor quadrotor("QuadrotorObj", mechanicalParams, MechanicalProperty::RIGID);
    quadrotor.simulate(10.0);

    return 0;
}

