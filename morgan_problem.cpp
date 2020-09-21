#include <bits/stdc++.h>

using namespace std;

// Complete the morganAndString function below.
string morganAndString(string a,int size_a, string b,int size_b) {
    string result;
    int i=0; // for a
    int j=0; // for b
    while((i<=size_a)&&(j<=size_b)){
        if( (int(a[i])) <= (int(b[j])) ) {
                result+=a[i];
                 i++;
        }else{
                result+=b[j]; 
                j++;
        }
    }
    //add a
    for(i;i<=size_a;i++) 
        result+=a[i];
    // add b
    for(j;j<=size_b;j++)  
        result+=b[j];
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string a;
        getline(cin, a);
        string b;
        getline(cin, b);
        string result = morganAndString(a,a.length(),b,b.length());
        fout << result << "\n";
    }
    fout.close();
    return 0;
}

