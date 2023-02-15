import java.util.*;
import java.io.*;

public class Main {

	static char[][] star;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		int num = (n-1) * 4 + 1;
		star = new char[num][num];
	
		for(int i=0; i<num; i++) {
			for(int j=0; j<num; j++) {
				star[i][j] = ' ';
			}
		}
		
		starStamp(0, num);
		
		for(int i=0; i<num; i++) {
			for(int j=0; j<num; j++) {
				System.out.print(star[i][j]);
			}
			System.out.println();
		}
	}
	
	
	public static void starStamp(int x, int num) {
		for(int i=x; i<num; i++) {
			star[x][i] = '*';
			star[num-1][i] = '*';
			star[i][x] = '*';
			star[i][num-1] = '*';
		}
		
		if(num == 1) {
			return;
		}
		
		starStamp(x+2, num-2);
	}
}