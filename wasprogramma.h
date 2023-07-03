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
    trommel t1(int, waterNiveauSensor* wNS);
    waterNiveauRegelaar wNR(waterNiveauSensor* wNS);
public:
    wasprogramma(int, int);
    ~wasprogramma();
    void start();
    waterNiveauSensor *wNS;
};


#endif //WASMACHINE_WASPROGRAMMA_H
