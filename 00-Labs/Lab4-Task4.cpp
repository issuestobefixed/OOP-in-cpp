#include<iostream>
using namespace std;

int countConsonants(string str, int index)
{
	if (str.length() == index)
	{
		return 0;
	}
	char ch = str[index];
	if ((ch >= 'a' && ch <= 'z') || (ch>'A' && ch < 'Z'))
	{
		if(ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
		return 1 + countConsonants(str,index+1);
	}
	return countConsonants(str,index+1);
}

int main()
{
	string s1 = "Hello World 123";
	cout << "String : " << s1 << endl;
	cout << "Consonants : " << countConsonants(s1, 0);
	return 0;
}