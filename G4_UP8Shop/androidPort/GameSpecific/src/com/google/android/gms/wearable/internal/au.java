// Decompiled from classes.dex (SourceFile: au.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.os.Message;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import com.google.android.gms.wearable.Asset;
import com.google.android.gms.wearable.PutDataRequest;
import java.util.concurrent.Executors;
public class au extends com.google.android.gms.internal.hc {
    // Fields
    private final java.util.concurrent.ExecutorService a;
    private final java.util.HashMap b;
    private final java.util.HashMap c;
    private final java.util.HashMap g;

    // Methods
    public au(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3)
    {
      super(p0, p1, p2, p3, new String[0]);
      this.a = Executors.newCachedThreadPool();
      this.b = new java.util.HashMap();
      this.c = new java.util.HashMap();
      this.g = new java.util.HashMap();
    }

    private java.util.concurrent.FutureTask<Boolean> a(android.os.ParcelFileDescriptor p0, byte[] p1)
    {
      return new java.util.concurrent.FutureTask((java.util.concurrent.Callable)new com.google.android.gms.wearable.internal.au$11(this, p0, p1));
    }

    private void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.internal.ac p1)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$10(this, p0), new com.google.android.gms.wearable.internal.ao(p1));
    }

    /* synthetic */ static java.util.HashMap b(com.google.android.gms.wearable.internal.au p0)
    {
      return p0.b;
    }

    private static com.google.android.gms.wearable.internal.ad bz(android.os.IBinder p0)
    {
      return ad$a.by(p0);
    }

    /* synthetic */ static java.util.HashMap c(com.google.android.gms.wearable.internal.au p0)
    {
      return p0.c;
    }

    /* synthetic */ static java.util.HashMap d(com.google.android.gms.wearable.internal.au p0)
    {
      return p0.g;
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)ad$a.by(p0);
    }

    protected final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      com.google.android.gms.wearable.internal.ab v4;
      com.google.android.gms.wearable.internal.ad v5;
      java.util.Iterator v6;
      java.util.Map.Entry v7;
      java.util.Iterator v9;
      java.util.Map.Entry v10;
      java.util.Iterator v11;
      java.util.Map.Entry v12;
      if ( Log.isLoggable("WearableClient", 2) )
        Log.d("WearableClient", "onPostInitHandler: statusCode " + p0);
      if ( p0 == 0 )
      {
        try
        {
          v4 = new com.google.android.gms.wearable.internal.au$1(this);
          if ( Log.isLoggable("WearableClient", 2) )
            Log.d("WearableClient", "onPostInitHandler: service " + p1);
          v5 = ad$a.by(p1);
          v6 = this.b.entrySet().iterator();
          while ( v6.hasNext() )
          {
            v7 = (java.util.Map.Entry)v6.next();
            if ( Log.isLoggable("WearableClient", 2) )
              Log.d("WearableClient", "onPostInitHandler: adding Data listener " + v7.getValue());
            v5.a(v4, new com.google.android.gms.wearable.internal.b((com.google.android.gms.wearable.internal.av)v7.getValue()));
          }
          v9 = this.c.entrySet().iterator();
          while ( v9.hasNext() )
          {
            v10 = (java.util.Map.Entry)v9.next();
            if ( Log.isLoggable("WearableClient", 2) )
              Log.d("WearableClient", "onPostInitHandler: adding Message listener " + v10.getValue());
            v5.a(v4, new com.google.android.gms.wearable.internal.b((com.google.android.gms.wearable.internal.av)v10.getValue()));
          }
          v11 = this.g.entrySet().iterator();
          while ( v11.hasNext() )
          {
            v12 = (java.util.Map.Entry)v11.next();
            if ( Log.isLoggable("WearableClient", 2) )
              Log.d("WearableClient", "onPostInitHandler: adding Node listener " + v12.getValue());
            v5.a(v4, new com.google.android.gms.wearable.internal.b((com.google.android.gms.wearable.internal.av)v12.getValue()));
          }
        }
        catch ( android.os.RemoteException v8 )
        {
          Log.d("WearableClient", "WearableClientImpl.onPostInitHandler: error while adding listener", v8);
        }
      }
      Log.d("WearableClient", "WearableClientImpl.onPostInitHandler: done");
      super.a(p0, p1, p2);
    }

    public final void a(com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataItemBuffer> p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).d(new com.google.android.gms.wearable.internal.au$13(this, p0));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$DataItemResult> p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$12(this, p0), p1);
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$GetFdForAssetResult> p0,
            com.google.android.gms.wearable.Asset p1)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$4(this, p0), p1);
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.DataApi$DataListener p1)
 throws android.os.RemoteException {
      java.util.HashMap b;
      com.google.android.gms.wearable.internal.ac v4;
      b = this.b;
      synchronized ( b )
      {
        v4 = (com.google.android.gms.wearable.internal.ac)this.b.remove(p1);
      }
      if ( v4 != null )
        this.a(p0, v4);
      else
        p0.a(new com.google.android.gms.common.api.Status(4002));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.DataApi$DataListener p1,
            android.content.IntentFilter[] p2)
 throws android.os.RemoteException {
      com.google.android.gms.wearable.internal.av v4;
      java.util.HashMap b;
      v4 = av.a(p1, p2);
      b = this.b;
      synchronized ( b )
      {
        if ( this.b.get(p1) != null )
        {
          p0.a(new com.google.android.gms.common.api.Status(4001));
          return;
        }
        this.b.put(p1, v4);
      }
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$7(this, p1, p0), new com.google.android.gms.wearable.internal.b(v4));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$GetFdForAssetResult> p0,
            com.google.android.gms.wearable.DataItemAsset p1)
 throws android.os.RemoteException {
      this.a(p0, Asset.createFromRef(p1.a()));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1)
 throws android.os.RemoteException {
      java.util.HashMap c;
      com.google.android.gms.wearable.internal.ac v4;
      c = this.c;
      synchronized ( c )
      {
        v4 = (com.google.android.gms.wearable.internal.ac)this.c.remove(p1);
        if ( v4 != null )
          this.a(p0, v4);
        else
          p0.a(new com.google.android.gms.common.api.Status(4002));
        return;
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1,
            android.content.IntentFilter[] p2)
 throws android.os.RemoteException {
      com.google.android.gms.wearable.internal.av v4;
      java.util.HashMap c;
      v4 = av.a(p1, p2);
      c = this.c;
      synchronized ( c )
      {
        if ( this.c.get(p1) != null )
        {
          p0.a(new com.google.android.gms.common.api.Status(4001));
          return;
        }
        this.c.put(p1, v4);
      }
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$8(this, p1, p0), new com.google.android.gms.wearable.internal.b(v4));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.NodeApi$NodeListener p1)
 throws android.os.RemoteException {
      com.google.android.gms.wearable.internal.av v3;
      java.util.HashMap g;
      v3 = av.a(p1);
      g = this.g;
      synchronized ( g )
      {
        if ( this.g.get(p1) != null )
        {
          p0.a(new com.google.android.gms.common.api.Status(4001));
          return;
        }
        this.g.put(p1, v3);
      }
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$9(this, p1, p0), new com.google.android.gms.wearable.internal.b(v3));
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$DataItemResult> p0,
            com.google.android.gms.wearable.PutDataRequest p1)
 throws android.os.RemoteException {
      java.util.Iterator v3;
      com.google.android.gms.wearable.Asset v4;
      com.google.android.gms.wearable.PutDataRequest v5;
      java.util.List v6;
      java.util.Iterator v7;
      java.util.Map.Entry v8;
      com.google.android.gms.wearable.Asset v9;
      byte[] v10; // RETVAL
      android.os.ParcelFileDescriptor[] Pipe; // RETVAL
      android.os.ParcelFileDescriptor[] v12;
      java.util.concurrent.FutureTask v13;
      v3 = p1.c().entrySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (com.google.android.gms.wearable.Asset)((java.util.Map.Entry)v3.next()).getValue();
        if ( v4.a() == null && v4.b() == null && v4.c() == null && v4.d() == null )
          throw new IllegalArgumentException("Put for " + p1.a() + " contains invalid asset: " + v4);
      }
      v5 = PutDataRequest.j(p1.a());
      v5.a(p1.b());
      v6 = new java.util.ArrayList();
      v7 = p1.c().entrySet().iterator();
      while ( v7.hasNext() )
      {
        v8 = (java.util.Map.Entry)v7.next();
        v9 = (com.google.android.gms.wearable.Asset)v8.getValue();
        v10 = v9.a();
        if ( v10 != null )
        {
          try
          {
            Pipe = ParcelFileDescriptor.createPipe();
          }
          catch ( java.io.IOException v14 )
          {
            throw new IllegalStateException("Unable to create ParcelFileDescriptor for asset in request: " + p1, v14);
          }
          v12 = Pipe;
          if ( Log.isLoggable("WearableClient", 3) )
            Log.d(
              "WearableClient",
              "processAssets: replacing data with FD in asset: " + v9 + " read:" + v12[0] + " write:" + v12[1]);
          v5.a((String)v8.getKey(), Asset.createFromFd(v12[0]));
          v13 = new java.util.concurrent.FutureTask((java.util.concurrent.Callable)new com.google.android.gms.wearable.internal.au$11(this, v12[1], v9.a()));
          v6.add(v13);
          this.a.submit(v13);
        }
        else
        {
          v5.a((String)v8.getKey(), (com.google.android.gms.wearable.Asset)v8.getValue());
        }
      }
      try
      {
        ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$a(p0, v6), v5);
      }
      catch ( NullPointerException v15 )
      {
        throw new IllegalStateException("Unable to putDataItem: " + p1, v15);
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.MessageApi$SendMessageResult> p0,
            String p1,
            String p2,
            byte[] p3)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).a(new com.google.android.gms.wearable.internal.au$3(this, p0), p1, p2, p3);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.e(p1, 5077000, this.E().getPackageName());
    }

    public final void b()
 throws android.os.RemoteException {
      super.b();
      this.b.clear();
      this.c.clear();
      this.g.clear();
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.NodeApi$GetLocalNodeResult> p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).e(new com.google.android.gms.wearable.internal.au$5(this, p0));
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataItemBuffer> p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).b(new com.google.android.gms.wearable.internal.au$14(this, p0), p1);
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            com.google.android.gms.wearable.NodeApi$NodeListener p1)
 throws android.os.RemoteException {
      java.util.HashMap g;
      com.google.android.gms.wearable.internal.ac v4;
      g = this.g;
      synchronized ( g )
      {
        v4 = (com.google.android.gms.wearable.internal.ac)this.g.remove(p1);
        if ( v4 != null )
          this.a(p0, v4);
        else
          p0.a(new com.google.android.gms.common.api.Status(4002));
        return;
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.NodeApi$GetConnectedNodesResult> p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).f(new com.google.android.gms.wearable.internal.au$6(this, p0));
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.wearable.DataApi$DeleteDataItemsResult> p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.ad)this.H()).c(new com.google.android.gms.wearable.internal.au$2(this, p0), p1);
    }

    protected final String e()
    {
      return "com.google.android.gms.wearable.internal.IWearableService";
    }

    protected final String f()
    {
      return "com.google.android.gms.wearable.BIND";
    }

}
