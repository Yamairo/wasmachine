//
// Created by Eigenaar on 29-6-2023.
//

#ifndef WASMACHINE_WATERNIVEAUSENSOR_H
#define WASMACHINE_WATERNIVEAUSENSOR_H


class waterNiveauSensor {
public:
    waterNiveauSensor();
    ~waterNiveauSensor();
    int geefWaterNiveau() const;
    int waterniveau = 0;
    int maxWaterNiveau = 50;
};


#endif //WASMACHINE_WATERNIVEAUSENSOR_H
