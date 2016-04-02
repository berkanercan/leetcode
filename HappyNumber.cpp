class Solution {
public:
    int sumOfSquares(int n){
        int sum = 0;
        while(n != 0){
            sum += pow(n%10,2);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n){
        std::map<int, int> numbers;
        while( numbers[n] != 1 && n != 1 ){
            numbers[n] = 1;
            n = sumOfSquares(n);    
            
        }
        if(numbers[n] == 1)
            return false;
        if(n == 1)
            return true;
    }
};
