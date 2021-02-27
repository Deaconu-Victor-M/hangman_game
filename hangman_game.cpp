#include <iostream>
#include <string.h>
#include <time.h>
#include <string>
#include <algorithm>

using namespace std;

char str[10][31];



int main()
{
    string name;
    cout << "Introdu numele pentru a incpe: ", cin >> name;
    cout << "Salut " << name << "!" << '\n' << "Jocul incepe acum!" << '\n';
    int random, len;
    char chr[1];
    char fol[21];
    char secretword[51];
    char words[50][101] = {"banana", "ciocolata", "robot",
                           "informatica", "matematica", "colorat",
                           "sala", "calculator", "carcasa", "dublat"};

    srand(time(0));
    random = rand() % 10;
    strcpy(secretword,&words[random][0]);
    len =strlen(secretword);

    ///cout << secretword << '\n';

    char cuvg[101];
    for(int i = 0; i < len; ++i) {
        cuvg[i] = '__';

    }

    for(int i = 0; i < len; ++i) {
        cout << cuvg[i] << " ";

    }cout << '\n';

    cout << "Alege o litera: ";
    cin >> chr; /// caracterul ales


    int win = 0;
    int nim;
    int x = 0;
    int j = len; ///cate nu se potrivesc
    int turns = 9; ///ture ramase
    while(turns != 0) {
        nim = 0;

        if(strchr(fol, chr[0])) {
            cout << "Litera a fost folosita" << '\n';
            goto INTRO;
        }

        ///Verificam daca litera e in cuvant & copiem litera
        for(int i = 0; i < len; ++i) {
            if(strchr(chr, secretword[i])) {
                cuvg[i] = secretword[i];
                ++nim;
                strcpy(fol+x, chr);
                ++x;
                --j;
                //cout << secretword[i] << " ";
                //secretword[i] = chr[0];
            }
        }

        if(nim != 0)
            for(int i = 0; i < len; ++i)
                cout << cuvg[i] << " ";

        cout << '\n';

        /// daca nu apare --> scad turele
        if(j == len) {
            cout << '\n';
            for(int i = 0; i < len; ++i)
                cout << cuvg[i] << " ";
            --turns;
            cout << '\n';
            cout << "Gresit" << '\n';
            cout << "Mai ai " << turns << " incercari" << '\n';
            cout << '\n';
            j = 0;
        } else win += nim;

            if(turns == 9){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }

            if(turns == 8){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 7){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 6){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
                }
            if(turns == 5){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 4){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||     /|\\ " << '\n';
                cout << " ||    / | \\ " << '\n';
                cout << " ||      |" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 3){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||     /|\\ " << '\n';
                cout << " ||    / | \\ " << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     / \\ " << '\n';
                cout << " ||" << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 2){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||     /|\\ " << '\n';
                cout << " ||    / | \\ " << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     / \\ " << '\n';
                cout << " ||    /   \\ " << '\n';
                cout << " ||" << '\n';
                cout << "====" << '\n';
            }
            if(turns == 1){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     [ ]" << '\n';
                cout << " ||     /|\\ " << '\n';
                cout << " ||    / | \\ " << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     / \\ " << '\n';
                cout << " ||    /   \\ " << '\n';
                cout << " ||   /     \\ " << '\n';
                cout << "====" << '\n';
            }
            if(turns == 0){
                cout << '\n';
                cout << " __ " << '\n';
                cout << " ||------|" << '\n';
                cout << " ||      |" << '\n';
                cout << " ||    [X X]" << '\n';
                cout << " ||     /|\\ " << '\n';
                cout << " ||    / | \\ " << '\n';
                cout << " ||      |" << '\n';
                cout << " ||     / \\ " << '\n';
                cout << " ||    /   \\" << '\n';
                cout << " ||   /     \\ " << '\n';
                cout << "====" << '\n';
                cout << "Ai pierdut! " << '\n';
                break;
            }
        /// daca ai gasit toate literele afiseaza "Ai castigat!"
        if(win == len) {
            cout << "Ai castigat" << '\n';
            cout << "Cuvantul e: ";
            for (int i = 0; i < len; ++i)
                cout << secretword[i];
            break;

        }
        j = len;
        INTRO:
        cout << "Alege o litera: ";
        cin >> chr;
        cout << '\n';

    }

}
