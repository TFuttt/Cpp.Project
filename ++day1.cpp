#include <bits/stdc++.h>

using namespace std;
int h(uint32_t n) {
    int count = 0;

    while(n > 0){
        n = n & (n - 1); 
        count++;
    }
    return count;
}
	
int main() {
	vector<string> strs = {"flower","flow","flight"};
	int n = strs.size();
	int x = INT_MAX;
	for (int i = 0; i < n; i++)
        {
            x = (x < strs[i].size()) ? x : strs[i].size();
        }
        cout << x;
        bool flag = false;
        int x1 = x;
        int count = 0;
        for (int k = 0; k <= x1; k++)
        {
        	char c = strs[0][k];
        	
	for (int i = 0; i < strs.size(); i++)
	{
		if (c != strs[i][k])
		{
			cout << "cham dut chuoi" ;
			break;
		}
		else {
			flag = true;
		}
	}
	if (flag == true)
	count ++;
	else 
	break;
}
cout << count;
    }


    
