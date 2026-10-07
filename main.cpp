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
    int a,b,c;
    cout<< "a="; cin>>a;
    cout<< "b="; cin>>b;
    cout<< "c="; cin>>c;
    cout << (a==b || b==c || a==c) << endl;
    return 0;
}