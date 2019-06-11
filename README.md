# 1 UZDUOTIS - PASISVEIKINIMAS
## Programos tikslas

**Programa atspausdina įrėmintą pasisveikiną sudarytą iš 5 eilučių:**
- Pirmoje eilutėje prasideda _rėmelis_, kuris yra seka * simbolių, ir kurio plotis priklauso nuo žmogaus vardo (įvesto programos vartotojo), pasisveikinimo ”Sveikas, ”, tarpo ir * simbolių pradžioje ir pabaigoje.
- Antroji eilutė prasideda ir baigiasi * simboliu, o vidus užpildytas reikiamu skaičiumi tarpo simbolių.
- Trečioji eilutė susideda iš *, tarpo, pasisveikinimo, tarpo ir vėl *.
- Kervirta ir penkta eilutės bus analogiškos antrąjai ir pirmąjąi.

## Programos isvedimas 
Ivedus vartotojo varda **Simas** ir eiluciu skaiciu, pvz. 3, programa isveda:

```shell

*******************
*                 *
*                 *
*                 *
* Sveikas, Simas! *
*                 *
*                 *
*                 *
*******************
```

## Programos paleidimas naudojant `GNU C++ Compiler`
**Tiesiog per terminala**
- `g++ -o run main.cpp `
- `./run`

**Su Makefile**

Programos sudarymas:
- `make`

Sudarytu failu istrynimas:
- `clean`

## Versiju istorija

### [v0.1](https://github.com/simassimonas/ObjProg-1uzd/releases/tag/v0.1)
**Pridėta**
- Pirmine programos versija
### [v0.2](https://github.com/simassimonas/ObjProg-1uzd/releases/tag/v0.2)
**Pridėta**
- Patobulinta v0.1 versija: jeigu ivestas vardas yra moteriskas, tada kreipiasi `Sveika`, o jeigu vyriskas, tada `Sveikas`
### [v1.0](https://github.com/simassimonas/ObjProg-1uzd/releases/tag/v1.0)
**Pridėta**
- Galima nurodyti eiluciu skaiciu
- Nebereikia kiekvienos eilutes saugoti atskirame kintamajame

```shell
 std::ifstream ffin ("rez.txt");
    string lline;
    vector<string> e1;
    vector<string> e2;
    for(auto i=0; i<kiekEil/2; i++){
        (getline(ffin, lline));
        e1.push_back(lline);
    }

    for(auto i=kiekEil/2; i<kiekEil; i++){
        (getline(ffin, lline));
        e2.push_back(lline);
    }

    std::ofstream ffout ("rezGalutinis.txt");
    for(auto i=0; i<e1.size(); i++){
        ffout << std::left << e1[i];
        ffout << std::right << e2[i] << endl;
    }

```
