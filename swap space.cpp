#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

int main() 
{
  int N, x, y;

  cout<< " Enter number of drives  "<<N;
  
  while (cin >> N)                       //entry exit point
  {
    vector<pair<int, pair<int, int> > > v; //exact iteration dont know so use vector insted of array //syntax 
                                           // vector <int> vec(5,111)--o/p=111 111 111 111 111
    for (int i = 0; i < N; i++)           //know end 
	{
      
  cout<< " Enter original file size ";
  cin >> x ;
	  
  cout<< " Enter Modified file size  ";
  cin>> y;
  
    v.push_back(make_pair((y>x) ? x : 2000000001-y, make_pair(x, y)));   // push back modifier push value in vector...  cplusplus.com 
	 //tb ---- to --2048000001024 gb 
	 
    }

    long long ret =0, cap = 0;
	                                  // (1.int,2.double,3.long,4.long double,5.double-long-double,6.long-long)
    sort(v.begin(), v.end());         
	                           //exact swap nantr sort krt.....5+5 gb vector start to end 
    
	for (int i = 0; i < v.size(); i++)      //use to return size()...
	                     // vector chi size ghenar iteration count krayla 
		{
			
      if (cap < v[i].second.first)                              //cap = capacity second. (1iteration 5 gb + 2nd iterartion 5gb =10gb capacity )
	   {
        ret += v[i].second.first - cap;
        
        cap = v[i].second.first;
      }
      cap += v[i].second.second - v[i].second.first;             //2nd disc vrti data swap jala 
    }

    cout <<  " Swap Space " << ret << endl;
    
  }
//cout <<  " Enter valid entries  " <<  endl;
}														// code by roll no-06-,07,08,09
