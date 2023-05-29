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

// Enumeration for mechanical properties
enum class MechanicalProperty {
    RIGID,          // Rigid mechanical property
    ELASTIC,        // Elastic mechanical property
    AERODYNAMIC     // Aerodynamic mechanical property
};

// Enumeration for electrical properties
enum class ElectricalProperty {
    CONDUCTIVE,     // Conductive electrical property
    INSULATING      // Insulating electrical property
};

// Enumeration for chemical properties
enum class ChemicalProperty {
    REACTIVE,       // Reactive chemical property
    STABLE          // Stable chemical property
};

// Enumeration for biological properties
enum class BiologicalProperty {
    LIVING,         // Living biological property
    NON_LIVING      // Non-living biological property
};

// Structure to hold mechanical parameters
struct MechanicalParameters {
    double mass;            // Mass of the object
    double momentOfInertia; // Moment of inertia of the object
};

// Structure to hold electrical parameters
struct ElectricalParameters {
    double resistance;      // Resistance of the object
    double capacitance;     // Capacitance of the object
};

// Base class for mechanical properties
class MechanicalObject {
public:
    // Constructor
    MechanicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty);
    
    // Destructor
    ~MechanicalObject();

    // Getter for object name
    std::string getName() const;
    
    // Getter for mechanical parameters
    MechanicalParameters getMechanicalParameters() const;
    
    // Getter for mechanical property
    MechanicalProperty getMechanicalProperty() const;

    // Simulate the object for a given time
    void simulate(double time);

private:
    std::string name_;                  // Name of the object
    MechanicalParameters mechanicalParameters_;   // Mechanical parameters of the object
    MechanicalProperty mechanicalProperty_;       // Mechanical property of the object
};

// Base class for electrical properties
class ElectricalObject {
public:
    // Constructor
    ElectricalObject(const std::string& name, const ElectricalParameters& electricalParameters, ElectricalProperty electricalProperty);
    
    // Destructor
    ~ElectricalObject();

    // Getter for object name
    std::string getName() const;
    
    // Getter for electrical parameters
    ElectricalParameters getElectricalParameters() const;
    
    // Getter for electrical property
    ElectricalProperty getElectricalProperty() const;

    // Simulate the object for a given time
    void simulate(double time);

private:
    std::string name_;                      // Name of the object
    ElectricalParameters electricalParameters_;   // Electrical parameters of the object
    ElectricalProperty electricalProperty_;       // Electrical property of the object
};

// Base class for chemical properties
class ChemicalObject {
public:
    // Constructor
    ChemicalObject(const std::string& name, ChemicalProperty chemicalProperty);

    // Destructor
    ~ChemicalObject();

    // Getter for object name
    std::string getName() const;

    // Getter for chemical property
    ChemicalProperty getChemicalProperty() const;

    // Simulate the object for a given time
    void simulate(double time);

private:
    std::string name_;          // Name of the object
    ChemicalProperty chemicalProperty_; // Chemical property of the object
};

// Base class for biological properties
class BiologicalObject {
public:
    // Constructor
    BiologicalObject(const std::string& name, BiologicalProperty biologicalProperty);

    // Destructor
    ~BiologicalObject();

    // Getter for object name
    std::string getName() const;

    // Getter for biological property
    BiologicalProperty getBiologicalProperty() const;

    // Simulate the object for a given time
    void simulate(double time);

private:
    std::string name_;              // Name of the object
    BiologicalProperty biologicalProperty_; // Biological property of the object
};

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

// Derived class for objects with all known object properties
class PhysicalObject : public MechanicalObject, public ElectricalObject, public ChemicalObject, public BiologicalObject {
public:
    // Constructor
    PhysicalObject(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty,
                   const ElectricalParameters& electricalParameters, ElectricalProperty electricalProperty,
                   const std::string& chemicalObjectName, ChemicalProperty chemicalProperty,
                   const std::string& biologicalObjectName, BiologicalProperty biologicalProperty);

    // Destructor
    ~PhysicalObject();

    // Simulate the object for a given time
    void simulate(double time);
};