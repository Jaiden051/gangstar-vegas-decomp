// Decompiled from classes.dex (SourceFile: AppEventsLogger$PersistedAppSessionInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.util.Log;
import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
import java.util.concurrent.TimeUnit;
class AppEventsLogger$PersistedAppSessionInfo {
    // Fields
    private static java.lang.String PERSISTED_SESSION_INFO_FILENAME;
    private static final java.lang.Runnable appSessionInfoFlushRunnable;
    private static java.util.Map appSessionInfoMap;
    private static boolean hasChanges;
    private static boolean isLoaded;
    private static final java.lang.Object staticLock;

    // Methods
    static
    {
      staticLock = new Object();
      hasChanges = false;
      isLoaded = false;
      appSessionInfoFlushRunnable = (Runnable)new com.facebook.AppEventsLogger$PersistedAppSessionInfo$1();
    }

    AppEventsLogger$PersistedAppSessionInfo()
    {
      super();
    }

    private static com.facebook.FacebookTimeSpentData getTimeSpentData(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1)
    {
      com.facebook.FacebookTimeSpentData v2;
      restoreAppSessionInformation(p0);
      v2 = (com.facebook.FacebookTimeSpentData)appSessionInfoMap.get(p1);
      if ( v2 == null )
      {
        v2 = new com.facebook.FacebookTimeSpentData();
        appSessionInfoMap.put(p1, v2);
      }
      return v2;
    }

    static void onResume(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1,
            com.facebook.AppEventsLogger p2,
            long p3,
            String p5)
    {
      Object v5;
      v5 = staticLock;
      synchronized ( v5 )
      {
        getTimeSpentData(p0, p1).onResume(p2, p3, p5);
        onTimeSpentDataUpdate();
      }
    }

    static void onSuspend(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1,
            com.facebook.AppEventsLogger p2,
            long p3)
    {
      Object v4;
      v4 = staticLock;
      synchronized ( v4 )
      {
        getTimeSpentData(p0, p1).onSuspend(p2, p3);
        onTimeSpentDataUpdate();
      }
    }

    private static void onTimeSpentDataUpdate()
    {
      if ( !hasChanges )
      {
        hasChanges = true;
        AppEventsLogger.access$1400().schedule(appSessionInfoFlushRunnable, 30, TimeUnit.SECONDS);
      }
    }

    private static void restoreAppSessionInformation(android.content.Context p0)
    {
      java.io.Closeable v1 = null;
      Object v2 = null;
      java.io.ObjectInputStream v3 = null;
      Exception v6 = null;
      Exception v7 = null;
      Object v9 = null;
      Object v10 = null;
      Throwable _cv_1 = null;
      Exception _cv_2 = null;
      Throwable _cv_3 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v1 = null;
              v2 = staticLock;
              com.gameloft.android.DecompRT.monitorEnter(v2);
              if ( isLoaded )
              return;
              _ehCatchPc = 5;
              v3 = new java.io.ObjectInputStream(p0.openFileInput("AppEventsLogger.persistedsessioninfo"));
              _ehCatchPc = 1;
              try
              {
              appSessionInfoMap = (java.util.HashMap)v3.readObject();
              Logger.log(LoggingBehavior.APP_EVENTS, "AppEvents", "App session info loaded");
              Utility.closeQuietly(v3);
              p0.deleteFile("AppEventsLogger.persistedsessioninfo");
              if ( appSessionInfoMap == null )
              appSessionInfoMap = new java.util.HashMap();
              isLoaded = true;
              hasChanges = false;
              return;
              }
              catch ( java.io.FileNotFoundException e )
              {
              v1 = v3;
              { _pc = 6; continue _sm; }
              }
              catch ( Exception v12 )
              {
              v7 = v12;
              { _pc = 8; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v10 = _cv_1;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v3);
              p0.deleteFile("AppEventsLogger.persistedsessioninfo");
              if ( appSessionInfoMap == null )
              appSessionInfoMap = new java.util.HashMap();
              isLoaded = true;
              hasChanges = false;
              throw com.gameloft.android.DecompRT.sneakyThrow(v10);
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              Utility.closeQuietly(v3);
              p0.deleteFile("AppEventsLogger.persistedsessioninfo");
              if ( appSessionInfoMap == null )
              appSessionInfoMap = new java.util.HashMap();
              isLoaded = true;
              hasChanges = false;
              _ehCatchPc = -1;
              _pc = 11;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 7; continue _sm; }
              _pc = 6;
              continue _sm;
            case 6:
              Utility.closeQuietly(v1);
              p0.deleteFile("AppEventsLogger.persistedsessioninfo");
              if ( appSessionInfoMap == null )
              appSessionInfoMap = new java.util.HashMap();
              isLoaded = true;
              hasChanges = false;
              _pc = 11;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v6 = _cv_2;
              v3 = null;
              v7 = v6;
              _pc = 8;
              continue _sm;
            case 8:
              Log.d(AppEventsLogger.access$1300(), "Got unexpected exception: " + v7.toString());
              _pc = 4;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 10; continue _sm; }
              _cv_3 = (Throwable)_ehCaught;
              v9 = _cv_3;
              v3 = null;
              v10 = v9;
              _pc = 2;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    static void saveAppSessionInformation(android.content.Context p0)
    {
      Object v1 = null;
      java.io.ObjectOutputStream v2 = null;
      Throwable _cv_1 = null;
      Exception _cv_2 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v1 = staticLock;
              com.gameloft.android.DecompRT.monitorEnter(v1);
              if ( !hasChanges )
              return;
              _ehCatchPc = 5;
              v2 = new java.io.ObjectOutputStream(new java.io.BufferedOutputStream(p0.openFileOutput("AppEventsLogger.persistedsessioninfo", 0)));
              _ehCatchPc = 1;
              try
              {
              v2.writeObject(appSessionInfoMap);
              hasChanges = false;
              Logger.log(LoggingBehavior.APP_EVENTS, "AppEvents", "App session info saved");
              Utility.closeQuietly(v2);
              return;
              }
              catch ( Exception v3 )
              {
              { _pc = 6; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v2);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              Utility.closeQuietly(v2);
              _ehCatchPc = -1;
              _pc = 9;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 7; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v2 = null;
              _pc = 6;
              continue _sm;
            case 6:
              Log.d(AppEventsLogger.access$1300(), "Got unexpected exception: " + _cv_2.toString());
              _pc = 4;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              v2 = null;
              _pc = 2;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
