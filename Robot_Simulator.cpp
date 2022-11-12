#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int East=0;
	int West =0;
	int North =0;
	int South=0;
	bool Facing_East=0;
	bool Facing_West=0;
	bool Facing_North=1; //assume that the robot is always facing north at the beginnning 
	bool Facing_South=0;
	string Commands;
	
	cout<<"Enter the starting(current) co-ordinates"<<endl;
	cin>> North >>East;
	
	cout<<"Enter the commands to give to the robot"<<endl;
	cin >> Commands;
	
	//cout<<Commands.length()<<endl;
	for(int i=0; i<(Commands.length());i++)
	{
		if(Commands[i] == 'R')
		{
			if(Facing_North ==1)
			{
				Facing_North=0;
				Facing_East=1;
			}
			else if(Facing_East == 1)
			{
				Facing_East=0;
				Facing_South=1;
			}
			else if(Facing_South ==1)
			{
				Facing_South=0;
				Facing_West=1;
			}
			else
			{
				Facing_West=0;
				Facing_North=1;
			}
		}
		
		else if(Commands[i] == 'L')
		{
			if(Facing_North ==1)
			{
				Facing_North=0;
				Facing_West=1;
			}
			else if(Facing_West == 1)
			{
				Facing_West=0;
				Facing_South=1;
			}
			else if(Facing_South ==1)
			{
				Facing_South=0;
				Facing_East=1;
			}
			else
			{
				Facing_East=0;
				Facing_North=1;
			}
		}
		
		else if(Commands[i] == 'A')
		{
			if(Facing_North == 1 || Facing_South ==1)
			{
				East =East+1;
			}
			else if(Facing_East == 1 || Facing_West ==1)
			{
				North=North+1;
			}
			else
			{
				West=West;
				South=South;
			}
		}
	}
	
	if(Facing_East==1)
	{
		cout<<"The robot ended up Facing East Direction";
	}
	if(Facing_North==1)
	{
		cout<<"The robot ended up Facing North Direction";
	}
	if(Facing_South==1)
	{
		cout<<"The robot ended up Facing South Direction";
	}
	if(Facing_West==1)
	{
		cout<<"The robot ended up Facing West Direction";
	}
	
	cout<<" And with Co-ordinates : "<< "{"<<North<<","<<East<<"}"<<endl;
	return 0;
}