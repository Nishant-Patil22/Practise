#include <bits/stdc++.h> 
string convertString(string str) 
{
	for(int i=0;i<str.length();i++)
	{
		if(i==0)
		   str[i]=toupper(str[i]); 
	
		if(str[i]==' ')
		   str[i+1]=toupper(str[i+1]);
	}
	return str;
}