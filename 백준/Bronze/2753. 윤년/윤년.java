import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		
		if(N % 4 == 0) {
			if(N % 100 != 0 || N % 400 == 0) {
				System.out.println(1);
				return;
			} 
		} 
		System.out.println(0);
	}
}
