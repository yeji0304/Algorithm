import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		int[] light = new int[N+1];
		
		
		st = new StringTokenizer(br.readLine());
		for(int i=1; i<=N; i++) {
			light[i] = Integer.parseInt(st.nextToken());
		}
		
		for(int i=0; i<M; i++) {
			st = new StringTokenizer(br.readLine());
			int n1 = Integer.parseInt(st.nextToken());
			int n2 = Integer.parseInt(st.nextToken());
			int n3 = Integer.parseInt(st.nextToken());
			
			if(n1 == 1) {
				light[n2] = n3;
			} else {
				for(int j=n2; j<=n3; j++) {
					if(n1 == 2) {
						if(light[j] == 0)
							light[j] = 1;
						else
							light[j] = 0;
					} else if (n1 == 3) {
						light[j] = 0;
					} else {
						light[j] = 1;
					}
				}
			}
		}
		for(int i=1; i<=N; i++)
			System.out.print(light[i] + " ");
	}
}
