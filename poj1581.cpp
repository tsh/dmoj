#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;


int main(void){
    string raw;
    getline(cin, raw);
    int teams = stoi(raw);

    string wteam;
    int wsol=0, wpt=0;

    for (int i=0; i<teams; i++){
        string line;
        getline(cin, line);
        istringstream iss(line);

        string cteam;
        int csol=0, cpt=0;
        iss >> cteam;
        for (int j=0; j<4; j++){
            int time, attempt;
            iss >> attempt >> time;
            if (time >0){
                csol += 1;
                cpt += time + (attempt-1)*20;
            }
        }
        if (csol > wsol || (csol == wsol && cpt < wpt)){
            wsol = csol;
            wpt = cpt;
            wteam = cteam;
        }
    }
    cout << wteam << " " << wsol << " "<< wpt;
}
