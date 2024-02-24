class Solution(object):
    def flipAndInvertImage(self, image):
        """
        :type image: List[List[int]]
        :rtype: List[List[int]]
        """
        r=len(image)
        c=len(image[0])
        rm=[[""]*c]*r
        #reverse the row and store it to a new list
        for i in range(0,r):
            rm[i]=(image[i])[::-1]
        for row in range(0,r):
            for column in range(0,c):
                if rm[row][column]==0:
                    rm[row][column]=1
                else:
                    rm[row][column]=0
        return rm