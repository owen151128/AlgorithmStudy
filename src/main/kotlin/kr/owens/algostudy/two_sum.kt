package kr.owens.algostudy

/**
 * @author owen151128@gmail.com
 *
 * Created by owen151128 on 2021/10/12 21:03
 *
 * Providing features related to two_sum class
 */

fun twoSum(nums: IntArray, target: Int): IntArray {
    for (i in nums.indices) {
        for (j in i + 1 until nums.size) {
            if (nums[i] + nums[j] == target) {
                return intArrayOf(i, j)
            }
        }
    }

    return intArrayOf(-1)
}

fun main() {
    var nums = intArrayOf(2, 7, 11, 15)
    var target = 9

    println(twoSum(nums, target).contentToString())

    nums = intArrayOf(3, 2, 4)
    target = 6

    println(twoSum(nums, target).contentToString())

    nums = intArrayOf(3, 3)
    target = 6

    println(twoSum(nums, target).contentToString())
}