//
// Created by Eigenaar on 29-6-2023.
//

#include "waterNiveauRegelaar.h"

waterNiveauRegelaar::waterNiveauRegelaar(waterNiveauSensor* sensor):wNS(sensor) {
    cout<<"Waterniveau regelaar aangemaakt"<<endl;
}

waterNiveauRegelaar::~waterNiveauRegelaar(){}

void waterNiveauRegelaar::zetKraanAan() {
    if(wNS->geefWaterNiveau() < wNS->maxWaterNiveau){
        cout<<"Het waterniveau is " + to_string(wNS->geefWaterNiveau())<<endl;
        wNS->waterniveau += 1;
    }
    else{
        cout<<"Het maximum waterniveau is bereikt"<<endl;
    }
}

void waterNiveauRegelaar::zetPompAan() {
    if(wNS->geefWaterNiveau() != 0){
        wNS->waterniveau -= 1;
        cout<<"Het waterniveau is " + to_string(wNS->geefWaterNiveau())<<endl;
    }
}

