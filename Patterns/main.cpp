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

void print17thPattern(int n){
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n - i -1 ; j++){
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i + 1)/2 ;
        
        for(int j = 1; j <= 2*i + 1; j++){
            cout<<ch;
            if(j <= breakpoint)
                ch++;
            else
                ch--;
            
        }
        
        for(int j = 0; j < n - i -1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print18thPattern(int n){
    
    for(int i = 1; i <= n; i++){
        char ch = 'A' + n - i;
        for(int j = 1; j <= i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void print19thPatternA(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n/2 - i; j++) {
            cout<<"*"<<" ";
        }
        
        if(i >=n/2){
            for (int j = n/2; j <=i; j++) {
                cout<<"*"<<" ";
            }
        }
        
        int breakpoint;
        if(i < n/2)
            breakpoint = 2*i;
        else
            breakpoint = 2*(n - i - 1);
        
        for (int j = 0; j < breakpoint; j++) {
            cout<<" "<<" ";
        }
        
        
        for (int j = 0; j < n/2 - i; j++) {
            cout<<"*"<<" ";
        }
        
        if(i >=n/2){
            for (int j = n/2; j <=i; j++) {
                cout<<"*"<<" ";
            }
        }
        
        cout<<endl;
    }
}

void print19thPatternB(int n){
    int initSpaces = 0;
    for (int i = 0; i < n ; i++) {
        //stars
        for (int j = 0; j < n - i; j++) {
            cout<<"*"<<" ";
        }
        //spaces
        
        for (int j = 0; j< initSpaces; j++) {
            cout<<" "<<" ";
        }
        //star
        for (int j = 0; j < n - i; j++) {
            cout<<"*"<<" ";
        }
        initSpaces += 2;
        cout<<endl;
    }
    
    initSpaces = 2*(n - 1);
    for (int i = 0; i < n; i++) {
        //stars
        for(int j = 0; j<=i; j++){
            cout<<"*"<<" ";
        }
        //spaces
        for(int j=0; j< initSpaces; j++){
            cout<<" "<<" ";
        }
        //stars
        for(int j = 0; j<=i; j++){
            cout<<"*"<<" ";
        }
        initSpaces -= 2;
        cout<<endl;
    }
}

void print20thPattern(int n){
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i> n) stars = 2*n - i;
        //starts
        for (int j = 1; j<= stars; j++) {
            cout<<"*"<<" ";
        }
        //spaces
        for(int j= 1; j<=spaces; j++){
            cout<<" "<<" ";
        }
        //stars
        for (int j = 1; j<= stars; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
        if(i< n)
            spaces -=2;
        else
            spaces +=2;
    }
}

void print21stPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            if( i == 0 || i == n - 1 || j == 0 || j == n -1 )
                cout<<"*"<<" ";
            else
                cout<<" "<< " ";
        }
        cout<<endl;
    }
}

void print22ndPattern(int n){
    for(int i = 0; i < 2*n - 1; i++){
        for(int j = 0; j < 2*n - 1; j++){
            int top = i;
            int left = j;
            int right = 2*n - 2 - j;
            int down = 2*n - 2 - i;
            cout<<( n - min(min(top, down), min( left, right)));
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
    //print16thPattern(n);
    //print17thPattern(n);
    //print18thPattern(n);
    //print19thPatternA(n);
    //print19thPatternB(n);
    //print20thPattern(n);
    //print21stPattern(n);
    print22ndPattern(n);
    return 0;
}


