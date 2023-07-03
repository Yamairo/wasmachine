//
// Created by Eigenaar on 29-6-2023.
//

#include "waterNiveauSensor.h"
#include <iostream>
using namespace  std;
waterNiveauSensor::waterNiveauSensor() {
    cout<<"Sensor aangemaakt"<<endl;
}

waterNiveauSensor::~waterNiveauSensor() {

}

int waterNiveauSensor::geefWaterNiveau() const {
    return waterniveau;
}
