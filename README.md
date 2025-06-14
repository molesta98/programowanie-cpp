# programowanie-cpp 💻

Repozytorium zawiera zestaw ćwiczeń laboratoryjnych z programowania w języku C++. Każdy folder `labX` odpowiada konkretnym zagadnieniom omawianym podczas zajęć.

## 📁 Struktura katalogów

```
programowanie-cpp/
│
├── lab1/
│   ├── instrukcja_switch/
│   ├── instrukcje_warunkowe/
│   └── pierwszy_program/
│
├── lab2/
│   ├── petla_for/
│   └── petla_while_i_do_while/
│
├── lab3/
│   ├── tablice_znakowe_i_obiekty_string/
│   └── zmienne_tablicowe/
│
├── lab4/
│   ├── funkcje/
│   └── rekurencja_i_przeciazenie_funkcji/
│
├── lab5/
│   ├── struktury_danych/
│   └── wskazniki/
│
├── lab6/
│   └── operacje_na_plikach/
│
├── .gitignore
├── .pre-commit-config.yaml
└── README.md
```

## ▶️ Jak uruchomić programy?

### ✅ Wymagania:
- Kompilator C++ (np. `g++`)
- System Unix/Linux lub Windows z terminalem
- Opcjonalnie: `make` dla użycia `Makefile`

### 🔧 Budowanie i uruchamianie z `Makefile`
W katalogu dla konkretnego laboratorium uruchom w terminalu:

```bash
make task1     # Kompiluje i tworzy plik wykonywalny dla task1.cpp
make task2     # Kompiluje i tworzy plik wykonywalny dla task2.cpp
make task3     # Kompiluje i tworzy plik wykonywalny dla task3.cpp
```
lub
```bash
make
```
który utworzy katalog bin i wykona kroki opisane w pliku Makefile, czyli wykona kompilacje plików z danego podkatalogu i plik wykonywalny umieści w podkatalogu bin

🛠️ Ręczna kompilacja
```
g++ task1.cpp -o task1 && ./task1
g++ task2.cpp -o task2 && ./task2
g++ task3.cpp -o task3 && ./task3
```

Jeśli chcesz przetestować pliki z podkatalogów labX, przejdź do odpowiedniego katalogu i uruchom analogicznie:

```
cd lab1/instrukcja_switch
g++ task1.cpp -o task1
./task1
```

lub
```
cd lab1/instrukcja_switch
make
./bin/task1
```
