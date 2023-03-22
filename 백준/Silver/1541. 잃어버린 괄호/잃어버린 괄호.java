import java.util.*;
import java.io.*;


public class Main {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer subst = new StringTokenizer(br.readLine(), "-");
		
		int result = Integer.MAX_VALUE;
		
		while(subst.hasMoreTokens()) {
			int temp = 0;
			
			StringTokenizer addst = new StringTokenizer(subst.nextToken(), "+");
			
			while(addst.hasMoreTokens()) {
				temp += Integer.parseInt(addst.nextToken());
			}
			
			if(result == Integer.MAX_VALUE) {
				result = temp;
			} else {
				result -= temp;
			}
		}
		System.out.println(result);
	}
}