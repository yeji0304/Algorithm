import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		int[] asset = new int[14];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		for(int i=0; i<14; i++) {
			asset[i] = Integer.parseInt(st.nextToken());
		}
		
		int a = BNP(asset, N);
		int b = TIMING(asset, N);

		if(a<b) {
			System.out.println("TIMING");
		} else if(a==b) {
			System.out.println("SAMESAME");
		} else {
			System.out.println("BNP");
		}
	}
	
	static int BNP(int[] arr, int num) {
		
		int count = 0;
		int total = num;
		
		for(int i=0; i<14; i++) {
			
			if(arr[i] <= total) {
				count += total/arr[i];	
				total %= arr[i];
			}
		}
		count = count * arr[13] + total;
		return count;
	}
	
	static int TIMING(int[] arr, int num) {
		
		int count = 0, down = 0, up = 0, cnt = 0;
		int total = num;
		
		for(int i=1; i<arr.length; i++) {
			int temp = arr[i-1];
			int now = arr[i];
			
			if(temp < now) {
				up++;
				down = 0;
			} else if(temp > now) {
				down++;
				up = 0;
			} 
			
			if(up == 3 && count > 0) {
				count = count*now+total; 
				cnt++;
			} else if(down >= 3 && now <= total ) {
					count += total/now;
					total %= now;
			}
			
			if (i == 13) {
				if(cnt == 0) 
					count = count*arr[13]+total;
			}	
		}
		return count;
	}
}