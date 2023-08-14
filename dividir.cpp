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
   string n;
   string aux;
   

	for(i=0; i< f.size();i++)
	{
		if(f[i] == l[0]  )
		{
			n+="'"+aux+"'";
			aux=" ";
			
		}
		else{
			aux+=f[i];
	}
	}
	n+="'"+aux+"'";
	aux=" ";
return n;	
}
