class Solution
{
    //tc-> O(n*m)
    //sc-> O(1)
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            bool rowFlag = false, colFlag = false;

            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        if (i == 0) rowFlag = true;
                        if (j == 0) colFlag = true;
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
            for (int i = 1; i < matrix.size(); i++)
            {
                if (matrix[i][0] == 0)
                {
                    fill(matrix[i].begin(), matrix[i].end(), 0);
                }
            }
            for (int i = 1; i < matrix[0].size(); i++)
            {

                if (matrix[0][i] == 0)
                {
                    for (int k = 0; k < matrix.size(); k++)
                    {
                        matrix[k][i] = 0;
                    }
                }
            }
            if (rowFlag)
            {
                fill(matrix[0].begin(), matrix[0].end(), 0);
            }
            if (colFlag)
            {
                for (int k = 0; k < matrix.size(); k++)
                {
                    matrix[k][0] = 0;
                }
            }
        }
};
// ----------------------------------------------------------------
class Solution
    {
   	//tc-> O(m*n)
   	//sc-> O(m*n)
        public:
            void setZeroes(vector<vector < int>> &matrix)
            {
                vector<int> row(matrix.size(), 0);
                vector<int> col(matrix[0].size(), 0);
                for (int i = 0; i < matrix.size(); i++)
                {
                    for (int j = 0; j < matrix[0].size(); j++)
                    {
                        if (matrix[i][j] == 0)
                        {
                            row[i] = 1;
                            col[j] = 1;
                        }
                    }
                }

                for (int i = 0; i < matrix.size(); i++)
                {
                    if (row[i] == 1)
                    {
                        fill(matrix[i].begin(), matrix[i].end(), 0);
                    }
                }
                for (int i = 0; i < matrix[0].size(); i++)
                {
                    if (col[i] == 1)
                    {
                        for (int k = 0; k < matrix.size(); k++)
                        {
                            matrix[k][i] = 0;
                        }
                    }
                }
            }
    };
    
