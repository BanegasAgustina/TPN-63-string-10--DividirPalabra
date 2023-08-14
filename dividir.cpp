#include <bits/stdc++.h>
using namespace std;
string DividirPalabra(string f,string l);
int main(){
string frase;
string l;
cout<<"ingresar una frase:  ";	
getline(cin,frase);

cout<<DividirPalabra(frase , l);
}
string DividirPalabra(string f,string l){
	int i;	
   l=" ";
	for(i=0; i< f.size();i++)
	{
		if(f[i] == l[0]  )
		{
		 f[i]='"';
		}
	}
return f;	
}