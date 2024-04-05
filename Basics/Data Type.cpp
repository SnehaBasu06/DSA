int dataTypes(string type) {
	// Write your code here
	int res;
	if(type=="Integer"){
		res = sizeof(int);
	}
	else if (type=="Long"){
		res = sizeof(long);
	}
	else if (type=="Float"){
		res = sizeof(float);
	}
	else if (type=="Double"){
		res = sizeof(double);
	}
	else if (type=="Character"){
		res = sizeof(char);
	}
	return res;
}
