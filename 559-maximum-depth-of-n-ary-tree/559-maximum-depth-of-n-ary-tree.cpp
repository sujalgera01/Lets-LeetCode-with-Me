class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        
        queue<pair<Node*, int>> q;
        q.push({root,1});
        int ans = 0;
        
        while(!q.empty()){
            Node* temp = q.front().first;
            int val = q.front().second;
            q.pop();
            ans = max(ans, val);
            
            for(auto x : temp->children){
                q.push({x,val+1});
            }
        }
        return ans;
    }
};
