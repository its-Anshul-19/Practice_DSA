//To access CRED programs, one needs to have a credit score of 750 or more.Given that the present credit score is X, determine if one can access CRED programs or not.If it is possible to access CRED programs, output YES otherwise NO.




#include <iostream>
using namespace std;

int main() {
    int n=750;
    int x;
    cin>>x;
    
    if(n>x){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
	return 0;
}
