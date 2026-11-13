# 🎲 Jogo de Dados – Tu vs Computador

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
Quantas rondas? 2

Ronda 1: [Enter para jogar...]
  Tu=[4,2]=6    CPU=[3,3]=6x2=12 → CPU ganha! (dobro!)

Ronda 2: [Enter para jogar...]
  Tu=[5,5]=10x2=20  CPU=[2,4]=6 → Tu ganhas! (dobro!) (streak: 1)

============================
  🎲 TU:      26 pontos
  🎲 CPU:     16 pontos
  🤝 EMPATES: 0
============================
  🏆 Ganhaste!
```

## 🛠️ Compilar

```bash
g++ -o dados main.cpp -std=c++17
./dados
```

## 📦 Tópicos

`rand()` · `srand` · `for` · `if/else` · pontuação · streak
