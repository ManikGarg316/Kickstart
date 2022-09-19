#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int CASE=1;CASE<=T;CASE++)
    {
        int A, B;
        cin >> A;
        cin >> B;
        A++;
        int N;
        cin >> N;
        string s;
        while(true)
        {
            int mid = (A+B)/2;
            cout << mid << endl;
            cin >> s;
            if(s == "CORRECT")
            {
                break;   
            }
            else if(s == "TOO_SMALL")
            {
                A = mid+1;
            }
            else
            {
                B = mid-1;
            }
        }
    }
    return 0;
}