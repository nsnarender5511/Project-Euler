#include <bits/stdc++.h>
#define lld long long int
#define vi vector<int>
#define vlld vector<lld>
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define mii map<int, int>
#define vii vector<pii>
 
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    
    int T;
    cin>>T;
    while(T--){
        int n,a=0,b=1,temp,sum = 0;
        cin>>n; 
                        // Function to get all fibanacci nos
        do{
            temp = a;
            a = b;
            b = a + temp;
            if(b%2==0  && b<n) sum+=b;
        }while(b<n);

        cout<<sum<<endl;

    }
    
    
    return 0;
}



/*
    Q. Find the sum of all the even fibbanacci No.s below  n 

    -----------------  Testcases  ---------------------------------

            2
            10
            100

    ----------------- Output ------------------------------------
    
            10
            44
*/