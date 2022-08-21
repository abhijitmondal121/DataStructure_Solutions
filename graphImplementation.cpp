#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
  public:
  unordered_map<int,list<int>>adj;
  
  void addEdge(int u,int v,bool d){
        adj[u].push_back(v);
        if(d==0)adj[v].push_back(u);
  }
  
  void print(){
      for(auto i:adj){
          cout<<i.first<<" -> ";
          for(auto j:i.second){
              cout<<j<<" ,";
          }
          cout<<endl;
      }
  }
  
};


int main()
{
    int n,m;
    cout<<"Enter the number of edges : "<<endl;
    cin>>n;
    cout<<"Enter the number of vartices : "<<endl;
    cin>>m;
    
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    
    g.print();
    
    
    

    return 0;
}


// output entry

// 5
// Enter the number of vartices : 
// 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4
// 4 -> 3 ,0 ,
// 3 -> 2 ,1 ,4 ,
// 2 -> 1 ,3 ,
// 1 -> 0 ,2 ,3 ,
// 0 -> 1 ,4 ,