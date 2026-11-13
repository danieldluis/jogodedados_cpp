# 🎲 Jogo de Dados – 2 Jogadores (Opção B)

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Quantas rondas? ";
    cin >> n;

    int pontos1 = 0, pontos2 = 0, empates = 0;
    int streak1 = 0, streak2 = 0;

    for (int r = 1; r <= n; r++) {
        int d1a = rand() % 6 + 1, d1b = rand() % 6 + 1;
        int d2a = rand() % 6 + 1, d2b = rand() % 6 + 1;

        int soma1 = d1a + d1b;
        int soma2 = d2a + d2b;

        bool dobro1 = (d1a == d1b);
        bool dobro2 = (d2a == d2b);

        int pts1 = dobro1 ? soma1 * 2 : soma1;
        int pts2 = dobro2 ? soma2 * 2 : soma2;

        cout << "Ronda " << r << ": J1=[" << d1a << "," << d1b << "]="
             << soma1;
        if (dobro1) cout << "x2=" << pts1;
        cout << "  J2=[" << d2a << "," << d2b << "]=" << soma2;
        if (dobro2) cout << "x2=" << pts2;
        cout << " → ";

        if (pts1 > pts2) {
            pontos1 += pts1 + streak1;
            streak1++;
            streak2 = 0;
            cout << "Jogador 1 ganha!";
            if (dobro1) cout << " (dobro!)";
            if (streak1 > 1) cout << " (streak: " << streak1 - 1 << ")";
            cout << endl;
        } else if (pts2 > pts1) {
            pontos2 += pts2 + streak2;
            streak2++;
            streak1 = 0;
            cout << "Jogador 2 ganha!";
            if (dobro2) cout << " (dobro!)";
            if (streak2 > 1) cout << " (streak: " << streak2 - 1 << ")";
            cout << endl;
        } else {
            empates++;
            streak1 = 0;
            streak2 = 0;
            cout << "Empate!" << endl;
        }
    }

    cout << "\n============================" << endl;
    cout << "  JOGADOR 1:  " << pontos1 << " pontos" << endl;
    cout << "  JOGADOR 2:  " << pontos2 << " pontos" << endl;
    cout << "  EMPATES:    " << empates << endl;
    cout << "============================" << endl;

    if (pontos1 > pontos2)
        cout << "  Vencedor: Jogador 1!" << endl;
    else if (pontos2 > pontos1)
        cout << "  Vencedor: Jogador 2!" << endl;
    else
        cout << "  Empate!" << endl;

    return 0;
}
```

---

# 🎲 Jogo de Dados – Tu vs Computador (Opção B)

```cpp
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
