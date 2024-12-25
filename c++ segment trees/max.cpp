#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

    void buildTree(vector<int> &nums, int start, int end, int node) {
        if (start == end) {
            tree[node] = nums[start];
            return;
        }

        int mid = start + (end - start) / 2;
        buildTree(nums, start, mid, 2 * node + 1);
        buildTree(nums, mid + 1, end, 2 * node + 2);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

    int maxQuery(int qi, int qj, int si, int sj, int node) {
        if (qi > sj || qj < si) {
            return INT_MIN; // No overlap
        }

        if (si >= qi && sj <= qj) {
            return tree[node]; // Complete overlap
        }

        int mid = si + (sj - si) / 2;
        int leftMax = maxQuery(qi, qj, si, mid, 2 * node + 1);
        int rightMax = maxQuery(qi, qj, mid + 1, sj, 2 * node + 2);

        return max(leftMax, rightMax);
    }

    void updateUtil(int idx, int value, int start, int end, int node) {
        if (start == end) {
            tree[node] = value;
            return;
        }

        if (idx < start || idx > end) return;

        int mid = start + (end - start) / 2;
        if (idx <= mid) {
            updateUtil(idx, value, start, mid, 2 * node + 1);
        } else {
            updateUtil(idx, value, mid + 1, end, 2 * node + 2);
        }

        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

public:
    SegmentTree(vector<int> &nums) {
        n = nums.size();
        tree.resize(4 * n, INT_MIN);
        buildTree(nums, 0, n - 1, 0);
    }

    void printTree() {
        for (int el : tree) {
            if (el != INT_MIN)
                cout << el << " ";
        }
        cout << endl;
    }

    int rangeQuery(int qi, int qj) {
        return maxQuery(qi, qj, 0, n - 1, 0);
    }

    void updateQuery(int idx, int value) {
        updateUtil(idx, value, 0, n - 1, 0);
    }
};

int main() {
    vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};
    SegmentTree st(nums);

    st.printTree();
    cout << st.rangeQuery(2, 5) << endl;
    cout << st.rangeQuery(5, 8) << endl;

    st.updateQuery(4, 5);
    cout << st.rangeQuery(0, 8) << endl;

    return 0;
}
