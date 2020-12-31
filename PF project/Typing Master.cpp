#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<Windows.h>
#include<iomanip>
#include<ctime>

using namespace std;

struct data{
	string user_name;
	unsigned int score;
};

bool score_updater(unsigned int score,string name)
{
	system("cls");
	int count=0,i=0;
	data player_name[100];
	ofstream update;
	ifstream save;
	save.open("score.txt");
	while(!save.eof())
	{
		getline(save,player_name[i].user_name,':');
		save.clear();
		
		if(name==player_name[i].user_name)
		{
			count ++;
			save>>player_name[i].score;
			save.ignore(1);
			player_name[i].score=score;
			i++;
			continue;
		}	
		save>>player_name[i].score;
		save.ignore(1);
		i++;
	}
	save.close();
	if(count==1)
	{
		update.open("score.txt",ios::trunc);
		for(int j=0;j<(i-1);j++)
		{
			update<<player_name[j].user_name<<": "<<player_name[j].score<<endl;
		}
		update.close();
		return true;
	}
	else
	{
		return false;
	}
	
}


void score_finder(string name)
{
	system("cls");
	int count=0,i=0;
	data search[100];
	ifstream find;
	find.open("score.txt");
	while(!find.eof())
	{
		
		getline(find,search[i].user_name,':');
		find.clear();
		find>>search[i].score;
		find.ignore(1);
		if(name==search[i].user_name)
		{
			count++;
			cout<<"\nScore Card Against Given Name is : \n\t"<<"Name: "<<search[i].user_name<<"\t\tScore: "<<search[i].score<<endl;
		}
		i++;

	}
	if(count==0)
		cout<<"No Record Fouud.";
}


void score_card_save(unsigned int score,char name[40])
{
	system("cls");
	ofstream save;
	cout<<"\nGame Over.!!!!!!!!!!!!!!!!!!!!!!!!!!!";
	Sleep(1800);
	system("cls");
	if (score<=50)
	{
		cout<<"\nYou didn't play well...";
	}
	else if (score>=50&& score<=100)
	{
		cout<<"\nYou played satisfactory...";
	}
	else if (score>=100&& score<=200)
	{
		cout<<"\nYou played Well...";
	}
	else if (score>=200&& score<=280)
	{
		cout<<"\nYou played very Well...";
	}
	else if (score>=300)
	{
		cout<<"\nYou played Excellent...";
	}
	Sleep(2000);
	system("cls");
	cout<<endl<<name<<" Thanks for playing the game........";
	Sleep(1800);
	if(score_updater(score,name)==true)
	{
		cout<<"Your Previous Score has been Updated..\n\nNow,\n   New Score Card: \n\t"<<"Name: "<<name<<"\t\tScore: "<<score;
		Sleep(1000);
	}
	else if(score_updater(score,name)==false)
	{
		cout<<"\nScore Card: \n\t"<<"Name: "<<name<<"\t\tScore: "<<score;
		Sleep(1000);
		save.open("score.txt",ios::app);
		save<<name<<": "<<score<<endl;
		save.close();
	}
}


int Capital_Alphabets()
{
	bool flag=true;
	int score=0,random,randx,wait=650;
	char ch,get;
	
	while(flag==true)
	{
		again:
		wait-=20;
		srand((unsigned)time(0));
		random = rand() % 25 + 65;
		ch = char(random);
		randx =rand()% 78;
		for (int j = 0; j <= 29; j++)
		{	
			COORD coord = { randx, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << ch;
			Sleep(wait);
			if(j!=29)	
			{	
				system("cls");
			}
			if (_kbhit())
			{
				get=_getch();
				if (get == ch)
				{
					flag = true;
					score += 10;
					system("cls");
					goto again;
				}
				else
					flag=false;
			}	
			if(flag==false)
			{
				break;
			}
			else if(!_kbhit() && j==29)
			{	
				flag=false;
				break;
			}
		
		}

	
	}
	
	return score;
}


int Small_Alphabets()
{
	bool flag=true;
	int score=0,random,randx,wait=650;
	char ch,get;
	
	while(flag==true)
	{
		again:
		wait-=20;
		srand((unsigned)time(0));
		random = rand() % 25 + 97;
		ch = char(random);
		randx =rand()% 78;
		for (int j = 0; j <= 29; j++)
		{	
			COORD coord = { randx, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << ch;
			Sleep(wait);
			if(j!=29)	
			{	
				system("cls");
			}
			if (_kbhit())
			{
				get=_getch();
				if (get == ch)
				{
					flag = true;
					score += 10;
					system("cls");
					goto again;
				}
				else
					flag=false;
			}	
			if(flag==false)
			{
				break;
			}
			else if(!_kbhit() && j==29)
			{	
				flag=false;
				break;
			}
		
		}

	
	}
	
	return score;
}


int Special_Characters_no()
{
	bool flag=true;
	int score=0,random,randx,wait=650;
	char ch,get;
	
	while(flag==true)
	{
		again:
		wait-=20;
		srand((unsigned)time(0));
		random=rand()%32+33;
		ch = char(random);
		randx =rand()% 78;
		for (int j = 0; j <= 29; j++)
		{	
			COORD coord = { randx, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << ch;
			Sleep(wait);
			if(j!=29)	
			{	
				system("cls");
			}
			if (_kbhit())
			{
				get=_getch();
				if (get == ch)
				{
					flag = true;
					score += 10;
					system("cls");
					goto again;
				}
				else
					flag=false;
			}	
			if(flag==false)
			{
				break;
			}
			else if(!_kbhit() && j==29)
			{	
				flag=false;
				break;
			}
		
		}

	
	}
	
	return score;
}


int Combo()
{
	bool flag=true;
	unsigned int score=0;
	int random,randx,wait=650,selection;
	char ch,get;

	while(flag==true)
	{
		again:
		wait-=20;
		srand((unsigned)time(0));
		selection=rand()%3+1;
		if(selection==1)
		{
			random=rand()%25+65;
		}
		else if(selection==2)
		{
			random=rand()%25+97;
		}
		else if(selection==3)
		{
			random=rand()%32+33;
		}
		ch = char(random);
		randx =rand()% 80;
		for (int j = 0; j <= 29; j++)
		{	
			COORD coord = { randx, j };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << ch;
			Sleep(wait);
			if(j!=29)	
			{	
				system("cls");
			}
			if (_kbhit())
			{
				get=_getch();
				if (get == ch)
				{
					flag = true;
					score+=10;
					system("cls");
					goto again;
				}
				else
					flag=false;
			}	
			if(flag==false)
			{
				break;
			}
			else if(!_kbhit() && j==29)
			{	
				flag=false;
				break;
			}
		
		}

	
	}
	
	return score;
}



int main()
{
	system("COLOR 30");	
	char name[40],smiley=1,bullet=186;
	unsigned int score,conti;
	char mode,cont,reutrn_to_main_menu='0';
	cout<<"\n*******************************************************************************\n\n";
	cout<<setw(48)<<right<<"Typing Master";
	cout<<"\n\n*******************************************************************************\n\n";
	cout<<setw(50)<<right<<"WELCOME TO THE GAME "<<smiley<<' '<<smiley<<endl;
	cout<<setw(53)<<right<<"=======================";
	cout<<"\n\nInstructions for this games are given below.Please read it carefully:-";
	cout<<"\n\n=> First you have to select the mode of the game.";
	cout<<"\n\n=> Now when will start, you have to press the key from keyboard containg the\n   character which will appear on console.";
	cout<<"\n\n=> If you will not do this, your game will be over.";
	cout<<"\n\n=> Then a compliment will display on the screen depending on your score.";
	cout<<"\n\n=> After that your score card will be displayed on the screen.";
	cout<<"\n\n=> If u played the game before this your score will be updated against your\n   name in the file.";
	cout<<"\n\n\n\nNOW MAKE YOUR SELECTION: ";
	cout<<"\n\n\t\t>>      Press 'ESC' to exit from the game.\n\n\t\t>>      Press any other key to proceed.\n";
	cont=_getch();
	conti=cont;
	if((conti>=0 && conti<=26)||(conti>=28 && conti<=255))
	{	
		system("cls");
		cout<<"\n*******************************************************************************\n\n";
		cout<<setw(47)<<right<<"Typing Master";
		cout<<"\n\n*******************************************************************************";
		cout<<"\n\nPlease Enter your name: ";
		cin.getline(name,40);
		cin.clear();
		system("cls");
		while(reutrn_to_main_menu=='0')
		{
			system("cls");
			cout<<"\n*******************************************************************************\n\n";
			cout<<setw(48)<<right<<"Typing Master";
			cout<<"\n\n*******************************************************************************\n\n\n\n";
			cout<<"\n\nThere are 4 types of games listed below: ";
			cout<<"\n\n\n\t\t>>      Press 1 to play Capital Alphabet's game. ";
			cout<<"\n\n\t\t>>      Press 2 to play Small Alphabet's game. ";
			cout<<"\n\n\t\t>>      Press 3 to play Special Character & Number's game. ";
			cout<<"\n\n\t\t>>      Press 4 to play All Printable Character's game. ";
			cout<<"\n\n\t\t>>      Press 5 to See your Preivious record in the game. ";
			cout<<"\n\n\t\t>>      Press 'ESC' to exit from the game. \n";
			cout<<endl<<endl<<" =>NOW MAKE YOUR SELECTION PLZ: ";
			mode=_getche();
			while(mode!='1' && mode!='2' && mode!='3' && mode!='4' && mode!='5' && (int)mode!=27)
			{	system("cls");
				cout<<"\n*******************************************************************************\n\n";
				cout<<setw(48)<<right<<"Typing Master";
				cout<<"\n\n*******************************************************************************";
				cout<<"\nSelect the given modes of game otherwise you will unable to play game!!!!!!!!!\n";
				cout<<"\n\n\t\t>>      Press 1 to play Capital Alphabet's game. ";
				cout<<"\n\n\t\t>>      Press 2 to play Small Alphabet's game. ";
				cout<<"\n\n\t\t>>      Press 3 to play Special Character & Number's game. ";
				cout<<"\n\n\t\t>>      Press 4 to play All Printable Character's game. ";
				cout<<"\n\n\t\t>>      Press 5 to See your Preivious record in the game. ";
				cout<<"\n\n\t\t>>      Press 'ESC' to exit from the game. \n";
				mode=_getche();
			}
			system("cls");
			if(mode=='1')
				score=Capital_Alphabets();
			else if(mode=='2')
				score=Small_Alphabets();
			else if(mode=='3')
				score=Special_Characters_no();
			else if(mode=='4')
				score=Combo();
			else if(mode=='5')
				score_finder(name);
			else if(int(mode)==27)
				goto exit;
			if(mode!='5')
				score_card_save(score,name);
			cout<<"\n\n\n\t\t>>       Press '0' to return to Main Menu!......\n\n\t\t\t\t   OR\n\n\t\t>>       Press another Key to Exit."<<endl;
			reutrn_to_main_menu=_getch(); 
			if(reutrn_to_main_menu=='0')
				continue;
			else 
				break;	
		}
		
	}
exit:

	return 0;
}
