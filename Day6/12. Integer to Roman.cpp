class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int x=num;
        int n=0;
        while(x!=0){
            x/=10;
            n++;
        }
        while(n>0){
            int f=num;
            if(n>1)
                f=f/(pow(10,(n-1)));
            if(n==4){
                ans+=string(f,'M');
                num%=1000;
            }
            if(n==3){
                if(f==9)
                    ans+="CM";
                else if(f==4)
                    ans+="CD";
                else if(f<4)
                    ans+=string(f,'C');
                else if(f>=5){
                    ans+="D";
                    ans+=string(f-5,'C');
                }
                num%=100;
            }
            if(n==2){
                if(f==9)
                    ans+="XC";
                else if(f==4)
                    ans+="XL";
                else if(f<4)
                    ans+=string(f,'X');
                else if(f>=5){
                    ans+="L";
                    ans+=string(f-5,'X');
                }
                num%=10;
            }
            if(n==1){
                if(f==9)
                    ans+="IX";
                else if(f==4)
                    ans+="IV";
                else if(f<4)
                    ans+=string(f,'I');
                else if(f>=5){
                    ans+="V";
                    ans+=string(f-5,'I');
                }
                num%=10;
            }
            n--;
        }
        return ans;
    }
};