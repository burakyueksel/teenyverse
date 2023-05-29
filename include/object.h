#pragma once

#include <string>

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
    Object(const std::string& name, double mass, double volume, MechanicalProperty mechanicalProperty);
    ~Object();

    // Getters
    std::string getName() const;
    double getMass() const;
    double getVolume() const;
    MechanicalProperty getMechanicalProperty() const;

    // Other methods
    void simulate(double time);

private:
    std::string name_;
    double mass_;
    double volume_;
    MechanicalProperty mechanicalProperty_;
};
