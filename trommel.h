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
    void remAf();
    bool centrifugeert = false;
    int toeren = 0;
private:
    int maxToeren;
    waterNiveauSensor* wNS;
};


#endif //WASMACHINE_TROMMEL_H
