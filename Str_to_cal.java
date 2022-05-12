import java.util.*;
public class Str_to_cal {
	
	 private static String toString(Calendar date) {
	        return date.get(Calendar.YEAR)+ "³â " + (date.get(Calendar.MONTH) +"¿ù " + date.get(Calendar.DATE) +"ÀÏ ");
	    }

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Calendar date1 = Calendar.getInstance();
		
		int year = scanner.nextInt();
		String slash1 = scanner.next();
		int month= scanner.nextInt();
		String slash2 = scanner.next();
		int day = scanner.nextInt();
		
		date1.set(year,month,day);
		System.out.println(toString(date1));
	}

}
