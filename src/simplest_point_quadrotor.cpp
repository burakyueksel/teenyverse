/*
 * File: simplest_point_quadrotor.cpp
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#include "simplest_point_quadrotor.h"
#include <iostream>

// Constructor for Quadrotor
Quadrotor::Quadrotor(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty)
    : MechanicalObject(name, mechanicalParameters, mechanicalProperty) {
}

Quadrotor::~Quadrotor() {
}

void Quadrotor::simulate(double time) {
    std::cout << "Simulating quadrotor " << getName() << " for " << time << " seconds.\n";
    simulateRotationalMotion(time);
    simulateTranslationalMotion(time);
}

void Quadrotor::simulateRotationalMotion(double time) {
    // Implement the rotational motion simulation logic
    std::cout << "Simulating rotational motion of quadrotor.\n";
}

void Quadrotor::simulateTranslationalMotion(double time) {
    // Implement the translational motion simulation logic
    std::cout << "Simulating translational motion of quadrotor.\n";
}