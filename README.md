# 🎲 Jogo de Dados

Joga contra o CPU! Cada um lança **2 dados** por ronda. O mais alto ganha.

## 📜 Regras

| Regra | Descrição |
|-------|-----------|
| 🎲 Dados | Cada jogador lança 2 dados (1 a 6) |
| 🎯 Dobro | Se os 2 dados forem iguais → pontos da ronda **dobram** |
| 🔥 Streak | Vitórias consecutivas dão **+1, +2, +3...** pontos extra |
| 🤝 Empate | Ninguém pontua, streaks reiniciam |

## ▶️ Como Jogar

1. Escolhe quantas rondas queres jogar.
2. Carrega **Enter** para lançar os teus dados.
3. O CPU joga automaticamente.
4. Ao fim das rondas, quem tiver mais pontos ganha! 🏆

## 🖥️ Exemplo

```
Quantas rondas? 5

Ronda 1: [Enter para jogar...]
  Tu=[4,1]=5   CPU=[4,3]=7 → CPU ganha!

Ronda 2: [Enter para jogar...]
  Tu=[6,4]=10   CPU=[2,6]=8 → Tu ganhas!

Ronda 3: [Enter para jogar...]
  Tu=[6,4]=10   CPU=[1,2]=3 → Tu ganhas! (streak: 1)

Ronda 4: [Enter para jogar...]
  Tu=[1,4]=5   CPU=[3,1]=4 → Tu ganhas! (streak: 2)

Ronda 5: [Enter para jogar...]
  Tu=[1,2]=3   CPU=[4,2]=6 → CPU ganha!

============================
  TU:      28 pontos
  CPU:     13 pontos
  EMPATES: 0
============================
  Ganhaste!
```

## 🛠️ Compilar

```bash
g++ -o dados main.cpp -std=c++17
./dados
```

## 📦 Tópicos

`rand()` · `srand` · `for` · `if/else` · pontuação · streak
