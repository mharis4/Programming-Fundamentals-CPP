#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

struct city
{
	string name;
	double lat;
	double lon;
};


int main()
{
	city last ;
	int  cities=1   ; 

	
	ifstream file ;
	file.open("pakcities.DAT",  ios::in | ios::binary );
	if(!file.is_open())
	{
		cout << "Error " << endl ;
	}
	else 
	{
		file.read( (char *) &cities , sizeof(cities));
		int leng =cities ;
//		if(cities%2==1)
//		{
//			leng=leng-1 ;
//		}
		int i=0 ;
	
		
		
	while(!file.eof())
		{
			if(i==leng)
			{
				file.read( (char *) &last , sizeof(last));
				i++ ;
			break ; 
			}
			else
			{
				file.read( (char *) &sec , sizeof(sec));
				
			}
			

			i++ ;
			
		}
		
	}
	file.close();
	
	cout << last.name << last.lat << last.lon ; 
		return 0 ;
		
		
		
		
		
		

}
	
	
	


