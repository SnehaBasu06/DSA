void nStarTriangle(int n) {
    // Write your code here.
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the triangle
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}
/*
Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/
