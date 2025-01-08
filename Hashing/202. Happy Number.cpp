class Solution {
public:
    bool isHappy(int n) {
        set<int> usedNums;
        
        while(true) {
        int sum = 0;
        while(n!=0){
        sum+= (n%10) * (n%10);
        n = n/10;
       }
       if(sum==1) return true;
       
       if(usedNums.find(sum)!= usedNums.end()) return false;
    
    usedNums.insert(sum);

    n = sum;

    }
        
    }
};
