#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i =0; i<t; i++){
	    int DSA1, TOC1, DM1, DSA2, TOC2, DM2;
	    cin>>DSA1>>TOC1>>DM1;
	    cin>>DSA2>>TOC2>>DM2;
	    int t1 = DSA1 + TOC1 + DM1;
	    int t2 = DSA2 + TOC2 + DM2;
	    if(t1>t2) cout<<"Dragon"<<endl;
	    else if((t1 == t2) && DSA1 > DSA2) cout<<"Dragon"<<endl;
	    else if((t1 == t2) && DSA1 == DSA2 && TOC1>TOC2) cout<<"Dragon"<<endl;
	    else if((t1 == t2) && DSA1 == DSA2 && TOC1 == TOC2 && DM1 == DM2) cout<<"Tie"<<endl;
	    else{cout<<"Sloth"<<endl;}
	    
	}

}
