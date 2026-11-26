// Decompiled from classes.dex (SourceFile: Facebook$TokenRefreshServiceConnection.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

import android.os.Message;
class Facebook$TokenRefreshServiceConnection implements android.content.ServiceConnection {
    // Fields
    final android.content.Context applicationsContext;
    final android.os.Messenger messageReceiver;
    android.os.Messenger messageSender;
    final com.facebook.android.Facebook$ServiceListener serviceListener;
    final com.facebook.android.Facebook this$0;

    // Methods
    public Facebook$TokenRefreshServiceConnection(
            com.facebook.android.Facebook p0,
            android.content.Context p1,
            com.facebook.android.Facebook$ServiceListener p2)
    {
      super();
      this.this$0 = p0;
      this.messageReceiver = new android.os.Messenger(new com.facebook.android.Facebook$TokenRefreshConnectionHandler(this.this$0, this));
      this.messageSender = null;
      this.applicationsContext = p1;
      this.serviceListener = p2;
    
    }

    private void refreshToken()
    {
      android.os.Bundle v1;
      android.os.Message v2; // RETVAL
    
      v1 = new android.os.Bundle();
      v1.putString("access_token", Facebook.access$100(this.this$0));
      v2 = Message.obtain();
      v2.setData(v1);
      v2.replyTo = this.messageReceiver;
      try
      {
        this.messageSender.send(v2);
      }
      catch ( android.os.RemoteException e )
      {
        this.serviceListener.onError(new Error("Service connection error"));
      }
    }

    public void onServiceConnected(
            android.content.ComponentName p0,
            android.os.IBinder p1)
    {
      this.messageSender = new android.os.Messenger(p1);
      this.refreshToken();
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      this.serviceListener.onError(new Error("Service disconnected"));
      try
      {
        this.applicationsContext.unbindService((android.content.ServiceConnection)this);
      }
      catch ( IllegalArgumentException e )
      {
      }
    }

}
