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
    //Wstęp
    say("Witaj w URSYNÓW THE GAME");
    say("Czy chciałbyś zagrać w tą świetną grę? (t/n)");
    check("t");
    
    say("Witaj w tekstowej przygodówce URSYNÓW THE GAME. Podczas gry będziesz gromadził punkty respektu. Aby wybrać odpowiedź wpisz jej numer. Zaczynajmy.");
    say("Budzisz się w lesie obok parku polskich 'wynalazców'. Co robisz?");
    say("\t 1. Idę do Fortecy");
    say("\t 2. Idę na górkę");
    say("\t 3. Wracam do domu");

    //Etap 1 - Przebudzenie
    cin >> uA;
    if (uA == "1") {
        respekt = respekt + 20;
    } else if (uA == "2") {
        r();
        say("Po drodze widzisz gang ekologów przepędzających ludzi z górki. Co robisz?");
        say("\t 1. Postanawiam ominąć ich i iść do Fortecy");
        say("\t 2. Idę się bić");

        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 10;
        }
        else if (uA == "2") {
            r();
            say("Idziesz bić się z ekologami, ale jesteś takim mięczkiem, że walka nie trwa dłużej niż 5 minut. Mówiąc w skrócie nie żyjesz");
            return 0;
        } 
        else {
            return 0;
        }

    } else if (uA == "3") {
        r();
        say("W drodze do domu postanowiłeś zatańczyć makarenę i połamałeś sobie wszystkie kości. Mówiąc w skrócie nie żyjesz");
        return 0;
    } else if (uA != "1" && uA != "2" && uA != "3"){
        return 0;
    }

    //Etap 2 - Forteca
    r();
    say("Dotarłeś do FORTECY. Widzisz dookoła płot którego nie jesteś w stanie przeskoczyć. Jak się tam dostaniesz?");
    say("\t 1. Podkopem");
    say("\t 2. Przez metalową bramę");
    say("\t 3. Przez bramę główną");
    cin >> uA;

    if (uA == "2") {
        respekt = respekt + 10;
    } else if (uA == "1") {
        r();
        say("W którą stronę kopiesz?");
        say("\t 1. W dół");
        say("\t 2. Do przodu");
        say("\t 3. Na wschód");

        cin >> uA;
        if (uA == "1") {
            r();
            say("Dokopujesz się do Chin i wypadasz z Ziemi. Mówiąc w skrócie nie żyjesz");
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
        say("Brama jest zablokowana przez kłódkę. Co robisz?");
        say("\t 1. Wyważam ją metalowym drążkiem");
        say("\t 2. Próbuję otworzyć ją wytrychem");

        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 50;
        }
        else if (uA == "2") {
            r();
            say("Otwierając kłódkę postanawiasz zatańczyć makarenę i łamiesz sobie wszystkie kości. Mówiąc w skrócie nie żyjesz");
            return 0;
        } 
        else {
            return 0;
        }
    } else if (uA != "1" && uA != "2" && uA != "3"){
        return 0;
    }

    // Etap 3 - Forteca w środku
    r();
    say("Udało ci się wejść do Fortecy. Gdzie idziesz?");
    say("\t 1. Do strzelnicy"); //Od tąd do zmiany
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