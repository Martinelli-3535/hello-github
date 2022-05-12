import java.util.*;
public class Cal_Today {
	

	public static void main(String[] args) {
		Calendar today = Calendar.getInstance();
        int year = today.get(Calendar.YEAR);
        int month = today.get(Calendar.MONTH);
        int date = today.get(Calendar.DATE);
        
        int hour12 = today.get(Calendar.HOUR);
        int hour24 = today.get(Calendar.HOUR_OF_DAY);
        int minute = today.get(Calendar.MINUTE);
        int second = today.get(Calendar.SECOND);
        
        System.out.println(year+"년 "+(month+1)+"월 "+date+"일 "+hour12+"시 "+minute+"분 "+second+"초" );
	}

}
