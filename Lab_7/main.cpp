#include "capacitor.h"

int main() {
    Capacitor manager;
    int choice;
    do {
        cout << "\n1. Додати конденсатор";
        cout << "\n2. Вивести список";
        cout << "\n3. Видалити конденсатор";
        cout << "\n4. Очистити всі дані";
        cout << "\n0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double c, v;
                string m;
                cout << "Введіть ємність (Ф): ";
                cin >> c;
                cout << "Введіть макс. напругу (В): ";
                cin >> v;
                cout << "Введіть матеріал: ";
                cin >> m;
                manager.addCapacitor(c, v, m);
                break;
            }
            case 2:
                manager.showAll();
                break;
            case 3: {
                int index;
                cout << "Введіть номер для видалення: ";
                cin >> index;
                manager.removeCapacitor(index);
                break;
            }
            case 4:
                manager.clearAll();
                break;
            case 0:
                cout << "Вихід з програми.\n";
                break;
            default:
                cout << "Невірний вибір!\n";
        }
    } while (choice != 0);

    return 0;
}
