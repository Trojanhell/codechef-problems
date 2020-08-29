// Muffins
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
	int T, N, i, ans, ans1;
	cin>>T;
	while(T--){
		cin>>N;
		ans=N-((N/2)+1);
		ans1=N-ans;

		cout<<ans1<<endl;
	}
return 0; 

} 

