//Ezio can manipulate at most X number of guards with the apple of eden.Given that there are Y number of guards, predict if he can safely manipulate all of them..??



#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        
        
        int x,y;
        cin>>x>>y;
        
        if(x<y){
            cout<<"NO"<<endl;
        }
        else if(x>=y){
            cout<<"YES"<<endl;
        }
        
        
    }

	return 0;
}
