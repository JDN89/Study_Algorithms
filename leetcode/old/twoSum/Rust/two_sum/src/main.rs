use std::collections::HashMap;

pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut result = Vec::new();
    let mut my_map: HashMap<i32, i32> = HashMap::new();

    for (index, num) in nums.iter().enumerate() {
        let temp = target - num;
        if let Some(value) = my_map.get(&temp) {
            result.push(*value);
            result.push(index.try_into().unwrap());
        } else {
            my_map.insert(*num, index.try_into().unwrap());
        }
    }

    result
}

fn main() {
    let nums = vec![2, 7, 11, 15];
    let target = 9;
    two_sum(nums, target);

    println!("Hello, world!");
}

#[cfg(test)]
mod tests {

    use super::*;
    #[test]
    fn two_sum_test() {
        let nums = vec![2, 7, 11, 15];
        let target = 9;
        let result = vec![0, 1];
        assert_eq!(result, two_sum(nums, target));
    }
}
