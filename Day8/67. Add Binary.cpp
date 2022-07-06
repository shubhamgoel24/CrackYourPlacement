class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int an=a.length()-1;
        int bn=b.length()-1;
        string ans="";
        while(an>=0 && bn>=0){
            int x=a[an]-'0';
            int y=b[bn]-'0';
            int z=x+y+carry;
            if(z==2){
                z=0;
                carry=1;
            }else if(z==3){
                z=1;
                carry=1;
            }else{
                carry=0;
            }
            ans=to_string(z)+ans;
            an--;
            bn--;
        }
        while(an>=0){
            int x=a[an]-'0';
            int z=x+carry;
            if(z==2){
                z=0;
                carry=1;
            }else{
                carry=0;
            }
            ans=to_string(z)+ans;
            an--;
        }
        while(bn>=0){
            int y=b[bn]-'0';
            int z=y+carry;
            if(z==2){
                z=0;
                carry=1;
            }else{
                carry=0;
            }
            ans=to_string(z)+ans;
            bn--;
        }
        if(carry==1){
            ans="1"+ans;
        }
        return ans;
    }
};