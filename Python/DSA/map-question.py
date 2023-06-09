# Given an array of integers, find two numbers that add up to a given target sum. 
# return the indices as tuple

from typing import List, Tuple

def findNumbers(nums: List[int], target: int) -> Tuple[int]:
    """
    returns the tuple of indices
    """
    hash = {} # my map i.e dictionary
    for index, x in enumerate(nums):
        complement = target-x
        if x in hash:
            return (hash[x], index)
        hash[complement] = index #  index of the element for which it is complement

    return None


if __name__=="__main__":
    nums = [1, 2, 3, 5, 6, 12, 9, 11]
    target = 9
    print(findNumbers(nums, target))




