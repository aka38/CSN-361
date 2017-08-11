#include <bits/stdc++.h>
using namespace std;
void print_hex(int value)
{
    if (value==0)
        return;

    int rem=value%16;
    value/= 16;
    print_hex(value); 
    if (rem>9)
        cout<<(char)(rem-10 +'A');
    else
        cout<<rem;
}
int main()
{
	string s[4];
	int a[4];
	vector<int> v;
	v.push_back(-1);
	string ip1,ip2;
	cin>>ip1;
	v.push_back(ip1.size());
	int j=0;
	for(int i=0;i<ip1.size();i++)
	{
        if(ip1[i]=='.')
        	v.push_back(i);
	}
	sort(v.begin(),v.end());
	for(int j=0;j<4;j++){

		for(int i=v[j]+1;i<v[j+1];i++)
		{
			s[j]+=ip1[i];
		}
	}
	for(int i=0;i<4;i++)
	{
		a[i]=stoi(s[i]);
		
	}
	print_hex(a[0]);
	print_hex(a[1]);
	cout<<":";
	print_hex(a[2]);
	print_hex(a[3]);


	


}