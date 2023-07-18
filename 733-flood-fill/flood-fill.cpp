class Solution {
public:
    void bfs(int sr,int sc,vector<vector<int>> &image,int color){
        int row=image.size();
        int col=image[0].size();
        int m=image[sr][sc];
        unordered_map<int,map<int,int>> v;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            v[r][c]=1;
            image[r][c]=color;
            q.pop();
            if(r+1<row){
                if(image[r+1][c]==m&&v[r+1][c]!=1){
                    v[r+1][c]=1;
                    q.push({r+1,c});
                }
            }
             if(c+1<col){
                if(image[r][c+1]==m&&v[r][c+1]!=1){
                    v[r][c+1]=1;
                    q.push({r,c+1});
                }
            }
             if(r-1>=0){
                if(image[r-1][c]==m&&v[r-1][c]!=1){
                    v[r-1][c]=1;
                    q.push({r-1,c});
                }
            }
             if(c-1>=0){
                if(image[r][c-1]==m&&v[r][c-1]!=1){
                    v[r][c-1]=1;
                    
                    q.push({r,c-1});
                }
            }

        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        bfs(sr,sc,image,color);
        return image;
    }
};