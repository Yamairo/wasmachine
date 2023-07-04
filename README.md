# Wasmachine - Practicum 5 Modelleren
Dit project is gemaakt als onderdeel van Practicum 5 voor het vak Modelleren. De wasmachine simulatie is ontwikkeld door Yamairo Martinus, Sebastiaan Valkenhoff en Ilayda. Het doel van het project was om een eenvoudige wasmachinesimulatie te creëren met behulp van objectgeoriënteerd programmeren.

# Bestandsstructuur
Het project bestaat uit de volgende bestanden:

1. `wasprogramma.cpp` en `wasprogramma.h`: Bevat de implementatie en definitie van de klasse wasprogramma, die verantwoordelijk is voor het uitvoeren van het wasprogramma.
2. `waterNiveauRegelaar.cpp` en `waterNiveauRegelaar.h`: Bevat de implementatie en definitie van de klasse waterNiveauRegelaar, die verantwoordelijk is voor het regelen van het waterpeil in de wasmachine.
3. `trommel.cpp` en `trommel.h`: Bevat de implementatie en definitie van de klasse trommel, die verantwoordelijk is voor het draaien van de trommel tijdens het wasprogramma.
4. `verwarmingselement.cpp` en `verwarmingselement.h`: Bevat de implementatie en definitie van de klasse verwarmingselement, die verantwoordelijk is voor het verwarmen van het water tijdens het wasprogramma.
5. `waterNiveauSensor.cpp` en `waterNiveauSensor.h`: Bevat de implementatie en definitie van de klasse waterNiveauSensor, die verantwoordelijk is voor het meten van het waterpeil in de wasmachine.

# Gebruik
Om de wasmachinesimulatie uit te voeren, moet een object van de klasse wasprogramma worden gemaakt en het wasprogramma worden gestart met de functie start(). De temperatuur en het toerental van de trommel kunnen worden ingesteld bij het maken van het wasprogramma-object.

Hier is een voorbeeld van het gebruik van de wasmachinesimulatie:


```cpp
#include "wasprogramma.h"

int main() {
    // Maak een nieuw wasprogramma-object met temperatuur 40 en toerental 1000
    wasprogramma wp(40, 1000);

    // Start het wasprogramma
    wp.start();

    return 0;
}
```
Bijdragers
Dit project is gemaakt door:

- Yamairo Martinus
- Sebastiaan Valkenhoff
- Ilayda Alan

We hebben samengewerkt om de verschillende componenten van de wasmachinesimulatie te implementeren en te integreren in een werkend geheel.

Feedback en verbeteringen
Als je suggesties hebt voor verbeteringen of eventuele feedback over de wasmachinesimulatie, aarzel dan niet om contact met ons op te nemen. We zijn altijd bereid om te leren en ons project te verbeteren.

Bedankt voor het bekijken van ons wasmachinesimulatieproject!
