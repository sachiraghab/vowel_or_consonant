#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter an english letter"<<endl;
    cin>>c;
    if(c == 'a' || c== 'e' || c== 'i' || c=='o'|| c=='u'){
        cout<<c<<" is a vowel.";
    }
    else{
        cout<<c<<" is a consonant.";
    }
    return 0;
}
