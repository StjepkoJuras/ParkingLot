#include <iostream>
#include <istream>

using namespace std;

void parkingFee(){
    int type, fee, cost;
    string no;
    float in, exit, duration;

    cout << " Transportation type      :"; cin >> type;
    cout << " License Plate            :"; cin >> no;
    cout << " Check in                 :"; cin >> in;
    cout << " Check Out                :"; cin >> exit;

    if(exit >= in){
        duration = exit - in;
    }else{
        duration = (12 - in) + exit;
    }

    cout << " Parking Duration         :" << duration << " hours " << endl;

    if(duration >= 2 && type == 1){
        fee = (duration - 0) * 10 * 1;
        cout << " Parking fee : $" << fee << endl;
    }else if(duration >= 2 && type == 2){
        fee = (duration - 0) * 50 * 1;
        cout << "Parking fee : $" << fee << endl;
    }else if(duration >= 2 && type == 3){
        fee = (duration - 0) * 100 * 1;
        cout << "Parking fee : $" << fee << endl;
    }else if(duration >= 2 && type == 1){
        fee = 10;
        cout << "Parking fee : $" << fee << endl;
    }else if(duration >= 2 && type == 2){
        fee = 50;
        cout << "Parking fee : $" << fee << endl;
    }else if(duration >= 2 && type == 3){
        fee = 100;
        cout << "Parking fee : $" << fee << endl;
    }

    cout << endl << endl;

    cout << " Enter the cost : $"; cin >> cost;
    cout << endl << endl;
    cout << " Printing.................." << endl;
    goto print;

print :
    cout << endl << endl;
    cout << " _____________________________________" << endl;
    cout << "| type             : " << type << endl;
    cout << "| License Plate    :"  << no << endl;
    cout << "| Parking Duration :"  << duration << " hours" << endl;
    cout << "| Parking Fee      : $"  << fee << endl;
    cout << "|                >>Paid<<  " << endl;
    cout << "______________________________________" << endl;
    cout << "|                 Thank You           |" << endl;
    cout << "|                  Take Care          |" << endl;
    cout << "______________________________________|" << endl;
    cout << endl << endl;



}

int main(){

        char a;
parking:
    cout << "--------------------------------------" << endl;
    cout << "    Parking Fee (Car/Motorcycle)      " << endl;
    cout << "                                      " << endl;
    cout << "--------------------------------------" << endl;
    cout << "       >> Transportation Type <<      " << endl;
    cout << "   Motorcycle     :           1       " << endl;
    cout << "   Car            :           2       " << endl;
    cout << "--------------------------------------" << endl;

    parkingFee();

    cout << "Count again ? (y/n)"; cin >> a;
    cout << endl << endl;

    while(a == 'y' || a == 'Y'){
        goto parking;
    }


         return 0;
    }
