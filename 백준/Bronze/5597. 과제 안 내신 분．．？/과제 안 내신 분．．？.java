import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int num;
		boolean[] check = new boolean[31];
		
		for(int i=0; i<28; i++) {
			num = Integer.parseInt(br.readLine());
			check[num] = true;
		}
		
		for(int i=1; i<=30; i++) {
			if(!check[i]) 
				System.out.println(i);
		}
		
	}
}