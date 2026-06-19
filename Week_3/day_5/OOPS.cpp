#include <bits/stdc++.h>
using namespace std;

class Compartment {
public:
    virtual string notice() = 0;
};

class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class compartment - Only passengers with First Class tickets are allowed.";
    }
};

class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies compartment - Only female passengers are allowed.";
    }
};

class General : public Compartment {
public:
    string notice() {
        return "General compartment - Open to all passengers.";
    }
};

class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage compartment - No passengers allowed. Luggage only.";
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    srand(time(0));

    Compartment* train[10];

    for (int i = 0; i < 10; i++) {
        int r = rand() % 4 + 1;

        if (r == 1)      train[i] = new FirstClass();
        else if (r == 2) train[i] = new Ladies();
        else if (r == 3) train[i] = new General();
        else             train[i] = new Luggage();
    }

    for (int i = 0; i < 10; i++) {
        cout << "Compartment " << i + 1 << ": " << train[i]->notice() << "\n";
    }

    for (int i = 0; i < 10; i++) delete train[i];

    return 0;
}
