//
// Created by Eigenaar on 28-6-2023.
//

#include "wasprogramma.h"

wasprogramma::wasprogramma(int temperatuur, int toeren)
        : temperatuur(temperatuur), toeren(toeren)
{
    wNS = new waterNiveauSensor();
    wNR = new waterNiveauRegelaar(wNS);
    t1 = new trommel(toeren, wNS);
}

wasprogramma::~wasprogramma() = default;

void wasprogramma::start() {
    cout<<
        "--------------------------------------------------------\n"
        "\tDe Was start de machine zal nu vollopen\n"
        "--------------------------------------------------------"
    <<endl;
    usleep(100000);
    for (int i = 0; i < 200; i++) {
        wNR->zetKraanAan();    // Call the member function directly on the wNR object
        t1->draaien();         // Call the member function directly on the t1 object
        usleep(100000);
    }
    cout<<
    "--------------------------------------------------------\n"
    "\tDe Was is klaar de machine zal nu leeglopen\n"
    "--------------------------------------------------------"
    <<endl;
    usleep(1000000);
    for (int i = 0; i < 60; i++) {
        wNR->zetPompAan();     // Call the member function directly on the wNR object
        t1->draaien();         // Call the member function directly on the t1 object
        usleep(100000);
    }
}


