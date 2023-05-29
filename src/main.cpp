#include "object.h"

int main() {
    Object obj("MyObject", 10.0, 5.0, MechanicalProperty::RIGID);
    obj.simulate(10.0);

    return 0;
}
