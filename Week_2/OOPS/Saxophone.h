#pragma once
#include "Playable.h"

namespace music::wind_instruments {
    class Saxophone : public music::Playable {
    public:
        void play() override;
    };
}