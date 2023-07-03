//
// Created by Eigenaar on 3-7-2023.
//

#ifndef WASMACHINE_VERWARMINGSELEMENT_H
#define WASMACHINE_VERWARMINGSELEMENT_H

#include "waterNiveauSensor.h"
#include <iostream>
using namespace std;

class verwarmingselement {
public:
    verwarmingselement(int, waterNiveauSensor* wNS);
    ~verwarmingselement();
    void verwarmen();
    void afkoelen();
private:
    int temperatuur = 20;
    int maxTemperatuur;
    int minTemperatuur = 20;
    waterNiveauSensor* wNS;
};


#endif //WASMACHINE_VERWARMINGSELEMENT_H
