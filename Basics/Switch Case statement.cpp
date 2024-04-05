double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double area;
    switch(ch) {
        case 1:  // Circle
            area = M_PI * pow(a[0], 2); // Area = π * r^2
            break;
        case 2:  // Rectangle
            area = a[0] * a[1]; // Area = length * breadth
            break;
    }
    return area;
}
