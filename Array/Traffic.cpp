int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int left=0;
	int max_ones=0;
	int flipped=0;
	for(int i=0;i<n;i++){
		if(vehicle[i]==0){
			flipped++;
		}
		while(flipped>m){
			if(vehicle[left]==0){
				flipped--;
			}
			left++;
		}
		max_ones=max(max_ones,i-left+1);
	}
	return max_ones;
}
