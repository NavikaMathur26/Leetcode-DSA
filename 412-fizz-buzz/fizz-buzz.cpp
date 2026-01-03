class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str(n);
        int i=0;
        while(i<n){
            if((i+1)%3==0 && (i+1)%5==0)
               str[i]="FizzBuzz";
            else if((i+1)%3==0)
               str[i]="Fizz";
            else if((i+1)%5==0)
               str[i]="Buzz";
            else
               str[i]=to_string(i+1);
            i++;
        }
        return str;
    }
};