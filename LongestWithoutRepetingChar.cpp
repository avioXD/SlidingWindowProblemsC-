#include<bits/stdc++.h>
using namespace std;

string createString(string str, int beg, int end){
    string s = "";
    while(beg<=end){
    s+=str[beg++];
    }
    return s;
}

 void longStrNoRept(string str){
    int len = str.length();
    unordered_map<char, int> Map;
  //  for(auto a : str) Map[a]++;
    int maxlen = 0;
    int i = 0;
    int z = 0;
    int count = 0; 
   // int unq_char = Map.size();
    string sub_str[20] = {""};
    int index = 0; 
    while(z<len){
        Map[str[z]]++;

        if(Map[str[z]] == 1) {
            maxlen = max(maxlen, z-i+1);
            if(maxlen>sub_str[index].length()){
              sub_str[index] = createString(str, i , z); index++;
            }
            z++;
        } 
        else
        if(Map[str[z]]>1){
            while(Map[str[z]]!=1){
                Map[str[i]]--;
                i++;
            }
            z++;
        }
         
    }
   // cout<<res;
   for(int i = 0; i< sizeof(sub_str)/sizeof(sub_str[0]);i++){
       if(sub_str[i].length()==maxlen)
        cout<<sub_str[i]<<endl;
    }
    

}

int main(){
    string str;
    getline(cin,str);
    longStrNoRept(str);

     
}