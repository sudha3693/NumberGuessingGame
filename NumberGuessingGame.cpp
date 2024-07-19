#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string name;
	char input;
	int inputuser;
		int score;
	cout<<"Enter your name:  ";
	getline(cin,name);
	cout<<endl;
	do
	{
		srand(0);
	int variable=rand()%5;
	cout<<"Enter any number between range 0 to 5 :    " ;
	cin>>inputuser;
 
	cout<<endl;
	if(inputuser==variable)
	{
		cout<<"Congratulation  ! you guessed correct number "<<endl;
		score++;
		
	}
	else
	{
		cout<<"sorry! you guessed wrong number Try again"<<endl;
			}
			cout<<"Would you like  try again Y/N:        ";
			cin>>input;
			cout<<endl;
		}
	while(input!='N');
	cout<<"your score is   "<< score<<endl;
	cout<<"GAME END"<<endl; 
	}
