#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	string x;
	int n ;   
    cin>>x;
    cin>>n;
	char char_array[n + 1];

     strcpy(char_array, x.c_str());
     
      static int ch = 0;
       static int ce = 0;
         static int cl = 0;
           static int co = 0;
        for(int i = 0;i<n;i++ ){
	      if(char_array[i]=='h'){
	            ch++;
	            // cout<<"h";
	            
	      }
	     if(char_array[i]=='e'){
	            ce++;
	            // cout<<"e";  
	      }
	     if(char_array[i]=='l'){
	            cl++;
	            //   cout<<"l";
	      }
	    if(char_array[i]=='o'){
	            co++;
	            //   cout<<"o";
	            
	      }

	}
	
	if(ch>=1 && ce>=1 && cl>=2 && co>=1){
	      cout<<"YES\n";
	}
	else{
	      cout<<"NO";
	}

	
	
	return 0;
}
