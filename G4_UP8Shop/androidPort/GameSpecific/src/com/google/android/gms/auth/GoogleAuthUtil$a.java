// Decompiled from classes.dex (SourceFile: GoogleAuthUtil$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.auth;

import android.os.Looper;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
class GoogleAuthUtil$a extends android.os.Handler {
    // Fields
    private final android.content.Context a;

    // Methods
    GoogleAuthUtil$a(android.content.Context p0)
    {
      super(((Looper.myLooper() != null) ? (Looper.myLooper()) : (Looper.getMainLooper())));
      this.a = p0;
    }

    public void handleMessage(android.os.Message p0)
    {
      int isGooglePlayServicesAvailable;
      if ( p0.what == 1 )
      {
        isGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(this.a);
        if ( GooglePlayServicesUtil.isUserRecoverableError(isGooglePlayServicesAvailable) )
          GooglePlayServicesUtil.showErrorNotification(isGooglePlayServicesAvailable, this.a);
      }
      else
      {
        Log.wtf("GoogleAuthUtil", "Don't know how to handle this message: " + p0.what);
      }
    }

}
