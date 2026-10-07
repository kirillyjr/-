//
// Created by Кирилл on 07.10.2026.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
int main() {
    unsigned int n;
    cout << "n=";cin >> n;
    cout << (n%2==0 && n<100 && n > 9) << endl;
    return 0;
}*/

int main() {
    unsigned a;
    cout<< "a="; cin>>a;

    cout << ((a/100 + a%100/10 + a%10) %2 == 0) << endl;
    cout << ((a/100 + a/10%10 + a%10) %2 == 0) << endl;
    return 0;
}