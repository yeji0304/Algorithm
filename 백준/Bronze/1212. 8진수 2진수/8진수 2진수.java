import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		String s = br.readLine();
		
		for(int i=0; i<s.length(); i++) {
			int temp = s.charAt(i) - '0';
			
			String s_binary = Integer.toBinaryString(temp);
			
			if(s_binary.length() == 1 && i != 0) {
				s_binary = "00" + s_binary; 
			} else if (s_binary.length() == 2 && i != 0) {
				s_binary = "0" + s_binary;
			}
			sb.append(s_binary);
		}
		System.out.println(sb.toString());
	}
}
