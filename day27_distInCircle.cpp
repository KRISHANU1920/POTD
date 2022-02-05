// Question : https://www.interviewbit.com/problems/distribute-in-circle/

int Solution::solve(int A, int B, int C) {
    return ((A%B) + (C%B)) % B - 1;
}

/*

Time Complexity: O(1)
Space Complexity: O(1)

*/