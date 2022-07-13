// You are given a positive integer ‘N’. Your task is to find and return its square root. If ‘N’ is not a perfect square, then return the floor value of sqrt(N).



int sqrtN(long long int N)
{
    // Write your code here.
    if(N==1 || N==0) return N;
    long long l=1,h=N/2;
    int ans=0;
    
    while(l<=h){
        long long mid=l+(h-l)/2;
        long long sqr=mid*mid;
        if(sqr==N) return mid;
        if(sqr<N){ 
            ans=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
     
     return ans;
}
