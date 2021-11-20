
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x)
{

    if(x == 0 || x == 1)
        return x;

    long long int low = 0, high = x, ans = 1;

    while (low <= high){
        long long int mid = (low + high)/2;

        if (mid*mid == x)
            return mid;
        if (mid*mid < x){
            low = mid+1;
            ans = mid;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
}
