// Decompiled from classes.dex (SourceFile: InsightsLogger.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Logger;
public class InsightsLogger {
    // Fields
    private static java.lang.String EVENT_NAME_LOG_CONVERSION_PIXEL;
    private static java.lang.String EVENT_PARAMETER_PIXEL_ID;
    private static java.lang.String EVENT_PARAMETER_PIXEL_VALUE;
    private com.facebook.AppEventsLogger appEventsLogger;

    // Methods
    private InsightsLogger(android.content.Context p0, String p1, com.facebook.Session p2)
    {
      super();
      this.appEventsLogger = AppEventsLogger.newLogger(p0, p1, p2);
    }

    public static com.facebook.InsightsLogger newLogger(android.content.Context p0, String p1)
    {
      return new com.facebook.InsightsLogger(p0, null, null);
    }

    public static com.facebook.InsightsLogger newLogger(android.content.Context p0, String p1, String p2)
    {
      return new com.facebook.InsightsLogger(p0, p2, null);
    }

    public static com.facebook.InsightsLogger newLogger(
            android.content.Context p0,
            String p1,
            String p2,
            com.facebook.Session p3)
    {
      return new com.facebook.InsightsLogger(p0, p2, p3);
    }

    public void logConversionPixel(String p0, double p1)
    {
      android.os.Bundle v3;
      if ( p0 != null )
      {
        v3 = new android.os.Bundle();
        v3.putString("fb_offsite_pixel_id", p0);
        v3.putDouble("fb_offsite_pixel_value", p1);
        this.appEventsLogger.logEvent("fb_log_offsite_pixel", p1, v3);
        AppEventsLogger.eagerFlush();
      }
      else
      {
        Logger.log(LoggingBehavior.DEVELOPER_ERRORS, "Insights", "pixelID cannot be null");
      }
    }

    public void logPurchase(java.math.BigDecimal p0, java.util.Currency p1)
    {
      this.logPurchase(p0, p1, null);
    }

    public void logPurchase(java.math.BigDecimal p0, java.util.Currency p1, android.os.Bundle p2)
    {
      this.appEventsLogger.logPurchase(p0, p1, p2);
    }

}
