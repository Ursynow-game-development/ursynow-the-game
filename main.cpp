#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <shellapi.h>

using namespace std;

string uA; // Odpowiedź gracza
int respekt; // Punkty respektu

void check(string goodAnswer) {
    cin >> uA;
    if (uA == goodAnswer) {
        cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
        uA = "";
    }
    else {exit(1);}
}

void say(string toSay) {
    cout << toSay << endl;
}

void r() {
    cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
    uA = "";
}

void end() {
    say("");
    say("PRZEGRALES. Gra konczy sie w tym miejscu.");
    Beep(400,500);
    Beep(300,500);
    Beep(200,500);
    Beep(100,1250);
    cout << "Udalo ci sie zebrac " << respekt << " punktow respektu" << endl;
    say("");
    say("Jakies ostatnie slowa?");
    cin >> uA;  
    exit(0);
}

// voidy gra
void jedzenie() {
    r();
    say("Docierasz do malego magazynu z roznymi rzeczami. Co robisz?");
        say("\t 1. Biore apap");
        say("\t 2. Biore pistolet");
        say("\t 3. Omijam pokoj i ide dalej");
        say("\t 4. Pije wode");
        say("\t 5. Zagladam pod lozko");
        say("\t 6. Biore maczete");
        say("\t 7. Biore magiczne pudelko");
    cin >> uA;
    if (uA == "1") 
    {
        say("Bierzesz apap noc w dzien i umierasz poniewaz twoje hp wynosi -54.");
        end();
    } 
    else if (uA == "2") 
    {
        say("Pod pistoletem znajdujesz nastepujacy dokument:");
        say("");
        say("Instrukcja uzywania pistoletu: bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla.");
        say("");
        Sleep(2500);
        say("Dobra to pewnie nic waznego nie takie rzeczy robilem za dzieciaka");
        Sleep(1000);
        Beep(600,500);
        say("Twoje skille pistoletem to jakis dramat. Celujesz lufa do siebie i dedasz. Czlowieku szkoda mi slow aby to opisac");
        Sleep(2000);
        end();
    } 
    else if (uA == "3") 
    {
        respekt = respekt + 15;
    } 
    else if (uA == "4") 
    {
        r();
        say("Mniam pyszna woda");
            say("\t 1. Biore wiecej");
            say("\t 2. Juz wystarczy");
        cin >> uA;
        if (uA == "1") {
            say("Wypijasz 20 litrow wody i giniesz. gratulacje");
            end();
        }
        else if (uA == "2") {
            respekt = respekt + 25;
        } 
        else {
            end();
        }
    } 
    else if (uA == "5") 
    {
        r();
        say("Widzisz tu kilka rzeczy. Co bierzesz?");
            say("\t 1. Maczete");
            say("\t 2. Grzybka z super mario");
        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 40;
        }
        else if (uA == "2") {
            say("Znajdujesz grzyb z super mario. Postanowiles go zjesc i zaczynasz widziec na kolorowo. Czujesz sie zmeczony i kladziesz sie spac. Czyli umarles gratulacje.");
            end();
        } 
        else {
            end();
        }
    } 
    else if (uA == "6") 
    {
        respekt = respekt + 40;
    } 
    else if (uA == "7") 
    {
        say("Otwierasz pudelko i wyskakuje z niego pan mieczyslaw ktory zabija cie swoja maczeta. giniesz");
        end();
    } 
    else if (uA != "1" && uA != "2" && uA != "3" && uA != "4" && uA != "5" && uA != "6" && uA != "7"){
        end();
    }
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    say("##   ##  ######    #####   ##    ##  ##   ##    ###    ##   ## ");
    say("##   ##  ##   ##  ##   ##   ##  ##   ###  ##   ## ##   ##   ## ");
    say("##   ##  ##   ##   ###       ####    #### ##  ##   ##  ## # ## ");
    say("##   ##  ######      ###      ##     ## ####  ##   ##  ####### ");
    say("##   ##  ##   ##  ##   ##     ##     ##  ###   ## ##   ### ### ");
    say(" #####   ##   ##   #####      ##     ##   ##    ###    ##   ## ");
    say("                         THE GAME                              ");
    say("");
    say("       Czy chcialbys zagrac w ta swietna gre? (t/n)            ");
    check("t");
    
    // Etap 1 - Las

    say("Witaj w tekstowej przygodowce URSYNOW THE GAME. Twoj cel to przezycie jak najdluzej sie da gromadzac jak najwiecej punktow repsektu. Zaczynajmy");
    say("");

    say("Budzisz sie w lesie obok parku polskich 'wynalazcow'. Co robisz?");
        say("\t 1. Ide do Fortecy");
        say("\t 2. Ide na gorke");
        say("\t 3. Wracam do domu");
    cin >> uA;
    if (uA == "1") 
    {
        respekt = respekt + 20;
    } 
    else if (uA == "2") 
    {
        r();
        say("Po drodze widzisz gang ekologow przepedzajacych ludzi z gorki. Co robisz?");
            say("\t 1. Postanawiam ominac ich i isc do Fortecy");
            say("\t 2. Ide sie bic");
        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 10;
        }
        else if (uA == "2") {
            say("Idziesz bic sie z ekologami, ale jestes takim mieczkiem, ze walka nie trwa dluzej niz 5 minut. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (uA == "3") {
        say("W drodze do domu postanowiles zatanczyc makarene i polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
        end();
    } 
    else if (uA != "1" && uA != "2" && uA != "3"){
        end();
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
    } 
    else if (uA == "1") {
        r();
        say("W ktora strone kopiesz?");
            say("\t 1. W dol");
            say("\t 2. Do przodu");
            say("\t 3. Na wschod"); 
        cin >> uA;
        if (uA == "1") {
            say("Dokopujesz sie do Chin i wypadasz z Ziemi. Mowiac w skrocie nie zyjesz");
            end();
        }
        else if (uA == "2") {
            respekt = respekt + 30;
        } 
        else if (uA == "3") {
            say("Nie starcza ci tlenu i umierasz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (uA == "3") {
        r();
        say("Brama jest zablokowana przez klodke. Co robisz?");
        say("\t 1. Wywazam ja metalowym drazkiem");
        say("\t 2. Probuje otworzyc ja wytrychem");

        cin >> uA;
        if (uA == "1") {
            respekt = respekt + 50;
        }
        else if (uA == "2") {
            say("Otwierajac klodke postanawiasz zatanczyc makarene i lamiesz sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (uA != "1" && uA != "2" && uA != "3") {
        end();
    }

    // Etap 3 - Forteca w srodku

    r();
    say("Udalo ci sie wejsc do Fortecy. Gdzie idziesz?");
        say("\t 1. Do strzelnicy");
        say("\t 2. Na wysypisko");
        say("\t 3. Przez korytarz");
        say("\t 4. Na gruzy");
    cin >> uA;

    if (uA == "1") { //ODPOWIEDZ 1
        r();
        say("Na strzelnicy zauwaza cie podejrzany typ z maczeta. Co robisz?");
            say("\t 1. Biore badyla z ziemi i walcze");
            say("\t 2. Uciekam");
            say("\t 3. Tancze makarene"); 
        cin >> uA;
        if (uA == "1") { //1-1
            say("Chyba domyslasz sie ze trudno walczyc badylem z typem z maczeta. Sam juz wiesz co sie stalo");
            end();
        }
        else if (uA == "2") { //1-2
            respekt = respekt - 20;
            r();
            say("Przez ucieczke starciles 20 punktow respektu, ale na razie musisz zdecydowac W ktora strone uciekasz.");
            say("\t 1. Do przodu");
            say("\t 2. Do tylu");
            say("\t 3. W lewo"); 

            cin >> uA;
            if (uA == "1") {
                r();
                say("Gosciu rzuca w ciebie maczeta. Widzisz jak ziemia podnosi sie do gory i uderza cie w twarz. Mowiac w skrocie nie zyjesz");
                end();
            }

            else if (uA == "2") {
                say("Zostales dogoniony i jestes ded");
                end();
            }
            
            else if (uA == "3") {
                respekt = respekt + 5;
            } 

            else if (uA != "1" && uA != "2" && uA != "3") {
                end();
            }
        } 
        else if (uA == "3") {
            say("Postanowiles zatanczyc makarene i polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else if (uA != "1" && uA != "2" && uA != "3"){
            end();
        }
    }
    
    else if (uA == "2") {
        r();
        say("Jestes na wysypisku... i co dalej?");
        say("\t 1. Zawracam do korytarza");
        say("\t 2. Grzebie w smieciach");

        cin >> uA;
        if (uA == "1") {respekt = respekt + 5;}

        else if (uA == "2") //1-2-2
        {
            say("Znajdujesz grzyb z super mario. Postanowiles go zjesc i zaczynasz widziec na kolorowo. Czujesz sie zmeczony i kladziesz sie spac. Czyli umarles gratulacje.");
            end();
        }
        else if (uA != "1" && uA != "2") {end();}
    }

    else if (uA == "3") {
        respekt = respekt + 10;
    }

    else if (uA == "4") {
        say("Gdy wspiales sie na gruzy stwierdziles ze to dobry moment na zatanczenie makareny. Tanczac makarene polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
        end();
    }

    else if (uA != "1" && uA != "2" && uA != "3" && uA != "4") {
        end();
    }

    // Etap 4 - Bunkier
    
    say("Zauwazasz wejscie do bunkra i bez wachania tam wskakujesz. Jest tam bardzo ciemno. Gdzie sie kierujesz?");
        say("\t 1. Do przodu");
        say("\t 2. Do tyłu");
        say("\t 3. W lewo");
        say("\t 4. W prawo");
    cin >> uA;

    if (uA == "1") {
        jedzenie();
    }
    else if (uA == "2") {
        say("Idziesz do tyłu a tam nagle...");
        Sleep(1500);
        for(int i=0; i<15; i++) {
            system(std::string("start https://www.youtube.com/watch?v=dQw4w9WgXcQ").c_str());
        } 
        Sleep(1500);
        say("mowiac w skrocie umierasz");
        end();
    }
    else if (uA == "3") {
        r();
        say("Masz jeszcze dwie drogi");
        say("\t 1. Ide dalej prosto");
        say("\t 2. Skrecam jeszcze bardziej w lewo");
        cin >> uA;
        if (uA == "1") {jedzenie();}

        else if (uA == "2") {
            say("Uderzasz w sciane i umierasz.");
            end();
        }
        else if (uA != "1" && uA != "2") {end();}
    }
    else if (uA == "4") {
        r();
        say("Masz jeszcze dwie drogi.");
        say("\t 1. Ide dalej prosto");
        say("\t 2. Skrecam jeszcze bardziej w prawo");
        cin >> uA;
        if (uA == "1") {respekt = respekt + 15;}

        else if (uA == "2") {
            say("Uderzasz w sciane i umierasz.");
            end();
        }
        else if (uA != "1" && uA != "2") {end();}
    }
    else if (uA != "1" && uA != "2" && uA != "3" && uA != "4") {
        end();
    }

    // Etap 5 - Pokój

    r();
    say("Dochodzisz do tajemniczego pokoju. Koniec fabuly");
    cin >> uA;

    return 0;
}