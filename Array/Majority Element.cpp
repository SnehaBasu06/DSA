int majorityElement(vector<int> v) {
	// Write your code here
	sort(v.begin(),v.end());
	int start=0;
	int end=v.size()-1;
	int mid=start+(end-start)/2;
	return v[mid];
}
