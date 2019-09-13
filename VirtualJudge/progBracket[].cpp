import java.util.*;
public class progBracket[] {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int j = 1; j <= n; j++) {
            String str = in.next();
            System.out.println(isBalance(str));
        }
    }
    public static String isBalance(String str) {
        char a, h, l;
        char[] ch = str.toCharArray();
        Stack<Character> stack = new Stack<Character>();
        for (int i = 0; i < ch.length; i++) {
            if (ch[i] == '(' || ch[i] == '[' || ch[i] == '{') {
                stack.push(ch[i]);
            } else {
                if (stack.empty()) {
                    stack.push('{');
                    break;
                } else {
                    char c = (char) stack.pop();
                    if ((c == '(' && ch[i] != ')') || (c == '[' && ch[i] != ']') || (c == '{' && ch[i] != '}')) {
                        return "NO";
                    }
                }
            }
        }
        if (stack.isEmpty()) {
            return "YES";
        } else {
            return "NO";
        }

    }
}