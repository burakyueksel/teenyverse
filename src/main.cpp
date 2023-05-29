#include <iostream>
#include "object.h"
#include "../parameters/mechanical_parameters.h"

int main() {

    MechanicalParameters parameters{10.0, 20.0};
    Object obj("TestObject", parameters, MechanicalProperty::RIGID);

    // Accessing object parameters
    MechanicalParameters objParameters = obj.getParameters();
    std::cout << "Object parameters - Mass: " << objParameters.mass_kg << ", Moment of Inertia: " << objParameters.momentOfInertia_kgmm2 << std::endl;

    obj.simulate(10.0);

    return 0;
}
