import java.util.*;
import java.io.*;

public class Main {
	
	static Map<String, int[]> left_map, right_map;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		left_map = new HashMap<>();
		right_map = new HashMap<>();
		Keyboard();
		
		String left = st.nextToken();
		String right = st.nextToken();
		String str = br.readLine();
		
		int answer = Cal(left, right, str);
		System.out.println(answer);
	}
	
	static int Cal(String left, String right, String str) {
		int count = 0;

		for(char i : str.toCharArray()) {
			int[] tmp1, tmp2;
			
			if(left_map.containsKey(i+"")) {
				tmp1 = left_map.get(left);
				tmp2 = left_map.get(i+"");
				left = i+"";
			} else {
				tmp1 = right_map.get(right);
				tmp2 = right_map.get(i+"");
				right = i+"";
			}
			count += Math.abs(tmp1[0] - tmp2[0]) + Math.abs(tmp1[1] - tmp2[1]);
			count += 1;
		}
		return count;
	}
	
	static void Keyboard() {
		left_map.put("q", new int[] {0,0});
		left_map.put("w", new int[] {0,1});
		left_map.put("e", new int[] {0,2});
		left_map.put("r", new int[] {0,3});
		left_map.put("t", new int[] {0,4});
		right_map.put("y", new int[] {0,5});
		right_map.put("u", new int[] {0,6});
		right_map.put("i", new int[] {0,7});
		right_map.put("o", new int[] {0,8});
		right_map.put("p", new int[] {0,9});
		
		left_map.put("a", new int[] {1,0});
		left_map.put("s", new int[] {1,1});
		left_map.put("d", new int[] {1,2});
		left_map.put("f", new int[] {1,3});
		left_map.put("g", new int[] {1,4});
		right_map.put("h", new int[] {1,5});
		right_map.put("j", new int[] {1,6});
		right_map.put("k", new int[] {1,7});
		right_map.put("l", new int[] {1,8});
		
		left_map.put("z", new int[] {2,0});
		left_map.put("x", new int[] {2,1});
		left_map.put("c", new int[] {2,2});
		left_map.put("v", new int[] {2,3});
		right_map.put("b", new int[] {2,4});
		right_map.put("n", new int[] {2,5});
		right_map.put("m", new int[] {2,6});
	}
}