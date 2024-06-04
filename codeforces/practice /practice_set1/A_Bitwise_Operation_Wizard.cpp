  #include<bits/stdc++.h>
  using namespace std;
  using ll =long long int;
  using ull=unsigned long long;
  int arr[]={3,2,1,4,0};
  char check(int a,int b,int c,int d){
     int firstnow=(arr[a]|arr[b]);
     int secondnow=(arr[c]|arr[d]);
    if(firstnow>secondnow){
      return '>';
    }else if(firstnow<secondnow){
      return '<';
    }else {
      return '=';
    }
  }
  void solve(){
    int n;cin>>n;int prev=0;
    for(int i=1;i<n;i++){
      //cout<<"? "<<prev<<" "<<prev<<" "<<i<<" "<<i<<endl;
      //fflush(stdout);
      //char sign;scanf("%c",&sign);
      char sign=check(prev,prev,i,i);
      if(sign=='<'){
        prev=i;
      }
      
    }
    vector<int>ind;
    int p1=0,p2=1;
    while(p2<n && p1<n){
   //   if(p1>=n || p2>=n){cout<<"Wrong answer"<<endl;return;}
     // char sign;
      //cout<<"? "<<p1<<" "<<prev<<" "<<p2<<" "<<prev<<endl;
      //fflush(stdout);
    //scanf("%c",&sign);
     char sign=check(p1,prev,p2,prev);
     cout<<sign<<endl;
      if(sign=='<'){
        ind.clear();
        ind.push_back(p2);
        p1++;
        if(p1==prev){}
      }else if(sign=='>'){
          ind.clear();
          ind.push_back(p1++);
          p2++;
      }else{
         ind.push_back(p2++);
      }
      
    }
    for(auto i:ind)cout<<i<<" ";cout<<endl;
    int newprev=ind[0];
    for(int i=1;i<ind.size();i++){
     // cout<<"? "<<newprev<<" "<<newprev<<" "<<ind[i]<<" "<<ind[i]<<endl;
     // fflush(stdout);
     // char sign;scanf("%c",&sign);
     char sign = check(newprev,newprev,ind[i],ind[i]);
      if(sign=='>'){
        newprev=ind[i];
      }
    
    }
    //fflush(stdout);
    cout<<"! "<<newprev<<" "<<prev<<endl;
     // fflush(stdout);


  return;
  }
  int main()
  {
  //std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
  int t;
  cin>>t;
  // t=1;
  while(t--)
  solve();
  return 0;
  }