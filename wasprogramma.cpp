//
// Created by Eigenaar on 28-6-2023.
//

#include "wasprogramma.h"

wasprogramma::wasprogramma(int temperatuur, int toeren)
{
    wNS = new waterNiveauSensor();
    wNR = new waterNiveauRegelaar(wNS);
    t1 = new trommel(toeren, wNS);
    v1 = new verwarmingselement(temperatuur, wNS);
    tCentrifuge = new trommel(300, wNS);
}

wasprogramma::~wasprogramma() = default;

void wasprogramma::wassen() {
    cout<<
        "--------------------------------------------------------\n"
        "\tDe Was start de machine zal nu vollopen\n"
        "--------------------------------------------------------"
    <<endl;
    usleep(1000000);
    for (int i = 0; (i < 200); i++) {
        cout<<"--------------------------------------------------------"<<endl;
        wNR->zetKraanAan();
        t1->draaien();
        v1->verwarmen();
        usleep(100000);
        cout<<"--------------------------------------------------------\n" + to_string(i)<<endl;
    }
    cout<<
        "--------------------------------------------------------\n"
        "\tDe Was is klaar de machine zal nu leeglopen\n"
        "--------------------------------------------------------"
    <<endl;
    usleep(10000000);
    for (int i = 0; (i < 60) and (wNS->waterniveau > 0); i++) {
        cout<<"--------------------------------------------------------"<<endl;
        wNR->zetPompAan();
        t1->remAf();
        v1->afkoelen();
        usleep(100000);
        cout<<"--------------------------------------------------------\n" + to_string(i)<<endl;
    }
}

void wasprogramma::centrifugeren() {
    tCentrifuge->centrifugeert = true;
    cout<<
        "--------------------------------------------------------\n"
        "\tDe machine gaat nu centrifugeren\n"
        "--------------------------------------------------------"
    <<endl;
    usleep(1000000);
    for (int i = 0; i < 60; i++) {
        cout<<"--------------------------------------------------------"<<endl;
        tCentrifuge->draaien();
        usleep(100000);
        cout<<"--------------------------------------------------------\n" + to_string(i)<<endl;
    }
    for (int i = 0; (i < 60)  and (tCentrifuge->toeren > 0); i++) {
        cout<<"--------------------------------------------------------"<<endl;
        tCentrifuge->remAf();
        usleep(100000);
        cout<<"--------------------------------------------------------\n" + to_string(i + 60)<<endl;
    }
    cout<<
        "--------------------------------------------------------\n"
        "\tDe machine is nu klaar met centrifugeren\n"
        "--------------------------------------------------------"
    <<endl;
}

void wasprogramma::start() {
    wassen();
    centrifugeren();
}


