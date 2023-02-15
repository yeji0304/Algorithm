import java.util.*;
import java.io.*;

public class Main {
	
	static int n;
	static int[] bright;
	static int student_num;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());
		bright = new int[n+1];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		for(int i=1; i<bright.length; i++) {
			bright[i] = Integer.parseInt(st.nextToken());
		}

		student_num = Integer.parseInt(br.readLine());
		
		for(int i=0; i<student_num; i++) {
			st = new StringTokenizer(br.readLine());
			
			int gender = Integer.parseInt(st.nextToken());
			
			if(gender == 1) {
				Male(Integer.parseInt(st.nextToken()));
			} else if (gender == 2) {
				Female(Integer.parseInt(st.nextToken()));
			}
		}
		
		for(int i=1; i<bright.length; i++) {
			System.out.print(bright[i] + " ");
			if(i%20 == 0)
				System.out.println();
		}
	}
	
	static void Male(int x) {
		int num = x;
		
		while(num < bright.length) {
			if(bright[num] == 0)
				bright[num] = 1;
			else if(bright[num] == 1) 
				bright[num] = 0;
			num += x;
		}
	}
	
	static void Female(int x) {
		if(bright[x] == 0) 
			bright[x] = 1;
		else if(bright[x] == 1)
			bright[x] = 0;
		
		int cnt = 1;
		while((x-cnt) > 0 && (x+cnt) < bright.length) {
			if(bright[x+cnt] == bright[x-cnt]) {
				if(bright[x+cnt] == 0) {
					bright[x+cnt] = 1;
					bright[x-cnt] = 1;
				} else if(bright[x+cnt] == 1) {
					bright[x+cnt] = 0;
					bright[x-cnt] = 0;
				}
				cnt++;
			} else {
				break;
			}
		}
	}
}