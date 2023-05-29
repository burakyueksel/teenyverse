#include <iostream>
#include "object.h"

int main() {
    // Create mechanical and electrical parameters
    MechanicalParameters mechanicalParameters{10.0, 20.0};
    ElectricalParameters electricalParameters{100.0, 50.0};

    // Create a PhysicalObject with both mechanical and electrical properties
    PhysicalObject obj("MyObject", mechanicalParameters, electricalParameters, MechanicalProperty::RIGID, ElectricalProperty::CONDUCTIVE);

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

    return 0;
}

