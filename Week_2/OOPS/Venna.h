#pragma once
#include "Playable.h"

namespace music::string_instruments {
    class Veena : public music::Playable {
    public:
        void play() override;
    };
}