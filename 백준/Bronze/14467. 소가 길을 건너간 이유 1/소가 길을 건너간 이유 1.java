import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		int[][] cow = new int[N][2];
		int cnt = 0;
		
		for(int i=0; i<N; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j=0; j<2; j++) {
				cow[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		Arrays.sort(cow, new Comparator<int[]>() {
			@Override
			public int compare(int[] o1, int[] o2) {
				return o1[0] - o2[0];
			}
		});
		
		for(int i=0; i<N; i++) {
			for(int j=i+1; j<N; j++) {
				if(cow[i][0] == cow[j][0]) {
					if(cow[i][1] != cow[j][1])
						cnt++;
				}
				break;
			}
		}
		System.out.println(cnt);
	}
}