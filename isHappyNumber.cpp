unordered_set<int> check;
bool isHappy(int n) {
    string tmp = to_string(n);     //注意此用法
    int count = 0;
    for(char each:tmp){            //注意此用法
        count += (each-48)*(each-48);
    }
    if(check.count(count) == 0)
        check.insert(count);
    else
        return false;
    return count==1 ? true : isHappy(count);
}

