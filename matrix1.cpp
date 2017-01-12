#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


long long int row5;
vector<long long int>  nextrow1(long long int finalrow ,long long int presentrow,vector<long long int> array);

int main()
{
	
	long long int column;
	long long int finalrow;

	std::cin >> column >> finalrow;

	//cout << column;
	vector<long long int> firstRow;

	for (int i = 0; i < column;i++)
	{
		int g = 0;
		cin >> g ;
		firstRow.push_back(g);
	}
	// for (int j = 0; j < firstRow.size(); ++j)
	// {
	// 	cout << firstRow.at(j) << " ";
	// }
	// cout << " " << endl;

	int row3=0;

	vector<long long int> answer;

	answer = nextrow1(finalrow,1,firstRow);
	
	for (int i = 0; i < answer.size(); ++i)
	{
		std::cout << answer.at(i) << " ";
	}
	
	return 0;
}



vector<long long int > nextrow1(long long int finalrow,long long int presentrow, vector<long long int> row1){

	// for (int k = 0; k < row1.size(); ++k)
	// {
	// 	cout << row1.at(k) << " ";
	// }
	// cout << " " << endl;
	cout << presentrow << " " << endl;
	if(presentrow==finalrow){

		return row1;
	}
	else{
		
		presentrow=presentrow+1;
		//cout << presentrow <<" " << finalrow << " " << endl;

		std::vector<long long int> o;

		long long int length = row1.size();
		// for (int k = 0; k < row1.size(); ++k)
		// {
		// 	cout << row1.at(k) << " ";
		// }
		// cout << " " << endl;

		for (long long int i = 0; i < length-1; ++i)
		{
			o.push_back(row1.at(i)^row1.at(i+1));
			//cout << o.at(i) << " ";
		}


		o.push_back(row1.at(length-1)^row1.at(0));
		//cout << o.at(length-1) ;

		// for (int z = 0; z < o.size(); ++z)
		// {
		// 	cout << o.at(z) << " ";
		// }
		// cout << " " << endl;
		

		return nextrow1(finalrow,presentrow,o);
	}

}