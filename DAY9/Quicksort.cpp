class Solution {
public:
    int partition(vector<int>& a,int low ,int high) {
        int pivot=a[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(a[i]<=pivot&&i<=high-1)
            {
                i++;
            }
            while(a[j]>pivot&&j>=low+1)
            {
                j--;
            }
            if(i<j)
            {
                swap(a[i],a[j]);
            }
        }
        swap(a[low],a[j]);
        return j;
        
    }
    void quickSort(vector<int>& a,int low ,int high)
    {
        if(low<high)
        {
            int pi=partition(a,low,high);
            quickSort(a,low,pi-1);
            quickSort(a,pi+1,high);

        }
    }
    vector<int>sortArray(vector<int>& a) 
    {
        quickSort(a,0,a.size()-1);
        return a;
    }
};