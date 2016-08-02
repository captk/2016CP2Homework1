/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: k
 *
 * Created on 2 August 2016, 1:09 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Handin Q1: Countdown
    for (int i = 10; i > 0; i--){
        cout << i << ", ";
    }
    cout << " Blastoff!" << endl;
    
    //Handin Q2: Largest of 3 ints
    int num;
    int temp;
    cin >> num;
    for (int i = 1; i < 3; i++){
        cin >> temp;
        if (temp > num){
            num = temp;
        }
    }
    cout << "Largest number is " << num << endl;
    
    //Handin Q3: Print 3 lines
    cout << "I was printed by C++" << endl;
    cout << "\"I\" was printed by C++" << endl;
    cout << "\"I\" was printed by \"cout << \\\"I\\\" << endl\"" << endl;
    return 0;
}

