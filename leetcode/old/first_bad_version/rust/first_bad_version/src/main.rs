struct Solution;

impl Solution {
    pub fn isBadVersion(&self, n: i32) -> bool {
        return n == 4;
    }

    pub fn first_bad_version(&self, n: i32) -> i32 {
        let mut low = 1;
        let mut high = n;
        while high >= low {
            let mid = low + (high - low) / 2;

            match self.isBadVersion(mid) {
                true => high = mid - 1,
                false => low = mid + 1,
            }
        }
        low
    }
}

fn main() {
    Solution.first_bad_version(5);
}
