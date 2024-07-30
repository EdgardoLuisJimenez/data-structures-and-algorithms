class StringUtil{
    public:
        bool isPalindrome(string s) {
            std::transform(s.begin(), s.end(), s.begin(), ::tolower);
            s.erase(std::remove_if(s.begin(), s.end(), [](char c) {return !std::isalnum(c);}), s.end());
            int inicio = 0, fin = s.length() - 1;
            for (inicio; inicio < fin; inicio++) {
                if (s[inicio] != s[fin]) {
                    std::cout << s[inicio] << s[fin] << endl;
                    return false;
                }
                fin--;
            }
            return true;
        }
};
int main() {

    return 0;
}
