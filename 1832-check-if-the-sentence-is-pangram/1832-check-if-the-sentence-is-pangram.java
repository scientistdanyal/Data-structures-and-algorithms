class Solution {
    public boolean checkIfPangram(String sentence) {
        
    
        boolean [] letters = new boolean[26];
        
        for(int i=0; i<sentence.length(); i++) {
            char c = sentence.charAt(i);
            if(c >= 'a' && c <= 'z') {
                letters[c-'a'] = true;
            }
        }
        
        
        for(boolean present: letters) {
            if(!present) {
                return false;
            }
        }
       return true; 
    }
}