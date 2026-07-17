class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i = 0; i<n ; i++){
            int l = 0 , r = image[i].size() - 1;
            while(l <= r){
                if(l == r){
                    // middle element ( odd length row)
                    image[i][l] = 1 - image[i][l];
                }else{
                    // swap + invert in one go
                    int temp = image[i][l];
                    image[i][l] = 1 - image[i][l];
                    image[i][l] = 1-image[i][r];
                    image[i][r] = 1 - temp;
                }
                l++;
                r--;
            }
        }
        return image;
    }
};
