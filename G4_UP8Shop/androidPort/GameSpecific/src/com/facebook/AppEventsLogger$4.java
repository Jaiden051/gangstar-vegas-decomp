// Decompiled from classes.dex (SourceFile: AppEventsLogger$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.Utility;
final class AppEventsLogger$4 implements java.lang.Runnable {
    // Methods
    AppEventsLogger$4()
    {
      super();
    }

    public final void run()
    {
      java.util.Set v1;
      Object v2; // RETVAL
      Object v3;
      java.util.Iterator i;
      java.util.Iterator j;
      v1 = new java.util.HashSet();
      v2 = AppEventsLogger.access$400();
      v3 = v2;
      synchronized ( v3 )
      {
        for ( i = AppEventsLogger.access$500().keySet().iterator();
              i.hasNext();
              v1.add(((com.facebook.AppEventsLogger$AccessTokenAppIdPair)i.next()).getApplicationId()) )
        {
          ;
        }
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
      for ( j = v1.iterator(); j.hasNext(); Utility.queryAppSettings((String)j.next(), true) )
        ;
    }

}
