#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct capacitor_t {
    double capacity;      // ємність, Ф
    double maxVoltage;    // макс. напруга, В
    string material;      // матеріал
};

class Capacitor {
private:
    vector<capacitor_t> capacitors;

public:
    Capacitor();
    ~Capacitor();

    void addCapacitor(double capacity, double maxVoltage, string material);
    void showAll() const;
    void removeCapacitor(int index);
    void clearAll();
};

#endif
