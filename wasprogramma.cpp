//
// Created by Eigenaar on 28-6-2023.
//

#include "wasprogramma.h"

wasprogramma::wasprogramma(int temperatuur, int toeren) : temperatuur(temperatuur), toeren(toeren){
}

wasprogramma::~wasprogramma() = default;

void wasprogramma::start() {
    for (int i = 0; i < 200; i++) {
        wNR(wNS).zetKraanAan();
        t1(toeren, wNS).draaien();
        usleep(100000);
    }
    usleep(100000);
    for (int i = 0; i < 60; i++) {
        wNR().zetPompAan();
        t1(toeren, wNS).draaien();
        usleep(100000);
    }
}

