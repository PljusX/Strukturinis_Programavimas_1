#include <iostream>
#include <iomanip>
using namespace std;
void meniu();
void valPasirink();
double kiekIvestis(double kiek);
int main() {
    bool veikia = true;
    int pas;
    const double GBP_BENDRAS = 0.8729;
    const double GBP_PIRKTI = 0.8600;
    const double GBP_PARDUOTI = 0.9220;
    const double USD_BENDRAS = 1.1793;
    const double USD_PIRKTI = 1.1460;
    const double USD_PARDUOTI = 1.2340;
    const double INR_BENDRAS = 104.6918;
    const double INR_PIRKTI = 101.3862;
    const double INR_PARDUOTI = 107.8546;
    for (; veikia;) {
        int x;
        double kiek = 0;
        cout << endl;
        meniu();
        cin >> pas;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(69, '\n');
            cout << "Iveskite skaiciu nuo 1 iki 4." << endl;
            continue;
        }
        if (pas == 1) {
            cout << "Valiutos palyginimai." << endl;
        }
        else if (pas == 2) {
            cout << "Valiutos supirkimas." << endl;
        }
        else if (pas == 3) {
            cout << "Valiutos lombardas." << endl;
        }
        else if (pas == 4) {
            cout << "Durys uzsidaro." << endl;
            veikia = false;
        }
        else {
            cout << "Jusu pasirinkimas netinkamas, bandykite dar karta." << endl;
        }
    }
    return 0;
}
void meniu() {
    cout << "========== VALIUTOS KEITYKLA ==========" << endl;
    cout << "1. Valiutos palyginimai" << endl;
    cout << "2. Valiutos supirkimas (EUR i pasirinkta valiuta)" << endl;
    cout << "3. Valiutos lombardas (pasirinkta valiuta i EUR)" << endl;
    cout << "4. Durys (iseiti)" << endl;
    cout << "Pasirinkite: ";
}
void valPasirink() {
    cout << "1. GBP - Didziosios Britanijos svaras" << endl;
    cout << "2. USD - JAV doleris" << endl;
    cout << "3. INR - Indijos rupija" << endl;
    cout << "Pasirinkite: ";
}
double kiekIvestis(double kiek) {
    cin >> kiek;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(69, '\n');
        cout << "Iveskite skaiciu." << endl;
        return 0;
    }
    if (kiek < 0) {
        cout << "Ivedet neigiama skaiciu, skolu neteikiu (iveskite kita skaiciu): ";
        cin >> kiek;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(69, '\n');
            cout << "Iveskite skaiciu." << endl;
            return 0;
        }
    }
    return kiek;
}
