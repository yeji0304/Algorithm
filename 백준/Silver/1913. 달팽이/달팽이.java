import java.util.*;
import java.io.*;

public class Main {
	
	static int[][] map;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int num = Integer.parseInt(br.readLine());
		int find_num = Integer.parseInt(br.readLine());
		
		snail(num);
		
		int x=0, y=0;
		for(int i=0; i<num; i++) {
			for(int j=0; j<num; j++) {
				if(find_num == map[i][j]) {
					y = i+1;
					x = j+1;
				}
				sb.append(map[i][j]+" ");
				}
			sb.append("\n");
			}
			sb.append(y+" "+x);
			System.out.println(sb.toString());
		}
	
	
	public static void snail(int n) {
		
		map= new int[n][n];
		int temp=0;
		int count = n*n;
		
		while(count>0) {
			
			for(int i=temp; i<n; i++) {
				map[i][temp] = count--;
			}
			
			for(int i=temp+1; i<n; i++) {
				map[n-1][i] = count--;
			}
			
			for(int i=n-2; i>=temp; i--) {
				map[i][n-1] = count--;
			}
			
			for(int i=n-2; i>temp; i--) {
				map[temp][i] = count--;
			}
		
		temp++;
		n--;
		}
	}
}