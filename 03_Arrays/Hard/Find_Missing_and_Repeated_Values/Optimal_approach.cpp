class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        // Total numbers in the grid (1 to n^2)
        long long sum = (N * (N + 1)) / 2;
        long long squared_sum = (N * (N + 1) * ((2 * N) + 1)) / 6;
        // Actual sum and actual sum of squares from the grid
        long long matrix_sum = 0;
        long long matrix_squared_sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix_sum += grid[i][j];
                matrix_squared_sum += grid[i][j] * grid[i][j];
            }
        }
        // Difference: Missing - Repeated
        long long x_minus_y = sum - matrix_sum;
        // Difference of squares → Missing + Repeated
        long long x_plus_y = (squared_sum - matrix_squared_sum) / x_minus_y;
        // Solve the two equations
        long long x = (x_minus_y + x_plus_y) / 2; // Missing
        long long y = x_plus_y - x;               // Repeated
        // Return {Repeated, Missing}
        return {(int)y, (int)x};
    }
};
