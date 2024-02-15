//
//  main.cpp
//  Patterns
//
//  Created by Chandan Gepala on 13/02/24.
//

#include <iostream>
using namespace std;

void printFirstPattern(){
    for(int i = 0; i < 5; i++){
        cout << "*****\n";
    }
}

void printSecondPattern(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void printThirdPattern(){
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}

void printFourthPattern(){
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
}


void printFifthPattern(int n){
    for(int i = 1; i <=n; i++){
        for(int j= 5 ; j>= i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


void printSixthPattern(){
    for(int i = 1; i <= 5; i++){
        for(int j= 1 ; j <= 5 - i + 1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void printSeventhPattern(int n){
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout<<" ";
        }
        
        for (int j = 0 ; j<2*i + 1; j++) {
            cout<<"*";
        }
        for (int j = 0; j < 5 - i - 1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

void printEightPattern(int n){
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        
        for(int j = 0; j < 2*(n - i) - 1; j++){
            cout<<"*";
        }
        
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void printNinethPattern(int n){
    printSeventhPattern(n);
    printEightPattern(n);
}

void printTenthPattern(int n){
    for (int i = 0; i <= 2*n - 1; i++) {
        
        int stars = i;
        if (i > n) {
            stars = 2*n - i;
        }
        for (int j = 0; j < stars; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void printEleventhPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j=0; j <=i ; j++){
            if((i+j)%2 == 0)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
}

void print12thPattern(int n){
    
    int space = 2*(n - 1);
    for(int i=1; i <= n; i++){
        //numbers
        for (int j = 1; j <= i; j++) {
            cout<<j;
        }
        
        //space
        for (int j = 1; j <= space; j++) {
            cout<<" ";
        }
        
        //numbers
        for(int j = i; j >= 1; j--){
            cout<<j;
        }
        
        cout<<endl;
        space -= 2;
    }
}

void print13thPattern(int n){
    int m = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<m<<" ";
            m += 1;
        }
        cout<<endl;
    }
}

void print14thPattern(int n){
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < n; i++) {
//        for(int j = 0; j <= i; j++){
//            cout<<str[j];
//        }
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print15pattern(int n){
    for (int i=n; i >= 0; i--) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout<<ch;
        }
        cout<<endl;
    }
}

void print16thPattern(int n){
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j=0; j <=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    // insert code here...
    //cout << "Hello, World!\n";
   
    //printFirstPattern();
    //printSecondPattern();
    //printThirdPattern();
    //printFourthPattern();
    //printFifthPattern();
    //printSixthPattern();
    //printSeventhPattern(n);
    //printEightPattern(n);
    //printNinethPattern(n);
    //printTenthPattern(n);
    //printEleventhPattern(n);
    //print12thPattern(n);
    //print13thPattern(n);
    //print14thPattern(n);
    //print15pattern(n);
    print16thPattern(n);
    return 0;
}


