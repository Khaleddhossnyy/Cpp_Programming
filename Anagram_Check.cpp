#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	string Original_String;
	string Temp_String;
	int Number_Of_Strings=0;
	vector<string> String_Vector={};
	bool flag=0;

	cout<<"Enter the original string : ";
	cin>> Original_String;
	cout<<"The original string entered is: "<<Original_String<<endl;
	
	cout<<"-------------------------------------"<<endl;
	
	cout<<"The original string after changing to lower case is : ";
	for(int j=0; j<Original_String.length();j++)
		{
			Original_String[j]=tolower(Original_String[j]);
			cout<<Original_String[j];
		}
	cout<<endl;
	cout<<"-------------------------------------"<<endl;
	
	cout<<"Enter the number of other strings : "<<endl;
	cin>>Number_Of_Strings;
	
	cout<<"Enter a list of strings separated by a space : ";
	for (int i=0;i<Number_Of_Strings;i++)
	{
		cin>>Temp_String;
		String_Vector.push_back(Temp_String);
	}
	cout<<"-------------------------------------"<<endl;
	
	cout<<"The entered list of strings is : ";
	for (int i=0;i<Number_Of_Strings;i++)
	{
		cout<<String_Vector[i]<<" ";
	}
	cout<<endl;
	cout<<"-------------------------------------"<<endl;
	
	for(int i=0;i<String_Vector.size();i++)
	{
		Temp_String = String_Vector[i];
		cout<<Temp_String.length()<<endl;
		cout<<Original_String.length()<<endl;
		if(Temp_String.length() != Original_String.length())
		{
			cout<<"here from continue"<<endl;
			continue;
		}
		else
		{
			string Temp_Original = Original_String;
			string Temp_Temp=Temp_String;
			sort(Temp_Original.begin(),Temp_Original.end());
			sort(Temp_Temp.begin(),Temp_Temp.end());
			for(int j=0; j<Temp_Temp.length();j++)
			{
				Temp_Temp[j]=tolower(Temp_Temp[j]);
				//cout<<Temp_String[j]<<endl;
				if(Temp_Temp[j] != Temp_Original[j])
					{
						cout<<"here from break"<<endl;
						flag=1;
						break;
					}
				
			}
			if (flag == 0)
			{
				break;
			}
		}
	}
	
	cout<<"The anagram of : "<<Original_String<<" from the entered list is : "<<Temp_String<<endl;
	
	
	return 0;
}