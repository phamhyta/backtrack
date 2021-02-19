void backtrack(int i,int n)
{
    if (i<=5)
        if (d[x]!=0) return;
        else d[x]++;
    if (isprime(x)) arr.insert(x);
    for (int j=0;j<n;j++)
        if (kt[j]==0)
        {
            x=x*10+a[j];kt[j]=1;
            backtrack(i+1,n);
            x=(x-a[j])/10;kt[j]=0;
        }
}
