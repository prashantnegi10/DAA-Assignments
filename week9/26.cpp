Given a knapsack of maximum capacity w. N items are provided, each having its own value and weight. You have to Design an algorithm and implement it using a program to find the list of the selected items such that the final selected content has weight w and has maximum value. You can take fractions of items,i.e. the items can be broken into smaller pieces so that you have to carry only a fraction xi of item i, where 0 ≤xi≤ 1.
 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<double> items(n);
    vector<double> val(n);
    vector<vector<double>> job;//to store pair of
    for(int i=0;i<n;i++){
        cin>>items[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
        job.push_back({val[i]/items[i],items[i],i+1});
    }
    double k;
    cin>>k;
    sort(job.rbegin(), job.rend());//sort acc to val per wt
    vector<pair<double,double>> ls;
    float profit =0;
    for(int i=0;i<n;i++)
    {
        if(job[i][1] >= k)
        {
            profit += k*job[i][0];
            ls.push_back(make_pair(k, job[i][2]));
            break;
        }
        else
        {
            profit += job[i][1]*job[i][0];
        }
        ls.push_back(make_pair(job[i][1], job[i][2]));
        k = k - job[i][1];
    }
    cout<<"Maximum Value is: "<<profit<<endl;
    cout<<"Item - Weight"<<endl;
    for(auto it: ls)
        cout<<it.first<<" - "<<it.second<<endl;
    return 0;
}
 

