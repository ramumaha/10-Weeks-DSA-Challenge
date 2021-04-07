#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int ans;

bool binarySearch(int arr[], int l, int r, int n)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        // cout<<arr[mid]<<endl;

        if ( (mid - 1 >= 0) && (arr[mid-1] > arr[mid]))
        {
            ans++;
            if (ans > 1)
                return false;
        }

        return binarySearch(arr, l, mid - 1, n) && binarySearch(arr, mid + 1, r, n);
    }

    return true;
}

void solve(int arr[], int n)
{
    if (n == 1)
    {
        cout << "YES" << endl;
        cout << 0 << endl;
        return;
    }

    if (n == 2)
    {
        if (arr[0] <= arr[1])
        {
            cout << "YES" << endl;
            cout << 0 << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 1 << endl;
        }
        return;
    }

    ans = 0;
    if(arr[n-1] > arr[0])
        ans++;

    bool res = binarySearch(arr, 0, n - 1, n);
    if (res == false)
        cout << "NO" << endl;
    else {
        // cout << ans << endl;
        if(ans == 1 && arr[n-1] == arr[0]) {
            cout << "YES" << endl;
            cout << 1 << endl;
        }
        else if(ans <= 1 && arr[n-1] >= arr[0]) {
            cout << "YES" << endl;
            cout << 0 << endl;
        }
        else {
            cout << "YES" << endl;
            cout << 1 << endl;
        }
    }
}

signed main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        solve(arr, n);
    }
    return 0;
}
