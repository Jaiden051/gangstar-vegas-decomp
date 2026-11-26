// Decompiled from classes.dex (SourceFile: AppLinks.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.net.Uri;
import com.facebook.AppLinkData;
public final class AppLinks {
    // Fields
    static java.lang.String a;
    static java.lang.String b;
    static java.lang.String c;

    // Methods
    public AppLinks()
    {
      super();
    }

    public static android.os.Bundle getAppLinkData(android.content.Intent p0)
    {
      return p0.getBundleExtra("al_applink_data");
    }

    public static android.os.Bundle getAppLinkExtras(android.content.Intent p0)
    {
      android.os.Bundle AppLinkData; // RETVAL
    
      AppLinkData = getAppLinkData(p0);
      if ( AppLinkData != null )
        return AppLinkData.getBundle("extras");
      else
        return null;
    }

    public static android.net.Uri getTargetUrl(android.content.Intent p0)
    {
      android.os.Bundle AppLinkData; // RETVAL
      String String; // RETVAL
    
      AppLinkData = getAppLinkData(p0);
      if ( AppLinkData != null && (String = AppLinkData.getString("target_url")) != null )
        return Uri.parse(String);
      else
        return p0.getData();
    }

    public static android.net.Uri getTargetUrlFromInboundIntent(
            android.content.Context p0,
            android.content.Intent p1)
    {
      android.net.Uri v2;
      android.os.Bundle AppLinkData; // RETVAL
      String String; // RETVAL
    
      v2 = null;
      AppLinkData = getAppLinkData(p1);
      if ( AppLinkData != null )
      {
        String = AppLinkData.getString("target_url");
        if ( String != null )
        {
          MeasurementEvent.sendBroadcastEvent(p0, "al_nav_in", p1, null);
          return Uri.parse(String);
        }
      }
      return v2;
    }

}
