import java.util.*;
import java.io.*;

public class Main {
	
	static int[][] map = new int[5][5];
	static int cnt_total;
	static int num;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		cnt_total = 0;
		num = 0;
		
		for(int i=0; i<5; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j=0; j<5; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		for(int i=0; i<5; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j=0; j<5; j++) {
				num++;
				Bingo(Integer.parseInt(st.nextToken()));
				Wid();
				Hei();
				Dia_right();
				Dia_left();

			    if(cnt_total >= 3) {
			    	System.out.println(num);
			    	return;
		    	}
                cnt_total = 0;
			}
		}
	}
	
	public static void Bingo(int n) {
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				if(map[i][j] == n) {
					map[i][j] = 0;
				}
			}
		}
	}
	
	public static void Wid() {
		for(int i=0; i<5; i++) {
			int count = 0;
			for(int j=0; j<5; j++) {
				if(map[i][j] == 0) 
					count++;	
			}
			if(count == 5) 
				cnt_total++;
		}
	}
	
	public static void Hei() {
		for(int i=0; i<5; i++) {
			int count = 0;
			for(int j=0; j<5; j++) {
				if(map[j][i] == 0) 
					count++;
			}
			if(count == 5) 
				cnt_total++;
		}
	}
	
	public static void Dia_right() {
		int count = 0;		
		for(int i=0; i<5; i++) {
			if(map[i][i] == 0) 
				count++;
		}
		if(count == 5) 
			cnt_total++;
	}
	
	public static void Dia_left() {
		int count = 0;		
		for(int i=0; i<5; i++) {
			if(map[i][4-i] == 0)
				count++;
		}
		if(count == 5) 
			cnt_total++;
	}
}