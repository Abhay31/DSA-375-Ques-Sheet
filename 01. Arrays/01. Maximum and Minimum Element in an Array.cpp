class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int d = *max_element(A,A+N);
    	int e = *min_element(A,A+N);
    	return d+e;
    }
};
//GFG
