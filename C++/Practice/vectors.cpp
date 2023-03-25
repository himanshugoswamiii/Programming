class Solution {
public:
    
    int findrow(vector<vector<int>> matrix, int target, int i){
        e = matrix[0].size()-1;
        if (target >= matrix[i][0] && target =< matrix[i][e]){
            return i;
        }
        else if (target > matrix[i][0]){
            i = (i + e)/2;
            return findrow(matrix, target, i);
        }
        else {
            return findrow(matrix, target, (0 + i)/2);
        }
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = matrix.size()-1;
        start = 0;
        end = matrix[0].size() - 1;
        
        // Base case: element doesn't exist
        if (target < matrix[0][0] || target > matrix[s][end]){
            return false;
        }
        // Find the row to which the element can belong
        int row = findrow(matrix, target, s/2);
        
        while(start <= end){
            int mid = (start + end) /2;
            
            if (matrix[row][mid] == target){
                return true;
            }
            else if (matrix[row][mid] < target ){
                start = mid + 1;
            }
            else {
                end = mid -1;
            }
        }
        return false;
};
