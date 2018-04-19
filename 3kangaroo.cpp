#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int furthest = 0;
    
    if (x1 == x2)
    {
        cout << "first if";
        return "YES";
    }
    
    else if (x1 > x2 && (v1 > v2 || v1 == v2))
        return "NO";
    
    else if (x2 > x1 && (v2 > v1 || v1 == v2))
        return "NO";
    
    else if (x1 > x2)
    {
        furthest = x1;
        while (furthest == x1)
        {
            x1 = x1 + v1;
            x2 = x2 + v2;
            furthest = x1;
            
            if (x1 == x2)
            {
                cout << "second if 1";
                return "YES";
            }
            
            if (x2 > x1)
                furthest = x2;
        }
        
        return "NO";
    }
    
    else if (x2 > x1)
    {
        furthest = x2;
        while (furthest == x2)
        {
            x1 = x1 + v1;
            x2 = x2 + v2;
            furthest = x2;
            
            if (x1 == x2)
            {
                return "YES";
                
            }
                
            
            if (x1 > x2)
                furthest = x1;
        }
        
        return "NO";
    }
            
    return "ERROR";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
