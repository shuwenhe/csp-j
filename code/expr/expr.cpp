#include <iostream>
#include <fstream>
#include <stack>
#include <cstring>

using namespace std;

struct node {
	int v;
	int y;
	int h;
};

int main(){
	ifstream fin("expr.in");
	ofstream fout("expr.out");

	char s[20];
	fin>>s;
	int l = strlen(s);
	stack<char> q;
	stack<node> n;

	for(int i = 0; i < l; i++){
		if(s[i] == '('){
			q.push(s[i]);
		}else if(s[i] == '0' || s[i] == '1'){
			node temp;
			temp.v = s[i] - '0';
			temp.y = 0;
			temp.h = 0;
			n.push(temp);
		}else{
			bool fff = false;
			if(s[i] == ')'){
				fff = true;
				if(q.top() == '('){
					q.top();
				}else{
					while(!n.empty()&& !q.empty()&&(q.top() == '')){

					}
				}
			}
			if(){}
			if(){}
			cout<<s<<endl;
		}
	}
	fout<<n.top().v<<endl;
	fout<<n.top().y<<" "<<n.top().h<<endl;

	fin.close();
	fout.close();
	return 0;
}
