//operator reduce parser in cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    bool flag = false;
    char start;
    string rule[100];
    cout<<"How many rules are there: ";
    cin>>n;
    cout<<"Start symbol: ";
    cin>>start;
    for(int i=0;i<n;i++){
        cout<<start<<"-> ";
        cin>>rule[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((rule[i][j] >= 'A' && rule[i][j] <= 'Z') && (rule[i][j+1] >= 'A' && rule[i][j+1] <= 'Z'))
            {
                //cout<<"Nope(2 non-terminals are together)";
                flag = true;
            }
            else if(rule[i][j] == '$'){
                //cout<<"Nope(Null Move)";
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"\nNot an operator precedence grammar";
    }
    else {
        cout << "\nYes, it is an operator precedence grammar";
    }
}

