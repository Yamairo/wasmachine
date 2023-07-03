//
// Created by Eigenaar on 28-6-2023.
//

#ifndef WASMACHINE_WASPROGRAMMA_H
#define WASMACHINE_WASPROGRAMMA_H
#include "waterNiveauRegelaar.h"
#include "waterNiveauSensor.h"
#include "trommel.h"
#include<unistd.h>

class wasprogramma {
private:
    int temperatuur;
    int toeren;
    waterNiveauSensor* wNS;
    waterNiveauRegelaar* wNR;
    trommel* t1;
public:
    wasprogramma(int temperatuur, int toeren);
    ~wasprogramma();
    void start();
};




#endif //WASMACHINE_WASPROGRAMMA_H
