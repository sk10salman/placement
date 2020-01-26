#include <bits/stdc++.h>

using namespace std;
int fun(vector<vector<int>> arr, int l, int r, int ll, int rr) {
  int t = 0;
  for (int i = l; i < r; i++)
    for (int j = ll; j < rr; j++) {
      if (i != l + 1)
        t += arr[i][j];
    }
     t += arr[l+1][ll+1];
    return t;
}
// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
      int ho[16]={0};
         ho[0]=fun(arr,0,3,0,3);
         ho[1]=fun(arr,0,3,1,4);
         ho[2]=fun(arr,0,3,2,5);
         ho[3]=fun(arr,0,3,3,6);
         ho[4]=fun(arr,1,4,0,3);
         ho[5]=fun(arr,1,4,1,4);
         ho[6]=fun(arr,1,4,2,5);
         ho[7]=fun(arr,1,4,3,6);
         ho[8] = fun(arr, 2, 5, 0, 3);
         ho[9] = fun(arr, 2, 5, 1, 4);
         ho[10] = fun(arr, 2, 5, 2, 5);
         ho[11] = fun(arr, 2, 5, 3, 6);
         ho[12] = fun(arr, 3, 6, 0, 3);
         ho[13] = fun(arr, 3, 6, 1, 4);
         ho[14] = fun(arr, 3, 6, 2, 5);
         ho[15] = fun(arr, 3, 6, 3, 6);
         int t=0;
         for(int i=0;i<16;i++)
           if(t<ho[i])
              t=ho[i];
        return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

