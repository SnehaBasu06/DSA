void symmetry(int n) {
    // Write your code here.
    for (int i = 1; i <= n; ++i) {
        // Print stars
        for (int j = 1; j <= i; ++j)
            cout << "* ";

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); ++j)
            cout << "  ";

        // Print stars again
        for (int j = 1; j <= i; ++j)
            cout << "* ";

        cout << endl;
    }

    // Lower triangle
    for (int i = n - 1; i >= 1; --i) {
        // Print stars
        for (int j = 1; j <= i; ++j)
            cout << "* ";

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); ++j)
            cout << "  ";

        // Print stars again
        for (int j = 1; j <= i; ++j)
            cout << "* ";

        cout << endl;
    }
}
/*
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *

*/
