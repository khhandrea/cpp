#include <iostream>
#include <vector>
#include <set>
using std::vector, std::set;

int solution(vector<int> nums)
{
    int answer;
    set<int> pokemons;

    for (int num: nums) {
        pokemons.insert(num);
    }
    answer = pokemons.size();
    if (answer > nums.size() / 2) {
        answer = nums.size() / 2;
    }

    return answer;
}

int main() {
    vector<int> nums = {3, 3, 3, 2, 2, 2};
    std::cout << solution(nums) << '\n';
    return 0;
}