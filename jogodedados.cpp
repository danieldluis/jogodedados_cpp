#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Quantas rondas? ";
    cin >> n;
    cin.ignore();

    int pontosTu = 0, pontosCpu = 0, empates = 0;
    int streakTu = 0, streakCpu = 0;

    for (int r = 1; r <= n; r++) {
        cout << "\nRonda " << r << ": [Enter para jogar...]";
        cin.ignore();

        int tu1 = rand() % 6 + 1, tu2 = rand() % 6 + 1;
        int cpu1 = rand() % 6 + 1, cpu2 = rand() % 6 + 1;

        int somaTu = tu1 + tu2;
        int somaCpu = cpu1 + cpu2;

        bool dobroTu = (tu1 == tu2);
        bool dobroCpu = (cpu1 == cpu2);

        int ptsTu = dobroTu ? somaTu * 2 : somaTu;
        int ptsCpu = dobroCpu ? somaCpu * 2 : somaCpu;

        cout << "  Tu=[" << tu1 << "," << tu2 << "]=" << somaTu;
        if (dobroTu) cout << "x2=" << ptsTu;
        cout << "   CPU=[" << cpu1 << "," << cpu2 << "]=" << somaCpu;
        if (dobroCpu) cout << "x2=" << ptsCpu;
        cout << " → ";

        if (ptsTu > ptsCpu) {
            pontosTu += ptsTu + streakTu;
            streakTu++;
            streakCpu = 0;
            cout << "Tu ganhas!";
            if (dobroTu) cout << " (dobro!)";
            if (streakTu > 1) cout << " (streak: " << streakTu - 1 << ")";
            cout << endl;
        } else if (ptsCpu > ptsTu) {
            pontosCpu += ptsCpu + streakCpu;
            streakCpu++;
            streakTu = 0;
            cout << "CPU ganha!";
            if (dobroCpu) cout << " (dobro!)";
            if (streakCpu > 1) cout << " (streak: " << streakCpu - 1 << ")";
            cout << endl;
        } else {
            empates++;
            streakTu = 0;
            streakCpu = 0;
            cout << "Empate!" << endl;
        }
    }

    cout << "\n============================" << endl;
    cout << "  TU:      " << pontosTu << " pontos" << endl;
    cout << "  CPU:     " << pontosCpu << " pontos" << endl;
    cout << "  EMPATES: " << empates << endl;
    cout << "============================" << endl;

    if (pontosTu > pontosCpu)
        cout << "  Ganhaste!" << endl;
    else if (pontosCpu > pontosTu)
        cout << "  Perdeste!" << endl;
    else
        cout << "  Empate!" << endl;

    return 0;
}
