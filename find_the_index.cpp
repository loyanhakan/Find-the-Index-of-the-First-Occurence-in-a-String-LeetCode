//0. HAYSTACKTE BAÞLA OLMAZSA 1.HAYSTCAKTEN TEKRAR BAÞLA ......
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int ans;
        int hrf=0;
        int sayac=0;
        
        if(needle.size() > haystack.size())
        return(-1);
        
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[hrf]){
                hrf++;
                if(hrf == needle.size()){
                    ans = (i-hrf+1);
                    return(i-hrf+1);
                    i=haystack.size();
                }
            }
            else{
                i=i-hrf;
                hrf=0;
                if(i+1 == haystack.size()) return(-1);
            }
        }
        if(hrf == needle.size())
        return ans;
        else return(-1);
    }
};
