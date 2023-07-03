//
// Created by Eigenaar on 1-7-2023.
//

#include "trommel.h"

trommel::trommel(int maxToeren, waterNiveauSensor* sensor) : maxToeren(maxToeren), wNS(sensor) {
}

trommel::~trommel() {

}

void trommel::draaien() {
    if (wNS->geefWaterNiveau() == wNS->maxWaterNiveau) {
        cout << "de trommel draait met " + to_string(toeren) + " toeren" << endl;
        if(toeren < maxToeren){
            toeren += 10;
        }
        else if(toeren > maxToeren){
            toeren -= 1;
        }
    }
//    cout << to_string(wNS->waterniveau) << endl;
}
