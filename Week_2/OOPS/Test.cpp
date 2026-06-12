#include <iostream>
#include "Playable.h"
#include "Venna.h"
#include "Saxophone.h"

using namespace music;
using namespace music::string_instruments;
using namespace music::wind_instruments;

int main() {

    // a. Instance of Veena, call play()
    Veena veena;
    veena.play();

    // b. Instance of Saxophone, call play()
    Saxophone saxophone;
    saxophone.play();

    // c. Store in Playable* (polymorphism), call play()
    Playable* p1 = new Veena();
    p1->play();

    Playable* p2 = new Saxophone();
    p2->play();

    delete p1;
    delete p2;

    return 0;
}