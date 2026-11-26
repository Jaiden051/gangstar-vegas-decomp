// Decompiled from classes.dex (SourceFile: AttributionIdentifiers.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.content.ContentResolver;
import android.net.Uri;
import android.os.Looper;
import android.util.Log;
public class AttributionIdentifiers {
    // Fields
    private static java.lang.String ANDROID_ID_COLUMN_NAME;
    private static java.lang.String ATTRIBUTION_ID_COLUMN_NAME;
    private static final android.net.Uri ATTRIBUTION_ID_CONTENT_URI;
    private static int CONNECTION_RESULT_SUCCESS;
    private static long IDENTIFIER_REFRESH_INTERVAL_MILLIS;
    private static java.lang.String LIMIT_TRACKING_COLUMN_NAME;
    private static final java.lang.String TAG;
    private static com.facebook.internal.AttributionIdentifiers recentlyFetchedIdentifiers;
    private java.lang.String androidAdvertiserId;
    private java.lang.String attributionId;
    private long fetchTime;
    private boolean limitTracking;

    // Methods
    static
    {
      TAG = com.facebook.internal.AttributionIdentifiers.class.getCanonicalName();
      ATTRIBUTION_ID_CONTENT_URI = Uri.parse("content://com.facebook.katana.provider.AttributionIdProvider");
    }

    public AttributionIdentifiers()
    {
      super();
    }

    private static com.facebook.internal.AttributionIdentifiers getAndroidId(
            android.content.Context p0)
    {
      com.facebook.internal.AttributionIdentifiers v1;
      Class[] v5;
      java.lang.reflect.Method MethodQuietly; // RETVAL
      Object[] v7;
      Object v8; // RETVAL
      Class[] v9;
      java.lang.reflect.Method v10; // RETVAL
      Object[] v11;
      Object v12; // RETVAL
      Object v13;
      java.lang.reflect.Method v14;
      java.lang.reflect.Method v15; // RETVAL
      java.lang.reflect.Method v16;
      v1 = new com.facebook.internal.AttributionIdentifiers();
      try
      {
        if ( Looper.myLooper() == Looper.getMainLooper() )
          throw new com.facebook.FacebookException("getAndroidId cannot be called on the main thread.");
        v5 = new Class[1];
        v5[0] = android.content.Context.class;
        MethodQuietly = Utility.getMethodQuietly(
                          "com.google.android.gms.common.GooglePlayServicesUtil",
                          "isGooglePlayServicesAvailable",
                          v5);
        if ( MethodQuietly == null )
          return v1;
        v7 = new Object[1];
        v7[0] = p0;
        v8 = Utility.invokeMethodQuietly(null, MethodQuietly, v7);
        if ( !(v8 instanceof Integer) || ((Integer)v8).intValue() != 0 )
          return v1;
        v9 = new Class[1];
        v9[0] = android.content.Context.class;
        v10 = Utility.getMethodQuietly(
                "com.google.android.gms.ads.identifier.AdvertisingIdClient",
                "getAdvertisingIdInfo",
                v9);
        if ( v10 == null )
          return v1;
        v11 = new Object[1];
        v11[0] = p0;
        v12 = Utility.invokeMethodQuietly(null, v10, v11);
        v13 = v12;
        if ( v12 == null )
          return v1;
        v14 = Utility.getMethodQuietly(v12.getClass(), "getId", new Class[0]);
        v15 = Utility.getMethodQuietly(v13.getClass(), "isLimitAdTrackingEnabled", new Class[0]);
        v16 = v15;
        if ( v14 == null || v15 == null )
          return v1;
        v1.androidAdvertiserId = (String)Utility.invokeMethodQuietly(v13, v14, new Object[0]);
        v1.limitTracking = ((Boolean)Utility.invokeMethodQuietly(v13, v16, new Object[0])).booleanValue();
      }
      catch ( Exception v2 )
      {
        Utility.logd("android_id", v2);
      }
      return v1;
    }

    public static com.facebook.internal.AttributionIdentifiers getAttributionIdentifiers(
            android.content.Context p0)
    {
      com.facebook.internal.AttributionIdentifiers AndroidId = null;
      int v4 = 0;
      String[] v5 = null;
      android.content.ContentResolver ContentResolver = null;
      android.database.Cursor v7 = null; // RETVAL
      android.database.Cursor v8 = null;
      int ColumnIndex = 0;
      int v10 = 0;
      int v11 = 0;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
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
              if ( recentlyFetchedIdentifiers != null && System.currentTimeMillis() - recentlyFetchedIdentifiers.fetchTime < 3600000 )
              return recentlyFetchedIdentifiers;
              AndroidId = getAndroidId(p0);
              v4 = 3;
              _ehCatchPc = 10;
              v5 = new String[3];
              v5[0] = "aid";
              v5[1] = "androidid";
              v5[2] = "limit_tracking";
              ContentResolver = p0.getContentResolver();
              v7 = ContentResolver.query(ATTRIBUTION_ID_CONTENT_URI, v5, null, null, null);
              v8 = v7;
              if ( !(v7 == null) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( v8 != null )
              v8.close();
              return AndroidId;
            case 2:
              _ehCatchPc = 7;
              _ehCatchPc = 3;
              if ( !v7.moveToFirst() )
              { _pc = 1; continue _sm; }
              ColumnIndex = v8.getColumnIndex("aid");
              v10 = v8.getColumnIndex("androidid");
              v11 = v8.getColumnIndex("limit_tracking");
              AndroidId.attributionId = v8.getString(ColumnIndex);
              if ( v10 > 0 && v11 > 0 && AndroidId.getAndroidAdvertiserId() == null )
              {
              AndroidId.androidAdvertiserId = v8.getString(v10);
              AndroidId.limitTracking = Boolean.parseBoolean(v8.getString(v11));
              }
              if ( v8 != null )
              v8.close();
              AndroidId.fetchTime = System.currentTimeMillis();
              recentlyFetchedIdentifiers = AndroidId;
              return AndroidId;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              _pc = 4;
              continue _sm;
            case 4:
              Log.d(TAG, "Caught unexpected exception in getAttributionId(): " + _cv_1.toString());
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _pc = 9;
              continue _sm;
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _pc = 12;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v8 != null )
              v8.close();
              return null;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 11; continue _sm; }
              v8 = null;
              _pc = 4;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v8 = null;
              _pc = 12;
              continue _sm;
            case 12:
              if ( v8 != null )
              v8.close();
              throw _cv_2;
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    public String getAndroidAdvertiserId()
    {
      return this.androidAdvertiserId;
    }

    public String getAttributionId()
    {
      return this.attributionId;
    }

    public boolean isTrackingLimited()
    {
      return this.limitTracking;
    }

}
