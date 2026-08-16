class Solution {
    public int compress(char[] chars) {
        char element;
        int read = 0;
        int write = 0;
        int n = chars.length;
        int count;
        while(read < n){
            element = chars [read];
            count = 0;
            while(read < n && chars [read] == element){
                read++;
                count++;
            }
            chars [write] = element;
            write++;
            if (count > 1){
                String strcount = String.valueOf(count);
                for(int i = 0; i < strcount.length(); i++){
                    chars [write] = strcount.charAt(i);
                    write++;
                }
            }
        }
        return write;
    }
}