#include <iostream>
#include <string>
#include <locale.h>

#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <cstring>

using namespace std;

string uA; // odpowiedz gracza
int respekt;

void check(string goodAnswer) {
    cin >> uA;
    if (uA == goodAnswer) {
        cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
        uA = "";
    }
    else {
        exit(1);
    }
}

void say(string toSay) {
    cout << toSay << endl;
}

void r() {
    cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
    uA = "";
}

// funkcja eksperymentalna

int main()
{
    setlocale(LC_CTYPE, "Polish");
    //Wstep
    say("URSYNOW - The game");
    say("Czy chcialbys zagrac w ta swietna gre? (t/n)");
    check("t");
    
    say("Witaj w tekstowej przygodowce URSYNoW THE GAME. Podczas gry bedziesz gromadzil punkty respektu. Aby wybrac odpowiedz wpisz jej numer. Zaczynajmy.");
    say("Budzisz sie w lesie obok parku polskich 'wynalazcow'. Co robisz?");
    say("\t 1. Ide do Fortecy");
    say("\t 2. Ide na gorke");
    say("\t 3. Wracam do domu");

    //Etap 1 - Przebudzenie
    cin >> uA;
    if (uA == "1") {
        respekt = respekt + 20;
    } else if (uA == "2") {
        r();
        say("Po drodze widzisz gang ekologow przepedzajacych ludzi z gorki. Co robisz?");
        say("\t 1. Postanawiam ominac ich i isc do Fortecy");
        say("\t 2. Ide sie bic");

        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 10;
        }
        else if (uA == "2") {
            r();
            say("Idziesz bic sie z ekologami, ale jestes takim mieczkiem, ze walka nie trwa dluzej niz 5 minut. Mowiac w skrocie nie zyjesz");
            return 0;
        } 
        else {
            return 0;
        }

    } else if (uA == "3") {
        r();
        say("W drodze do domu postanowiles zatanczyc makarene i polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
        return 0;
    } else if (uA != "1" && uA != "2" && uA != "3"){
        return 0;
    }

    //Etap 2 - Forteca
    r();
    say("Dotarles do FORTECY. Widzisz dookola plot ktorego nie jestes w stanie przeskoczyc. Jak sie tam dostaniesz?");
    say("\t 1. Podkopem");
    say("\t 2. Przez metalowa brame");
    say("\t 3. Przez brame glowna");
    cin >> uA;

    if (uA == "2") {
        respekt = respekt + 10;
    } else if (uA == "1") {
        r();
        say("W ktora strone kopiesz?");
        say("\t 1. W dol");
        say("\t 2. Do przodu");
      say("\t 3. Na wschod"); 

        cin >> uA;
        if (uA == "1") {
            r();
            say("Dokopujesz sie do Chin i wypadasz z Ziemi. Mowiac w skrocie nie zyjesz");
            return 0;
        }
        else if (uA == "2") {
            respekt = respekt + 30;
        } 
        else if (uA == "3") {
            r();
            say("Nie starcza ci tlenu i umierasz");
            return 0;
        } 
        else {
            return 0;
        }

    } else if (uA == "3") {
        r();
        say("Brama jest zablokowana przez klodke. Co robisz?");
        say("\t 1. Wywazam ja metalowym drazkiem");
        say("\t 2. Probuje otworzyc ja wytrychem");

        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 50;
        }
        else if (uA == "2") {
            r();
            say("Otwierajac klodke postanawiasz zatanczyc makarene i lamiesz sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
            return 0;
        } 
        else {
            return 0;
        }
    } else if (uA != "1" && uA != "2" && uA != "3"){
        return 0;
    }

    // Etap 3 - Forteca w srodku
    r();
    say("Udalo ci sie wejsc do Fortecy. Gdzie idziesz?");
    say("\t 1. Do strzelnicy"); //Od tad do zmiany
    say("\t 2. Na wysypisko");
    say("\t 3. Przez korytarz");
    say("\t 4. Na gruzy");
    cin >> uA;

    if (uA == "1") {

    } 
    else if (uA == "2") {

    }
    else if (uA == "3") {

    }
    else if (uA == "4") {

    }
    else if (uA != "1" && uA != "2" && uA != "3" && uA != "4"){
        return 0;
    }



    return 0;
}