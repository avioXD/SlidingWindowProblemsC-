#include<bits/stdc++.h>
using namespace std;

int findAnagram(string str, string ana){
		unordered_map<char , int> Map ;	
		int count  = 0; 
		int i = 0;
		int z = 0;
		int size = ana.length();
		int len = str.length();
		int ans = 0;

		for(auto a: ana) Map[a]++;
		count = Map.size();

		while(z<len){
			if(Map.find(str[z])!=Map.end()){
				Map[str[z]]--;
				if(Map[str[z]]==0) count--;
			}

			if((z-i+1) < size) z++;

			else if((z-i+1) == size){
				if(count == 0) ans++;
				if(Map.find(str[i])!=Map.end()){
					Map[str[i]]++;
					if(Map[str[i]]==1) count++;	
				}
			 	i++;
				z++;
			}
	}
	return ans;
}



int main(){
	string str;
	getline(cin,str);
	string ana;
	getline(cin,ana);
	cout<<"ANS: "<<findAnagram( str, ana);
}

