int roman(char x) {
    int num = 0;
    if (x == 'I') {
        num = 1;
    }
    else if (x == 'V') {
        num = 5;
    }
    else if (x == 'X') {
        num = 10;
    }
    else if (x == 'L') {
        num = 50;
    }
    else if (x == 'C') {
        num = 100;
    }
    else if (x == 'D') {
        num = 500;
    }
    else if (x == 'M') {
        num = 1000;
    }
    return num;
}
int roman2int(char* s) {
    int ans = 0, i = 0;
    while (s[i]) {
        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
            ans += (roman(s[i + 1]) - roman(s[i]));
            i += 2;
        }
        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
            ans += (roman(s[i + 1]) - roman(s[i]));
            i += 2;
        }
        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
            ans += (roman(s[i + 1]) - roman(s[i]));
            i += 2;
        }
        else {
            ans += roman(s[i]);
            i += 1;
        }
    }
    return ans;
}
