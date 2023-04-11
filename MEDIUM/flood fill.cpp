//https://leetcode.com/problems/flood-fill/description/
//Flood Fill
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {         
        int clr=image[sr][sc];
        if (clr==newColor) return image;
        dfs(&image,sr,sc,newColor,clr);
        return image;
    }

private:
    void dfs(vector<vector<int>> *image, int r, int c, int newColor, int clr) {
        static const vector<pair<int, int>> direct{{-1,  0}, { 1,  0},{ 0,  1}, { 0, -1}};
        if (r<0 || r>=image->size() || c<0 || c>=(*image)[0].size() || (*image)[r][c]!=clr) {
            return;
        }
        (*image)[r][c]=newColor;
        for (const auto& d : direct) {
            dfs(image,r+d.first,c+d.second,newColor,clr);
        }
    }
};