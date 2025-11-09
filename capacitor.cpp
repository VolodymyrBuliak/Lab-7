#include "capacitor.h"

Capacitor::Capacitor() {
    cout << "Об'єкт класу Capacitor створено.\n";
}

Capacitor::~Capacitor() {
    cout << "Об'єкт класу Capacitor знищено.\n";
}

void Capacitor::addCapacitor(double capacity, double maxVoltage, string material) {
    if (capacity <= 0 || maxVoltage <= 0) {
        cout << " Некоректні значення параметрів!\n";
        return;
    }
    capacitor_t c{capacity, maxVoltage, material};
    capacitors.push_back(c);
    cout << " Конденсатор додано успішно!\n";
}

void Capacitor::showAll() const {
    if (capacitors.empty()) {
        cout << "Список порожній.\n";
        return;
    }
    cout << "\n--- Список конденсаторів ---\n";
    for (size_t i = 0; i < capacitors.size(); ++i) {
        cout << i + 1 << ") Ємність: " << capacitors[i].capacity << " Ф"
             << ", Макс. напруга: " << capacitors[i].maxVoltage << " В"
             << ", Матеріал: " << capacitors[i].material << endl;
    }
}

void Capacitor::removeCapacitor(int index) {
    if (index < 1 || index > (int)capacitors.size()) {
        cout << "Некоректний індекс!\n";
        return;
    }
    capacitors.erase(capacitors.begin() + index - 1);
    cout << "Конденсатор видалено.\n";
}

void Capacitor::clearAll() {
    capacitors.clear();
    cout << "Список очищено.\n";
}
