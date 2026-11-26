// Decompiled from classes.dex (SourceFile: Facebook$TokenRefreshConnectionHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

import com.facebook.LegacyHelper;
class Facebook$TokenRefreshConnectionHandler extends android.os.Handler {
    // Fields
    java.lang.ref.WeakReference connectionWeakReference;
    java.lang.ref.WeakReference facebookWeakReference;

    // Methods
    Facebook$TokenRefreshConnectionHandler(
            com.facebook.android.Facebook p0,
            com.facebook.android.Facebook$TokenRefreshServiceConnection p1)
    {
      super();
      this.facebookWeakReference = new java.lang.ref.WeakReference(p0);
      this.connectionWeakReference = new java.lang.ref.WeakReference(p1);
    }

    public void handleMessage(android.os.Message p0)
    {
      com.facebook.android.Facebook v2;
      com.facebook.android.Facebook$TokenRefreshServiceConnection v3;
      String String;
      long v5;
      com.facebook.Session v6;
      android.os.Bundle v7;
      String v8;
      com.facebook.android.Facebook$ServiceListener serviceListener;
      Error v10;
      v2 = (com.facebook.android.Facebook)this.facebookWeakReference.get();
      v3 = (com.facebook.android.Facebook$TokenRefreshServiceConnection)this.connectionWeakReference.get();
      if ( v2 != null && v3 != null )
      {
        String = p0.getData().getString("access_token");
        v5 = 1000 * p0.getData().getLong("expires_in");
        if ( String != null )
        {
          v2.setAccessToken(String);
          v2.setAccessExpires(v5);
          v6 = Facebook.access$200(v2);
          if ( v6 != null )
            LegacyHelper.extendTokenCompleted(v6, p0.getData());
          if ( v3.serviceListener != null )
          {
            v7 = (android.os.Bundle)p0.getData().clone();
            v7.putLong("expires_in", v5);
            v3.serviceListener.onComplete(v7);
          }
        }
        else if ( v3.serviceListener != null )
        {
          v8 = p0.getData().getString("error");
          if ( p0.getData().containsKey("error_code") )
          {
            v3.serviceListener.onFacebookError(new com.facebook.android.FacebookError(v8, null, p0.getData().getInt("error_code")));
          }
          else
          {
            serviceListener = v3.serviceListener;
            v10 = null;
            if ( v8 == null )
              v8 = "Unknown service error";
            serviceListener.onError((v10 = new Error(v8)));
          }
        }
        v3.applicationsContext.unbindService((android.content.ServiceConnection)v3);
      }
    }

}
