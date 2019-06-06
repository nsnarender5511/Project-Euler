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
    
    int T=1;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        lld n3,n5,n15;
        n3 = (n-1)/3;       // No of multiples of 3
        n5 = (n-1)/5;       // No of multiples of 5
        n15 = (n-1)/15;     // No of multiples of 15

        lld s3 = (n3*(6 + (n3-1)*3))/2;         // sum of multiples of 3
        lld s5 = (n5*(10 + (n5-1)*5))/2;        // sum of multiples of 3
        lld s15 = (n15*(30 + (n15-1)*15))/2;    // sum of multiples of 3

        cout<<s3+s5-s15<<endl;   // multiples of 3 + multiples of 5 - multiples of 15(as common in both 3 and 5)

    }
	

   	return 0;
}



/*
    Q. Find the sum of all the multiples of 3 or 5 below n 

    -----------------  Testcases  ---------------------------------

            2
            10
            100

    ----------------- Output ------------------------------------
    
            23
            2318
*/