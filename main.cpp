#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <shellapi.h>

using namespace std;

void check(string answer);
void say(string toSay);
void respect();
void end();

void jedzenie();

string userAnswer; // Odpowiedź gracza
int respekt; // Punkty respektu

int main()
{
    // setlocale(LC_CTYPE, "Polish");
    say("##   ##  ######    #####   ##    ##  ##   ##    ###    ##   ## ");
    say("##   ##  ##   ##  ##   ##   ##  ##   ###  ##   ## ##   ##   ## ");
    say("##   ##  ##   ##   ###       ####    #### ##  ##   ##  ## # ## ");
    say("##   ##  ######      ###      ##     ## ####  ##   ##  ####### ");
    say("##   ##  ##   ##  ##   ##     ##     ##  ###   ## ##   ### ### ");
    say(" #####   ##   ##   #####      ##     ##   ##    ###    ##   ## ");
    say("                         THE GAME                              ");
    say("       Czy chcialbys zagrac w ta swietna gre? (t/n)            ");
    check("t");
    
    // Etap 1 - Las

    say("Witaj w tekstowej przygodowce URSYNOW THE GAME. Twoj cel to przezycie jak najdluzej sie da gromadzac jak najwiecej punktow repsektu. Zaczynajmy");
    say("");

    say("Budzisz sie w lesie obok parku polskich 'wynalazcow'. Co robisz?");
    say("\t 1. Ide do Fortecy");
    say("\t 2. Ide na gorke");
    say("\t 3. Wracam do domu");

    cin >> userAnswer;

    if (userAnswer == "1") 
    {
        respekt = respekt + 20;
    } 
    else if (userAnswer == "2") 
    {
        respect();
        say("Po drodze widzisz gang ekologow przepedzajacych ludzi z gorki. Co robisz?");
            say("\t 1. Postanawiam ominac ich i isc do Fortecy");
            say("\t 2. Ide sie bic");
        cin >> userAnswer;
        if (userAnswer == "1") {
            respekt = respekt + 10;
        }
        else if (userAnswer == "2") {
            say("Idziesz bic sie z ekologami, ale jestes takim mieczkiem, ze walka nie trwa dluzej niz 5 minut. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (userAnswer == "3") {
        say("W drodze do domu postanowiles zatanczyc makarene i polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
        end();
    } 
    else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3"){
        end();
    }

    //Etap 2 - Forteca 

    respect();
    say("Dotarles do FORTECY. Widzisz dookola plot ktorego nie jestes w stanie przeskoczyc. Jak sie tam dostaniesz?");
        say("\t 1. Podkopem");
        say("\t 2. Przez metalowa brame");
        say("\t 3. Przez brame glowna");
    cin >> userAnswer;

    if (userAnswer == "2") {
        respekt = respekt + 10;
    } 
    else if (userAnswer == "1") {
        respect();
        say("W ktora strone kopiesz?");
        say("\t 1. W dol");
        say("\t 2. Do przodu");
        say("\t 3. Na wschod"); 
        cin >> userAnswer;
        if (userAnswer == "1") {
            say("Dokopujesz sie do Chin i wypadasz z Ziemi. Mowiac w skrocie nie zyjesz");
            end();
        }
        else if (userAnswer == "2") {
            respekt = respekt + 30;
        } 
        else if (userAnswer == "3") {
            say("Nie starcza ci tlenu i umierasz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (userAnswer == "3") {
        respect();
        say("Brama jest zablokowana przez klodke. Co robisz?");
        say("\t 1. Wywazam ja metalowym drazkiem");
        say("\t 2. Probuje otworzyc ja wytrychem");

        cin >> userAnswer;
        if (userAnswer == "1") {
            respekt = respekt + 50;
        }
        else if (userAnswer == "2") {
            say("Otwierajac klodke postanawiasz zatanczyc makarene i lamiesz sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else {
            end();
        }
    } 
    else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3") {
        end();
    }

    // Etap 3 - Forteca w srodku

    respect();
    say("Udalo ci sie wejsc do Fortecy. Gdzie idziesz?");
    say("\t 1. Do strzelnicy");
    say("\t 2. Na wysypisko");
    say("\t 3. Przez korytarz");
    say("\t 4. Na gruzy");
    cin >> userAnswer;

    if (userAnswer == "1") { //ODPOWIEDZ 1
        respect();
        say("Na strzelnicy zauwaza cie podejrzany typ z maczeta. Co robisz?");
        say("\t 1. Biore badyla z ziemi i walcze");
        say("\t 2. Uciekam");
        say("\t 3. Tancze makarene"); 
        cin >> userAnswer;
        if (userAnswer == "1") { //1-1
            say("Chyba domyslasz sie ze trudno walczyc badylem z typem z maczeta. Sam juz wiesz co sie stalo");
            end();
        }
        else if (userAnswer == "2") { //1-2
            respekt = respekt - 20;
            respect();
            say("Przez ucieczke starciles 20 punktow respektu, ale na razie musisz zdecydowac W ktora strone uciekasz.");
            say("\t 1. Do przodu");
            say("\t 2. Do tylu");
            say("\t 3. W lewo"); 

            cin >> userAnswer;
            if (userAnswer == "1") {
                respect();
                say("Gosciu rzuca w ciebie maczeta. Widzisz jak ziemia podnosi sie do gory i uderza cie w twarz. Mowiac w skrocie nie zyjesz");
                end();
            }

            else if (userAnswer == "2") {
                say("Zostales dogoniony i jestes ded");
                end();
            }
            
            else if (userAnswer == "3") {
                respekt = respekt + 5;
            } 

            else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3") {
                end();
            }
        } 
        else if (userAnswer == "3") {
            say("Postanowiles zatanczyc makarene i polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
            end();
        } 
        else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3"){
            end();
        }
    }
    
    else if (userAnswer == "2") {
        respect();
        say("Jestes na wysypisku... i co dalej?");
        say("\t 1. Zawracam do korytarza");
        say("\t 2. Grzebie w smieciach");

        cin >> userAnswer;
        if (userAnswer == "1") {respekt = respekt + 5;}

        else if (userAnswer == "2") //1-2-2
        {
            say("Znajdujesz grzyb z super mario. Postanowiles go zjesc i zaczynasz widziec na kolorowo. Czujesz sie zmeczony i kladziesz sie spac. Czyli umarles gratulacje.");
            end();
        }
        else if (userAnswer != "1" && userAnswer != "2") {end();}
    }

    else if (userAnswer == "3") {
        respekt = respekt + 10;
    }

    else if (userAnswer == "4") {
        say("Gdy wspiales sie na gruzy stwierdziles ze to dobry moment na zatanczenie makareny. Tanczac makarene polamales sobie wszystkie kosci. Mowiac w skrocie nie zyjesz");
        end();
    }

    else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3" && userAnswer != "4") {
        end();
    }

    // Etap 4 - Bunkier
    
    say("Zauwazasz wejscie do bunkra i bez wachania tam wskakujesz. Jest tam bardzo ciemno. Gdzie sie kierujesz?");
        say("\t 1. Do przodu");
        say("\t 2. Do tyłu");
        say("\t 3. W lewo");
        say("\t 4. W prawo");
    cin >> userAnswer;

    if (userAnswer == "1") {
        jedzenie();
    }
    else if (userAnswer == "2") {
        say("Idziesz do tyłu a tam nagle...");
        Sleep(1500);
        for(int i=0; i<15; i++) {
            system(std::string("start https://www.youtube.com/watch?v=dQw4w9WgXcQ").c_str());
        } 
        Sleep(1500);
        say("mowiac w skrocie umierasz");
        end();
    }
    else if (userAnswer == "3") {
        respect();
        say("Masz jeszcze dwie drogi");
        say("\t 1. Ide dalej prosto");
        say("\t 2. Skrecam jeszcze bardziej w lewo");
        cin >> userAnswer;
        if (userAnswer == "1") {jedzenie();}

        else if (userAnswer == "2") {
            say("Uderzasz w sciane i umierasz.");
            end();
        }
        else if (userAnswer != "1" && userAnswer != "2") {end();}
    }
    else if (userAnswer == "4") {
        respect();
        say("Masz jeszcze dwie drogi.");
        say("\t 1. Ide dalej prosto");
        say("\t 2. Skrecam jeszcze bardziej w prawo");
        cin >> userAnswer;
        if (userAnswer == "1") {respekt = respekt + 15;}

        else if (userAnswer == "2") {
            say("Uderzasz w sciane i umierasz.");
            end();
        }
        else if (userAnswer != "1" && userAnswer != "2") {end();}
    }
    else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3" && userAnswer != "4") {
        end();
    }

    // Etap 5 - Pokój

    respect();
    say("Dochodzisz do tajemniczego pokoju. Koniec fabuly");
    cin >> userAnswer;

    return 0;
}

void check(string answer) {
    cin >> userAnswer;
    if (userAnswer == answer) {
        cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
        userAnswer = "";
    }
    else {exit(1);}
}

void say(string toSay) {
    cout << toSay << endl;
}

void respect() {
    cout << "== Twoje punkty respektu - " << respekt << " ==" << endl;
    userAnswer = "";
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
    cin >> userAnswer;  
    exit(0);
}

void jedzenie() {
    respect();
    say("Docierasz do malego magazynu z roznymi rzeczami. Co robisz?");
        say("\t 1. Biore apap");
        say("\t 2. Biore pistolet");
        say("\t 3. Omijam pokoj i ide dalej");
        say("\t 4. Pije wode");
        say("\t 5. Zagladam pod lozko");
        say("\t 6. Biore maczete");
        say("\t 7. Biore magiczne pudelko");
    cin >> userAnswer;
    if (userAnswer == "1") 
    {
        say("Bierzesz apap noc w dzien i umierasz poniewaz twoje hp wynosi -54.");
        end();
    } 
    else if (userAnswer == "2") 
    {
        say("Pod pistoletem znajdujesz nastepujacy dokument:");
        say("");
        say("Instrukcja uzywania pistoletu: bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla.");
        say("");
        Sleep(4000);
        say("Dobra to pewnie nic waznego nie takie rzeczy robilem za dzieciaka");
        Sleep(2000);
        Beep(600,500);
        say("Twoje skille pistoletem to jakis dramat. Celujesz lufa do siebie i dedasz. Czlowieku szkoda mi slow aby to opisac");
        Sleep(2000);
        end();
    } 
    else if (userAnswer == "3") 
    {
        respekt = respekt + 15;
    } 
    else if (userAnswer == "4") 
    {
        respect();
        say("Mniam pyszna woda");
            say("\t 1. Biore wiecej");
            say("\t 2. Juz wystarczy");
        cin >> userAnswer;
        if (userAnswer == "1") {
            say("Wypijasz 20 litrow wody i giniesz. gratulacje");
            end();
        }
        else if (userAnswer == "2") {
            respekt = respekt + 25;
        } 
        else {
            end();
        }
    } 
    else if (userAnswer == "5") 
    {
        respect();
        say("Widzisz tu kilka rzeczy. Co bierzesz?");
            say("\t 1. Maczete");
            say("\t 2. Grzybka z super mario");
        cin >> userAnswer;
        if (userAnswer == "1") {
            respekt = respekt + 40;
        }
        else if (userAnswer == "2") {
            say("Znajdujesz grzyb z super mario. Postanowiles go zjesc i zaczynasz widziec na kolorowo. Czujesz sie zmeczony i kladziesz sie spac. Czyli umarles gratulacje.");
            end();
        } 
        else {
            end();
        }
    } 
    else if (userAnswer == "6") 
    {
        respekt = respekt + 40;
    } 
    else if (userAnswer == "7") 
    {
        say("Otwierasz pudelko i wyskakuje z niego pan mieczyslaw ktory zabija cie swoja maczeta. giniesz");
        end();
    } 
    else if (userAnswer != "1" && userAnswer != "2" && userAnswer != "3" && userAnswer != "4" && userAnswer != "5" && userAnswer != "6" && userAnswer != "7"){
        end();
    }
}
