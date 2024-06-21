class Solution {
  public:
    string compareFrac(string str) {
         string str1, str2, str3, str4;
        
        int i=0;
        
        while(str[i] != '/') { str1 += str[i++]; } i++;
        
        while(str[i] != ',') { str2 += str[i++]; } i = i+2;
        
        while(str[i] != '/') { str3 += str[i++]; } i++;
        
        while(str[i] != '\0') { str4 += str[i++]; }
        
        double num1 = stod(str1) / stod(str2);
        double num2 = stod(str3) / stod(str4);
        
        if(num1 > num2) return str1+'/'+str2;
        else if(num2 > num1) return str3+'/'+str4;
        else return "equal";
        
    }
};
