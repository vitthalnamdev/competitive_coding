#include<bits/stdc++.h>
using namespace std;
/*
 * About: for solving ax + by = gcd(a,b);
 *        where x and y must be integers.
 * read its info from internet for future. 
 * the code is only mention below.
 * 
 * 
 * 
 * */
 class newpair{
	public:
	int x,y,gcd; 
	 
 };
 newpair algorithm(int a,int b){
   if(b==0){
	  newpair ab;ab.x = 1; ab.y = 0;ab.gcd = a;  
	  return ab;
   }
   
   newpair ab = algorithm(b,a%b);	 
   newpair bb;
   bb.gcd = ab.gcd;
   bb.y = ab.x - (a/b) * ab.y;
   bb.x = (ab.gcd - b* bb.y ) / a;
   return bb;  
 }


int main(){
	 int a,b;cin>>a>>b;
	 // equation: ax + by = gcd(a,b);
	 // find x and y in integers which satisfy this equation.
	 newpair ans = algorithm(a,b);
	 cout<<ans.x<<" "<<ans.y<<" "<<ans.gcd<<endl;
}
