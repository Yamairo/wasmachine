//
// Created by Eigenaar on 28-6-2023.
//

#ifndef WASMACHINE_WASPROGRAMMA_H
#define WASMACHINE_WASPROGRAMMA_H
#include "waterNiveauRegelaar.h"
#include "waterNiveauSensor.h"
#include "trommel.h"
#include "verwarmingselement.h"
#include<unistd.h>

class wasprogramma {
private:
    waterNiveauSensor* wNS;
    waterNiveauRegelaar* wNR;
    trommel* t1;
    trommel* tCentrifuge;
    verwarmingselement* v1;
public:
    wasprogramma(int, int);
    ~wasprogramma();
    void start();
    void wassen();
    void centrifugeren();
};




#endif //WASMACHINE_WASPROGRAMMA_H
