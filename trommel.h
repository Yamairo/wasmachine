//
// Created by Eigenaar on 1-7-2023.
//

#ifndef WASMACHINE_TROMMEL_H
#define WASMACHINE_TROMMEL_H

#include "waterNiveauSensor.h"
#include <iostream>
using namespace std;

class trommel {
public:
    trommel(int, waterNiveauSensor* wNS);
    ~trommel();
    void draaien();
private:
    int maxToeren;
    int toeren = 0;
};


#endif //WASMACHINE_TROMMEL_H
