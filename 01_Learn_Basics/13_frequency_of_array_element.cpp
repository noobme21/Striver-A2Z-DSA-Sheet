/*
    #Frequencies of Limited Range Array Elements

    GfG :: https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
*/

void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int,int> m;
        for(int i=0;i<N;i++)
        m[arr[i]]++;
        arr.assign(N,0);
        for(int i=0;i<N;i++)
        {
            arr[i]=m[i+1];
        }
    }