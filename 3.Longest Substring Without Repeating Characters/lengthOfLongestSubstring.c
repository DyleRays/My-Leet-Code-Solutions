//Question : Given a string, find the length of the longest substring without repeating characters.
//Example  : Given "abcabcbb", the answer is "abc", which the length is 3.
//           Given "bbbbb", the answer is "b", with the length of 1.
//           Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
//Updates  : 
//Tags     : Hash Table, Two Pointers, String
//Code by  : DyleRays
//Time     : 2016/06/03

int lengthOfLongestSubstring(char* s) 
{
    int maxLen = 0;
    int Len = 0;
    char* pTail;
    char* pHead;
    char* Temp;
    int i;
    pTail = s;
    pHead = s;
    Temp = pTail;
    
    while(*pHead != '\0')
    {
        for(i = 0; i < Len; i++)
        {
            if(*pHead == *(Temp+i))
            {
                if(Len > maxLen)
                {
                    maxLen = Len;
                }
                pTail = pTail + i + 1;
                Len = Len - i - 1;
                break;
            }
        }
        pHead += 1;
        Len += 1;
        Temp = pTail;
    }
    if(Len > maxLen)
    {
        maxLen = Len;
    }
    return maxLen;
}
