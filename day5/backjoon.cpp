    #include <iostream>
    #include <vector>
    #include <queue>
    using namespace std;

    int main(){
        int T;
        cin>>T;

        int N,K,W;
        while(T--){
            cin >> N >> K;

            vector<vector<int>> A;
            vector<int> result;
            vector<int> dev;
            vector<int> indegree;

            A.resize(N+1);
            dev.resize(N+1);
            result.resize(N+1);
            indegree.resize(N+1);

            for(int j=1;j<=N;j++){
                cin>>dev[j];    
                result[j]=dev[j];
            }

            for(int j=1;j<=K;j++){
                int s,e;
                cin>>s>>e;
                A[s].push_back(e);
                indegree[e]++;
            }

            queue<int> Q;
            for(int j=1;j<=indegree.size()-1;j++)
                if(indegree[j] == 0) Q.push(j);
            
            while(!Q.empty()){
                int now = Q.front();
                Q.pop();
                for(int next : A[now]){
                    indegree[next]--;
                    result[next] = max(result[next], result[now]+dev[next]);
                    
                    if(indegree[next]==0)
                        Q.push(next);
                }
            }

            cin >> W;
            cout<<result[W]<<"\n";
        }
    }