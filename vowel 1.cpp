#include<iostream>
using namespace std;
int main ()
{
	char str[10], vo[11]="aeiouAEIOU";
	int count=0;
	cout<<"enter the string";
	cin>>str;
	for (int i=0;i<=str[i];i++)
	{
		for (int j=i+1;j<=vo[j];j++)
		{
			if (str[i]==vo[j])
			{
				count++;
				break;
			}
		}
	}
	cout<<"the number of vowels in string is "<<count;
	return 0;
}
