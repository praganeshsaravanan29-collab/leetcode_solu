class Solution:
    def longestRepeating(self, s: str, queryCharacters: str, queryIndices: list[int]) -> list[int]:
        n = len(s)

    
        tree = [None] * (4 * n)

        def merge(a, b):
            lc, rc, lp, ls, lb, llen = a
            lc2, rc2, rp, rs, rb, rlen = b

            pref = lp
            suff = rs
            best = max(lb, rb)

            if rc == lc2:
                
                if lp == llen:
                    pref = llen + rp

                
                if rs == rlen:
                    suff = ls + rlen

             
                best = max(best, ls + rp)

            return [
                lc,
                rc2,
                pref,
                suff,
                best,
                llen + rlen
            ]

        def build(node, l, r):
            if l == r:
                tree[node] = [s[l], s[l], 1, 1, 1, 1]
                return

            mid = (l + r) // 2

            build(node * 2, l, mid)
            build(node * 2 + 1, mid + 1, r)

            tree[node] = merge(tree[node * 2], tree[node * 2 + 1])

        def update(node, l, r, idx, ch):
            if l == r:
                tree[node] = [ch, ch, 1, 1, 1, 1]
                return

            mid = (l + r) // 2

            if idx <= mid:
                update(node * 2, l, mid, idx, ch)
            else:
                update(node * 2 + 1, mid + 1, r, idx, ch)

            tree[node] = merge(tree[node * 2], tree[node * 2 + 1])

        build(1, 0, n - 1)

        ans = []

        for ch, idx in zip(queryCharacters, queryIndices):
            update(1, 0, n - 1, idx, ch)
            ans.append(tree[1][4])

        return ans