class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s=s.strip()
        s=s[::-1]
        if(s.count(' ')==0):
            return len(s)
        for i in range(0,len(s)):
            if(s[i]==' '):
                return i