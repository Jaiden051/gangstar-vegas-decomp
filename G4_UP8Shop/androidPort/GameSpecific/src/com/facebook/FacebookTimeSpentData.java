// Decompiled from classes.dex (SourceFile: FacebookTimeSpentData.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Logger;
class FacebookTimeSpentData implements java.io.Serializable {
    // Fields
    private static long APP_ACTIVATE_SUPPRESSION_PERIOD_IN_MILLISECONDS;
    private static long FIRST_TIME_LOAD_RESUME_TIME;
    private static final long[] INACTIVE_SECONDS_QUANTA;
    private static long INTERRUPTION_THRESHOLD_MILLISECONDS;
    private static long NUM_MILLISECONDS_IDLE_TO_BE_NEW_SESSION;
    private static final java.lang.String TAG;
    private static long serialVersionUID;
    private java.lang.String firstOpenSourceApplication;
    private int interruptionCount;
    private boolean isAppActive;
    private boolean isWarmLaunch;
    private long lastActivateEventLoggedTime;
    private long lastResumeTime;
    private long lastSuspendTime;
    private long millisecondsSpentInSession;

    // Methods
    static
    {
      TAG = com.facebook.AppEventsLogger.class.getCanonicalName();
      INACTIVE_SECONDS_QUANTA = new long[]
                                {
                                  300000, 900000, 1800000, 3600000, 21600000, 43200000, 86400000, 172800000, 259200000,
                                  604800000, 1209600000, 1814400000, 2419200000L, 5184000000L, 7776000000L, 10368000000L,
                                  12960000000L, 15552000000L, 31536000000L
                                };
    }

    FacebookTimeSpentData()
    {
      super();
      this.resetSession();
    }

    private FacebookTimeSpentData(long p0, long p2, long p4, int p6)
    {
      super();
      this.resetSession();
      this.lastResumeTime = p0;
      this.lastSuspendTime = p2;
      this.millisecondsSpentInSession = p4;
      this.interruptionCount = p6;
    }

    /* synthetic */ FacebookTimeSpentData(long p0, long p2, long p4, int p6, com.facebook.FacebookTimeSpentData$1 p7)
    {
      this(p0, p2, p4, p6);
    }

    private FacebookTimeSpentData(long p0, long p2, long p4, int p6, String p7)
    {
      super();
      this.resetSession();
      this.lastResumeTime = p0;
      this.lastSuspendTime = p2;
      this.millisecondsSpentInSession = p4;
      this.interruptionCount = p6;
      this.firstOpenSourceApplication = p7;
    }

    /* synthetic */ FacebookTimeSpentData(
            long p0,
            long p2,
            long p4,
            int p6,
            String p7,
            com.facebook.FacebookTimeSpentData$1 p8)
    {
      this(p0, p2, p4, p6, p7);
    }

    private static int getQuantaIndex(long p0)
    {
      int i;
      for ( i = 0; i < INACTIVE_SECONDS_QUANTA.length && INACTIVE_SECONDS_QUANTA[i] < p0; ++i )
        ;
      return i;
    }

    private boolean isColdLaunch()
    {
      this.isWarmLaunch = true;
      return !this.isWarmLaunch;
    }

    private void logAppDeactivatedEvent(com.facebook.AppEventsLogger p0, long p1)
    {
      android.os.Bundle v3;
      Object[] v4;
      v3 = new android.os.Bundle();
      v3.putInt("fb_mobile_app_interruptions", this.interruptionCount);
      v4 = new Object[1];
      v4[0] = Integer.valueOf(getQuantaIndex(p1));
      v3.putString("fb_mobile_time_between_sessions", String.format("session_quanta_%d", v4));
      v3.putString("fb_mobile_launch_source", this.firstOpenSourceApplication);
      p0.logEvent("fb_mobile_deactivate_app", (double)(this.millisecondsSpentInSession / 1000), v3);
      this.resetSession();
    }

    private void resetSession()
    {
      this.isAppActive = false;
      this.lastResumeTime = -1;
      this.lastSuspendTime = -1;
      this.interruptionCount = 0;
      this.millisecondsSpentInSession = 0;
    }

    private boolean wasSuspendedEver()
    {
      return this.lastSuspendTime != -1;
    }

    private Object writeReplace()
    {
      return new com.facebook.FacebookTimeSpentData$SerializationProxyV2(this.lastResumeTime, this.lastSuspendTime, this.millisecondsSpentInSession, this.interruptionCount, this.firstOpenSourceApplication);
    }

    void onResume(com.facebook.AppEventsLogger p0, long p1, String p3)
    {
      long v4;
      android.os.Bundle v5;
      long v6;
      v4 = 0;
      if ( this.isColdLaunch() || p1 - this.lastActivateEventLoggedTime > 300000 )
      {
        v5 = new android.os.Bundle();
        v5.putString("fb_mobile_launch_source", p3);
        p0.logEvent("fb_mobile_activate_app", v5);
        this.lastActivateEventLoggedTime = p1;
      }
      if ( this.isAppActive )
      {
        Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Resume for active app");
      }
      else
      {
        if ( this.wasSuspendedEver() )
          v6 = p1 - this.lastSuspendTime;
        else
          v6 = 0;
        if ( v6 >= 0 )
          v4 = v6;
        else
          Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Clock skew detected");
        if ( v4 <= 60000 )
        {
          if ( v4 > 1000 )
            ++this.interruptionCount;
        }
        else
        {
          this.logAppDeactivatedEvent(p0, v4);
        }
        if ( this.interruptionCount == 0 )
          this.firstOpenSourceApplication = p3;
        this.lastResumeTime = p1;
        this.isAppActive = true;
      }
    }

    void onSuspend(com.facebook.AppEventsLogger p0, long p1)
    {
      long v3;
      long v4;
      v3 = 0;
      if ( this.isAppActive )
      {
        v4 = p1 - this.lastResumeTime;
        if ( v4 >= 0 )
          v3 = v4;
        else
          Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Clock skew detected");
        this.millisecondsSpentInSession += v3;
        this.lastSuspendTime = p1;
        this.isAppActive = false;
      }
      else
      {
        Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Suspend for inactive app");
      }
    }

}
