bool isSubsequence(char* s, char* t) {
    int sPointer = 0; // string s position
    int sLength = strlen(s);
    int tLength = strlen(t);
    // Always want to move the secondPointer because we want to see which letters match. 
    for (int tPointer = 0; tPointer < tLength; tPointer++) {
        // tPointer reads through every character in t
        // If character in S = character at T, then move to the next s character (sPointer).
        if (s[sPointer] == t[tPointer]) {
            sPointer++;
        }
    }
    if (sPointer == sLength) {
        return true;
    } else {
        return false;
    }
}