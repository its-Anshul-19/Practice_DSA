#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<int,int>m {{0,6},{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6}};
        
        int a,b;
        cin>>a>>b;
        int c = a+b;
        int sum=0;
        while(c>0){
            int d = c%10;
            sum+=m[d];
            c/=10;
        }
        cout<<sum<<endl;
    }
}
