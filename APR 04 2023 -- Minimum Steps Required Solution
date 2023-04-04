int minSteps(string str) {
    // Write your code here
    int a = 0 , b = 0;
    for(int i = 0; i<str.size(); i++){
        while(i<str.size()-1 && str[i] == str[i+1]){
            i++;
        }
        if(str[i] == 'a')a++;
        else b++;
    }
    return min(a,b)+1;
}
