import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Queue<Integer> q = new LinkedList<Integer>();
		
		int N = Integer.parseInt(br.readLine());
		int[] asset = new int[14];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		for(int i=0; i<14; i++) {
			asset[i] = Integer.parseInt(st.nextToken());
            q.add(asset[i]);
		}
		
		int bnp = 0, bnp_n = N, bnp_cnt = 0;
		int j = 1, cnt_up = 0, cnt_down = 0, cnt = 0, timing = 0, timing_n = N;

		q.add(asset[0]);
		while(true) {
			
			int top = q.peek();
			int bnp_num = q.peek();
			q.poll();
			
			if(bnp_num <= N) {
				bnp_cnt++;
				if(bnp_cnt == 1) {
					bnp += bnp_n/bnp_num;
					bnp_n %= bnp_num;
				}
			}
			
			if(top < asset[j]) {
				cnt_up++;
				cnt_down = 0;
				
				if(cnt_up == 3 && timing > 0) {
					timing *= asset[j];
					timing += timing_n;
					cnt++;
				} 
				
			} else if (top > asset[j]) {
				cnt_down++;
				cnt_up = 0;
				
				if(cnt_down >= 3) {
					timing += timing_n/asset[j];
					timing_n %= asset[j];
				}
			}
			
			j++;
			
			if(j == 13) {
				if(cnt == 0) {
					timing *= asset[j];
					timing += timing_n;
				}
				bnp *= asset[j];
				bnp += bnp_n;
                
                q.clear();
				break;
			}
		}

		if(bnp < timing) {
			System.out.println("TIMING");
			return;
		} else if(bnp == timing) {
			System.out.println("SAMESAME");
			return;
		}
		System.out.println("BNP");
	}
}
