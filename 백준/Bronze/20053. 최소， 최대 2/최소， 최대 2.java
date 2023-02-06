import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int T = Integer.parseInt(br.readLine());
		int num;
		
		while(T != 0) {
			
			int N = Integer.parseInt(br.readLine());
			int max = Integer.MIN_VALUE;
			int min = Integer.MAX_VALUE;
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int i=0; i<N; i++) {
				num = Integer.parseInt(st.nextToken());
				
				if(num > max) 
					max = num;
				if(num < min)
					min = num;
			}
			
			System.out.println(min + " " + max);
			T--;
		}
	}
}