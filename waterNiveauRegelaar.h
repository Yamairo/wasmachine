//
// Created by Eigenaar on 29-6-2023.
//

#ifndef WASMACHINE_WATERNIVEAUREGELAAR_H
#define WASMACHINE_WATERNIVEAUREGELAAR_H

#include "waterNiveauSensor.h"
#include <iostream>
using namespace std;

class waterNiveauRegelaar {
public:
    waterNiveauRegelaar(waterNiveauSensor* wNS);
    ~waterNiveauRegelaar();
    void zetKraanAan();
    void zetPompAan();
private:
    waterNiveauSensor* wNS;
};


#endif //WASMACHINE_WATERNIVEAUREGELAAR_H
