include <iostream>
using namespace std;
 
int main() {
	int k,n,w,ctr=0;
	cin>>k>>n>>w;
	for(int i=1;i<=w;++i)
	  ctr=ctr+i*k;
	if(ctr>n)
	  cout<<ctr-n;
	else
	  cout<<'0';
	return 0;
}
