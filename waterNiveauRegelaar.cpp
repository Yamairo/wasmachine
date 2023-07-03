//
// Created by Eigenaar on 29-6-2023.
//

#include "waterNiveauRegelaar.h"

waterNiveauRegelaar::waterNiveauRegelaar(waterNiveauSensor* sensor):wNS(sensor) {
}

waterNiveauRegelaar::~waterNiveauRegelaar(){}

void waterNiveauRegelaar::zetKraanAan() {
    if(wNS->waterniveau < wNS->maxWaterNiveau){
        cout<<"vullen \nHet waterniveau is " + to_string(wNS->geefWaterNiveau())<<endl;
        wNS->waterniveau += 1;
    }
    else{
        cout<<"Het maximum waterniveau is bereikt"<<endl;
    }
}

void waterNiveauRegelaar::zetPompAan() {
    if(wNS->waterniveau != 0){
        cout<<"legen \nHet waterniveau is " + to_string(wNS->geefWaterNiveau())<<endl;
        wNS->waterniveau -= 1;
    }
}

