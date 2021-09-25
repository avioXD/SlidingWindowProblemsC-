#include<bits/stdc++.h>
using namespace std;
int maxlenOf(char *str, int n , int con){
    unordered_map<char, int> Map;
    int i = 0;
    int z = 0;
    int maxLen = 0;
    int count = 0;
    while(z< n){
        Map[str[z]]++;
        count = Map.size();

        if(count < con) z++;
        
        else if(count  == con ){
            maxLen = max(maxLen, (z-i+1));
            z++;
        }else if(count> con){
            int in = i;
            while(Map[str[in]]!=0){
                Map[str[i]]--;
                i++;
            }
            Map.erase(Map.find(str[in]));
            z++;
        }
    }

    return maxLen;

}


int main(){
    char str[100];
    int n ; 
    int con;

    cin>>n>>con;
    for(int i =  0; i<n; i++){
        cin>>str[i];
    }
    
    cout<<maxlenOf(str, n , con);

}