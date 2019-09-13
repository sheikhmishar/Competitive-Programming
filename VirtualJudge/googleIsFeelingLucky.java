import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class googleIsFeelingLucky{
    public static void main(String[] args) throws java.lang.Exception{
        BufferedReader pagla = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(pagla.readLine());
        for(int count = 1; count <= T; count++){
            String webpage[] = new String [10];
            int rel[] = new int [10];
            for (int innerCount = 0; innerCount < webpage.length; innerCount++){
                webpage[innerCount] = pagla.readLine();
                rel[innerCount] = Integer.parseInt(pagla.readLine());
            }
            int max = rel[0];
            for(int maxCount = 1; maxCount <rel.length; maxCount++){
                if(rel[maxCount]>max)
                    max = rel[maxCount];
            }
            System.out.println("Case #:" + count);
            for(int innerCount = 0; innerCount < rel.length; innerCount++){
                if(rel[innerCount] == max)
                    System.out.println(webpage[innerCount]);
            }
        }
    }
}
/*
Google is one of the most famous Internet search engines which hosts and develops a number of Internet-
based services and products. On its search engine website, an interesting button `I'm feeling lucky'
attracts our eyes. This feature could allow the user skip the search result page and goes directly to the
rst ranked page. Amazing! It saves a lot of time.
The question is, when one types some keywords and presses `I'm feeling lucky' button, which web
page will appear? Google does a lot and comes up with excellent approaches to deal with it. In this
simplied problem, let us just consider that Google assigns every web page an integer-valued relevance.
The most related page will be chosen. If there is a tie, all the pages with the highest relevance are
possible to be chosen.
Your task is simple, given 10 web pages and their relevance. Just pick out all the possible candidates
which will be served to the user when `I'm feeling lucky'.
Input
The input contains multiple test cases. The number of test cases T is in the rst line of the input le.
For each test case, there are 10 lines, describing the web page and the relevance. Each line contains
a character string without any blank characters denoting the URL of this web page and an integer
Vi denoting the relevance of this web page. The length of the URL is between 1 and 100 inclusively.
(1  Vi  100)
Output
For each test case, output several lines which are the URLs of the web pages which are possible to be
chosen. The order of the URLs is the same as the input. Please look at the sample output for further
information of output format.
Sample Input
2
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10
Sample Output
Case #1:
www.alibaba.com
www.bad.com
acm.university.edu.cn
Case #2:
www.alibaba.com
*/