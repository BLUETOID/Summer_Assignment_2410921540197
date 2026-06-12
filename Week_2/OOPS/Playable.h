#pragma once

namespace music {
    class Playable {
    public:
        virtual void play() = 0;   // pure virtual = interface method
        virtual ~Playable() {}     // always virtual destructor in abstract classes
    };
}