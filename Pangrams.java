import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'pangrams' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String pangrams(String s) {
    // Write your code here
    int[] arr= new int[26];
    int flag=1;
    for(int i=0;i<s.length();i++)
    {
        if(s.charAt(i)>='a' && s.charAt(i)<='z')
        arr[s.charAt(i)-97]++;
        else if(s.charAt(i)>='A' && s.charAt(i)<='Z')
        arr[s.charAt(i)-65]++;
    }
    for(int i = 0;i<arr.length;i++)
    {
        if(arr[i]==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    return "not pangram";
    else
    return "pangram";
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.pangrams(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}

