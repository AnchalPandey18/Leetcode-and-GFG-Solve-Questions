/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        if(!root){
            return result;
        }
        queue<TreeNode* > current;
        current.push(root);
        while(!current.empty()){
            int levelmax = INT_MIN;
            int levelsize = current.size();
            for(int i=0; i<levelsize; i++){
                TreeNode* node = current.front();
                current.pop();
                levelmax = max(levelmax,node->val);
                
                if(node->left){
                    current.push(node->left);
                }
                if(node->right){
                    current.push(node->right);
                }
            }
            result.push_back(levelmax);
        }
        return result;
    }
};