//果然观察问题时一件很重要的事情
//只有在n这个树本身后面带零的情况下才会尾随零，而尾随零的数目本身也会因n而改变
//——————————————————阶乘和n次方完全是不同的东西啦————————————————————
class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        while(n!=0){
            res+=n/5;
            n=n/5;
        }
        return res;
    }
    
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);
        
        int ret = Solution().trailingZeroes(n);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}

//我必须承认还有不少的路要走
//从什么时候开始走偏的呢。。。。大概是看到时间限制是log10的时候下意识的用n=n／10来进行循环
//另外准备考虑尾数为其他数的情况，后来发现这是几乎不可能的因为也只有5和10有这种互相关联的特性