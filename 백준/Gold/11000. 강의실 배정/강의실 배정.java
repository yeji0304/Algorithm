import java.util.*;
import java.io.*;

public class Main {
	
	static class Lecture implements Comparable<Lecture>{
		int start;
		int end;
		
		public Lecture(int start, int end) {
			this.start = start;
			this.end = end;
		}

		@Override
		public int compareTo(Lecture o) {
			// TODO Auto-generated method stub
			if(this.start == o.start) {
				return this.end - o.end;
			} else
				return this.start - o.start;
		}
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PriorityQueue<Integer> pq = new PriorityQueue<>();
		
		int n = Integer.parseInt(br.readLine());	// 수업 개수
		Lecture[] lecture = new Lecture[n];
		
		for(int i=0; i<n; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			
			int start = Integer.parseInt(st.nextToken());
			int end = Integer.parseInt(st.nextToken());
			lecture[i] = new Lecture(start, end);
		}
	
		Arrays.sort(lecture);
		pq.offer(lecture[0].end);
		
		for(int i=1; i<n; i++) {
			if(pq.peek() <= lecture[i].start) {
				pq.poll();
			}
			pq.offer(lecture[i].end);
		}
		
		System.out.println(pq.size());
	}
}