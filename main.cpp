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
            int y;
            cout << "Pasirinkite valiuta, kuria lyginsime:" << endl;
            valPasirink();
            cin >> x;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(69, '\n');
                cout << "Neteisingas pasirinkimas." << endl;
                continue;
            }
            if (x == 1) {
                cout << "1. EUR -> GBP" << endl;
                cout << "2. GBP -> EUR" << endl;
                cin >> y;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(69, '\n');
                    cout << "Neteisingas pasirinkimas." << endl;
                    continue;
                }
                if (y == 1) {
                    cout << "Iveskite suma eurais: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " EUR = " << kiek * GBP_BENDRAS << " GBP" << endl;
                }
                else if (y == 2) {
                    cout << "Iveskite suma svarais: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " GBP = " << kiek / GBP_BENDRAS << " EUR" << endl;
                }
                else {
                    cout << "Tokio pasirinkimo nera." << endl;
                }
            }
            else if (x == 2) {
                cout << "1. EUR -> USD" << endl;
                cout << "2. USD -> EUR" << endl;
                cin >> y;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(69, '\n');
                    cout << "Neteisingas pasirinkimas." << endl;
                    continue;
                }
                if (y == 1) {
                    cout << "Iveskite suma eurais: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " EUR = " << kiek * USD_BENDRAS << " USD" << endl;
                }
                else if (y == 2) {
                    cout << "Iveskite suma doleriais: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " USD = " << kiek / USD_BENDRAS << " EUR" << endl;
                }
                else {
                    cout << "Tokio pasirinkimo nera." << endl;
                }
            }
            else if (x == 3) {
                cout << "1. EUR -> INR" << endl;
                cout << "2. INR -> EUR" << endl;
                cin >> y;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(69, '\n');
                    cout << "Neteisingas pasirinkimas." << endl;
                    continue;
                }
                if (y == 1) {
                    cout << "Iveskite suma eurais: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " EUR = " << kiek * INR_BENDRAS << " INR" << endl;
                }
                else if (y == 2) {
                    cout << "Iveskite suma rupijomis: ";
                    kiek = kiekIvestis(kiek);
                    cout << fixed << setprecision(2);
                    cout << kiek << " INR = " << kiek / INR_BENDRAS << " EUR" << endl;
                }
                else {
                    cout << "Tokio pasirinkimo nera." << endl;
                }
            }
            else {
                cout << "Jusu pasirinkimas netinkamas." << endl;
            }
        }
        else if (pas == 2) {
            cout << "Pasirinkite valiuta, kuria keisime:" << endl;
            valPasirink();
            cin >> x;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(69, '\n');
                cout << "Neteisingas pasirinkimas." << endl;
                continue;
            }
            if (x == 1) {
                cout << "Iveskite suma eurais: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos supirkimas: " << kiek << " EUR = " << kiek * GBP_PIRKTI << " GBP" << endl;
            }
            else if (x == 2) {
                cout << "Iveskite suma eurais: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos supirkimas: " << kiek << " EUR = " << kiek * USD_PIRKTI << " USD" << endl;
            }
            else if (x == 3) {
                cout << "Iveskite suma eurais: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos supirkimas: " << kiek << " EUR = " << kiek * INR_PIRKTI << " INR" << endl;
            }
            else {
                cout << "Jusu pasirinkimas netinkamas." << endl;
            }
        }
        else if (pas == 3) {
            cout << "Pasirinkite valiuta, kuria keisime:" << endl;
            valPasirink();
            cin >> x;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(69, '\n');
                cout << "Neteisingas pasirinkimas." << endl;
                continue;
            }
            if (x == 1) {
                cout << "Iveskite GBP kieki: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos lombardas: " << kiek << " GBP = " << kiek / GBP_PARDUOTI << " EUR" << endl;
            }
            else if (x == 2) {
                cout << "Iveskite USD kieki: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos lombardas: " << kiek << " USD = " << kiek / USD_PARDUOTI << " EUR" << endl;
            }
            else if (x == 3) {
                cout << "Iveskite INR kieki: ";
                kiek = kiekIvestis(kiek);
                cout << fixed << setprecision(2);
                cout << "Valiutos lombardas: " << kiek << " INR = " << kiek / INR_PARDUOTI << " EUR" << endl;
            }
            else {
                cout << "Jusu pasirinkimas netinkamas." << endl;
            }
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
