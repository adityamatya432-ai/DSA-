class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        st = set()

        for x in friends:
            st.add(x)

        ans = []
        for y in order:
            if y in st:
                ans.append(y)

        return ans