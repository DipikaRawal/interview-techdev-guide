// to find the kth digit 
public:
    int kthDigit(int A,int B,int K){
        // code here
        int rem=0,result=0;
        long long int p=0;
        p=pow(A,B);
        while(K!=0)
        {
            rem=p%10;
            result=rem;
            p=p/10;
            K--;
        }
        return result;
    }
};
