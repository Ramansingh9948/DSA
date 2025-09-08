#include<iostream>
#include<vector>


using namespace std;


vector<int> PrefixSum(vector<int>& arr ) {
    vector<int> prefix(arr.size());
    prefix[0]= 0;
    for(int i =1; i<= arr.size(); i++) {
        prefix[i]= prefix[i-1]+ arr[i-1];
    }
    return prefix;

}

vector<int> PostSum(vector<int>& arr ) {
    vector<int> Post(arr.size()+1);
    Post[Post.size()-1]= 0;
    for(int i =arr.size()-1; i>=0; i--) {
        Post[i]= Post[i+1]+ arr[i];
    }
    return Post;
}

int main() {
    
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the array Elements" <<endl;
    for (size_t i = 0; i < n; i++)
    {
        int y;
        cout<<"Enter Element "<<i<<": ";
        cin>>y;
        arr.push_back(y);
    }

     vector<int> array = PrefixSum(arr);
    vector<int> post = PostSum(arr);


        for (size_t i = 1; i < n+1; i++)
    {
        
        cout<<array[i]<<" ";

    }
cout<<endl;
        for (size_t i = 0; i < n+1; i++)
    {
        
        cout<<post[i]<<" ";

    }
    
    
}