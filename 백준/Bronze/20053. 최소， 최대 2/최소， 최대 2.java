import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int T = Integer.parseInt(br.readLine());
		
		
		while(T != 0) {
			
			int N = Integer.parseInt(br.readLine());
			int[] num = new int[N];
			int max = 0, min = 0;
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int i=0; i<N; i++) {
				num[i] = Integer.parseInt(st.nextToken());
			}
			
			Arrays.sort(num);
			
			min = num[0];
			max = num[N-1];
			
			System.out.println(min + " " + max);
			T--;
		}
	}
}