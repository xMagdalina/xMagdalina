#include <iostream>

using namespace std;

	string sortowanie(string s)
	
	{
		string t(s);
		int dlugosc = t.length();
		
		
		bool sorted;
		do
		{
			sorted=true;
			for(int i=0; i<dlugosc-1;i++)
			{
				for(int j=dlugosc; j>=1; j--)
				{
					if(t[i]>t[i+1])
					{
						int bufor = t[i];
						t[i]=t[i+1];
						t[i+1]=bufor;
						sorted=false;
					}
				}
			}
		}while(!sorted);
	
	return t;
	}
	
	int main(int argc, char** argv){
		cout << sortowanie("Ala");
		return 0;
	}
	
