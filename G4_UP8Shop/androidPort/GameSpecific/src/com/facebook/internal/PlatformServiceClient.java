// Decompiled from classes.dex (SourceFile: PlatformServiceClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.os.Message;
public abstract class PlatformServiceClient implements android.content.ServiceConnection {
    // Fields
    private final java.lang.String applicationId;
    private final android.content.Context context;
    private final android.os.Handler handler;
    private com.facebook.internal.PlatformServiceClient$CompletedListener listener;
    private final int protocolVersion;
    private int replyMessage;
    private int requestMessage;
    private boolean running;
    private android.os.Messenger sender;

    // Methods
    public PlatformServiceClient(android.content.Context p0, int p1, int p2, int p3, String p4)
    {
      super();
      android.content.Context ApplicationContext; // RETVAL
      ApplicationContext = p0.getApplicationContext();
      if ( ApplicationContext != null )
        p0 = ApplicationContext;
      this.context = p0;
      this.requestMessage = p1;
      this.replyMessage = p2;
      this.applicationId = p4;
      this.protocolVersion = p3;
      this.handler = new com.facebook.internal.PlatformServiceClient$1(this);
    
    }

    private void callback(android.os.Bundle p0)
    {
      com.facebook.internal.PlatformServiceClient$CompletedListener listener;
      if ( this.running )
      {
        this.running = false;
        listener = this.listener;
        if ( listener != null )
          listener.completed(p0);
      }
    }

    private void sendMessage()
    {
      android.os.Bundle v1;
      android.os.Message v2; // RETVAL
    
      v1 = new android.os.Bundle();
      v1.putString("com.facebook.platform.extra.APPLICATION_ID", this.applicationId);
      this.populateRequestBundle(v1);
      v2 = Message.obtain(null, this.requestMessage);
      v2.arg1 = this.protocolVersion;
      v2.setData(v1);
      v2.replyTo = new android.os.Messenger(this.handler);
      try
      {
        this.sender.send(v2);
      }
      catch ( android.os.RemoteException e )
      {
        this.callback(null);
      }
    }

    public void cancel()
    {
      this.running = false;
    }

    protected android.content.Context getContext()
    {
      return this.context;
    }

    protected void handleMessage(android.os.Message p0)
    {
      android.os.Bundle Data;
      if ( p0.what == this.replyMessage )
      {
        Data = p0.getData();
        if ( Data.getString("com.facebook.platform.status.ERROR_TYPE") != null )
          this.callback(null);
        else
          this.callback(Data);
        this.context.unbindService((android.content.ServiceConnection)this);
      }
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      this.sender = new android.os.Messenger(p1);
      this.sendMessage();
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      this.sender = null;
      try
      {
        this.context.unbindService((android.content.ServiceConnection)this);
      }
      catch ( IllegalArgumentException e )
      {
      }
      this.callback(null);
    }

    protected abstract void populateRequestBundle(android.os.Bundle p0);

    public void setCompletedListener(
            com.facebook.internal.PlatformServiceClient$CompletedListener p0)
    {
      this.listener = p0;
    }

    public boolean start()
    {
      boolean v1;
      android.content.Intent PlatformServiceIntent; // RETVAL
    
      v1 = false;
      if ( !this.running
        && NativeProtocol.getLatestAvailableProtocolVersionForService(this.context, this.protocolVersion) != -1 )
      {
        PlatformServiceIntent = NativeProtocol.createPlatformServiceIntent(this.context);
        if ( PlatformServiceIntent != null )
        {
          this.running = true;
          this.context.bindService(PlatformServiceIntent, (android.content.ServiceConnection)this, 1);
          return true;
        }
      }
      return v1;
    }

}
