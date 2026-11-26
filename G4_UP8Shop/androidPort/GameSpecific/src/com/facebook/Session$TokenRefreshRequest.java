// Decompiled from classes.dex (SourceFile: Session$TokenRefreshRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.Message;
import com.facebook.internal.NativeProtocol;
class Session$TokenRefreshRequest implements android.content.ServiceConnection {
    // Fields
    final android.os.Messenger messageReceiver;
    android.os.Messenger messageSender;
    final com.facebook.Session this$0;

    // Methods
    Session$TokenRefreshRequest(com.facebook.Session p0)
    {
      super();
      this.this$0 = p0;
      this.messageReceiver = new android.os.Messenger(new com.facebook.Session$TokenRefreshRequestHandler(this.this$0, this));
      this.messageSender = null;
    
    }

    /* synthetic */ static void access$1700(com.facebook.Session$TokenRefreshRequest p0)
    {
      p0.cleanup();
    }

    private void cleanup()
    {
      if ( Session.access$1600(this.this$0) == this )
        Session.access$1602(this.this$0, null);
    }

    private void refreshToken()
    {
      android.os.Bundle v1;
      android.os.Message v2; // RETVAL
    
      v1 = new android.os.Bundle();
      v1.putString("access_token", this.this$0.getTokenInfo().getToken());
      v2 = Message.obtain();
      v2.setData(v1);
      v2.replyTo = this.messageReceiver;
      try
      {
        this.messageSender.send(v2);
      }
      catch ( android.os.RemoteException e )
      {
        this.cleanup();
      }
    }

    public void bind()
    {
      android.content.Intent TokenRefreshIntent;
      TokenRefreshIntent = NativeProtocol.createTokenRefreshIntent(Session.getStaticContext());
      if ( TokenRefreshIntent != null
        && Session.access$1500().bindService(TokenRefreshIntent, (android.content.ServiceConnection)this, 1) )
      {
        this.this$0.setLastAttemptedTokenExtendDate(new java.util.Date());
      }
      else
      {
        this.cleanup();
      }
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      this.messageSender = new android.os.Messenger(p1);
      this.refreshToken();
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      this.cleanup();
      try
      {
        Session.access$1500().unbindService((android.content.ServiceConnection)this);
      }
      catch ( IllegalArgumentException e )
      {
      }
    }

}
