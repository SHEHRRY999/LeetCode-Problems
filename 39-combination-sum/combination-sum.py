class Solution:
    def combinationSum(self, candidates, target):
        ans = []
        unique = set()
        combination = []

        def solve(idx, target):
            if target == 0:
                key = tuple(combination)
                if key not in unique:
                    unique.add(key)
                    ans.append(combination[:])
                return
            if target < 0 or idx == len(candidates):
                return

            combination.append(candidates[idx])
            solve(idx + 1, target - candidates[idx])
            solve(idx, target - candidates[idx])
            combination.pop()
            solve(idx + 1, target)

        solve(0, target)
        return ans