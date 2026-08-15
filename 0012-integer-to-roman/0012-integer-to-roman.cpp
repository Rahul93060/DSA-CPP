class Solution {
public:
    string nu(int num) {
    if(num == 0) return "";
    
    if(num == 1) return "I";
    if(num == 2) return "II";
    if(num == 3) return "III";
    if(num == 4) return "IV";
    if(num == 5) return "V";
    if(num == 6) return "VI";
    if(num == 7) return "VII";
    if(num == 8) return "VIII";
    if(num == 9) return "IX";

    if(num == 10) return "X";
    if(num == 20) return "XX";
    if(num == 30) return "XXX";
    if(num == 40) return "XL";
    if(num == 50) return "L";
    if(num == 60) return "LX";
    if(num == 70) return "LXX";
    if(num == 80) return "LXXX";
    if(num == 90) return "XC";

    if(num == 100) return "C";
    if(num == 200) return "CC";
    if(num == 300) return "CCC";
    if(num == 400) return "CD";
    if(num == 500) return "D";
    if(num == 600) return "DC";
    if(num == 700) return "DCC";
    if(num == 800) return "DCCC";
    if(num == 900) return "CM";

    if(num == 1000) return "M";
    if(num == 2000) return "MM";
    if(num == 3000) return "MMM";

    return "";
}

    string intToRoman(int num) {
        int n=num;
        int thousands = (n / 1000) * 1000;
        int hundreds  = (n / 100) % 10 * 100;
        int tens      = (n / 10) % 10 * 10;
        int ones      = n % 10;

        string ans;
        ans+= nu(thousands) + nu(hundreds) + nu(tens) + nu(ones);
        return ans;


    }
};