//
// Created by Eigenaar on 3-7-2023.
//

#include "verwarmingselement.h"

verwarmingselement::verwarmingselement(int maxTemperatuur, waterNiveauSensor *sensor): maxTemperatuur(maxTemperatuur), wNS(sensor){

}

verwarmingselement::~verwarmingselement() {

}

void verwarmingselement::verwarmen() {
    if (wNS->geefWaterNiveau() == wNS->maxWaterNiveau) {
        cout << "Het verwarmingselement is nu " + to_string(temperatuur) + "\370C" << endl;
        if(temperatuur < maxTemperatuur){
            temperatuur += 5;
        }
        else if(temperatuur > maxTemperatuur){
            temperatuur -= 1;
        }
    }
}

void verwarmingselement::afkoelen() {
    if(temperatuur > minTemperatuur){
        temperatuur -= 10;
        cout << "Het verwarmingselement is nu" + to_string(temperatuur) + "\370C" << endl;
    }
}
