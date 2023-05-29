#pragma once

#include <string>
#include "../parameters/mechanical_parameters.h"

enum class PhysicalProperty
{
  MECHANICAL,
  ELECTRICAL,
  CHEMICAL,
  BIOLOGICAL,
  OTHER
};

enum class MechanicalProperty {
    RIGID,
    ELASTIC,
    AERODYNAMIC,
    CONSTRAINTS
};

class Object {
public:
    Object(const std::string& name, const MechanicalParameters& parameters, MechanicalProperty mechanicalProperty);
    ~Object();

    // Getters
    std::string getName() const;
    MechanicalParameters getParameters() const;
    MechanicalProperty getMechanicalProperty() const;

    // Other methods
    void simulate(double time);

private:
    std::string name_;
    MechanicalParameters parameters_;
    MechanicalProperty mechanicalProperty_;
};