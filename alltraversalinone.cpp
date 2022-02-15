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
    vector<int> preinpostTraversal(TreeNode* root) {
    		stack<pair<TreeNode*,int>>s;
    		s.push(root,1);
    		vector<int>pre,in,post;
    		if (root==NULL) return ;
    		while(!s.empty()){
    			auto it = s.top();
    			s.pop();
    			// we will have three cases 1,2 and 3
    			// where 1 is for the pre order as it follows the rule of RO L R 
    			if(it.second==1){
    				pre.push_back(it.first->val);
    				it.second++;
    				s.push(it);
    				// we increment the num and then check if that noot had any left or noot
    				if(it.first->left!=NULL){
    					s.push({it.first->left,1});
    				}
    			}
    			// where 2 is for the in order as it follows the rule of L Ro R
    			else if(it.second==2){
    				in.push_back(it.first->val);
    				it.second++;
    				s.push(it);
    				if(it.first->right != NULL){
    					s.push({it.first->right,1});
    				}
    			}
    			else{
    				post.push_back(it.first->val);
    			}
    		}

    	}
    };