/*
 * File: object.h
 * Author: Burak Yueksel
 * Date: 2023-05-30
 */

#pragma once

#include <string>
#include "object.h"

class Quadrotor : public MechanicalObject {
public:
    Quadrotor(const std::string& name, const MechanicalParameters& mechanicalParameters, MechanicalProperty mechanicalProperty);
    ~Quadrotor();

    void simulate(double time); // Non-virtual member function

private:
    void simulateRotationalMotion(double time);
    void simulateTranslationalMotion(double time);
};